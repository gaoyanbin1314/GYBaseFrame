//
//  GYBaseViewControllsViewController.m
//  GYBaseFrame
//
//  Created by 高艳彬 on 2018/11/1.
//  Copyright © 2018年 GYB. All rights reserved.
//

#import "GYBaseViewControllsViewController.h"

@interface GYBaseViewControllsViewController ()

@end

@implementation GYBaseViewControllsViewController

-(void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [UIView setAnimationsEnabled:YES];
}

-(void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.navigationController.interactivePopGestureRecognizer.enabled = YES ;
    self.navigationController.interactivePopGestureRecognizer.delegate = (id)self;
    [UIView setAnimationsEnabled:YES];
    if (@available(iOS 11.0, *)) {
        [[UIScrollView appearance] setContentInsetAdjustmentBehavior:UIScrollViewContentInsetAdjustmentNever];
    } else {
        // Fallback on earlier versions
        self.automaticallyAdjustsScrollViewInsets = NO;
    }
    self.edgesForExtendedLayout = UIRectEdgeNone;
    self.view.backgroundColor = [UIColor colorWithRed:0.94f green:0.94f blue:0.94f alpha:1.00f];
    
    [self setLeftBarButtonItem];
    
}

- (void)setLeftBarButtonItem{
    UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, SCALE(44), SCALE(44))];
    [btn setImage:[UIImage imageNamed:@"endVersionBack"] forState:UIControlStateNormal];
    //        btn.imageEdgeInsets = UIEdgeInsetsMake(0, SCALE(-40), 0, 0);
    btn.tintColor = [UIColor whiteColor];
    [btn addTarget:self action:@selector(popToReset:) forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *leftItem = [[UIBarButtonItem alloc] initWithCustomView:btn];
    self.navigationItem.leftBarButtonItem = leftItem;
}

- (void)setIsHideLeftNaviItem:(BOOL)isHideLeftNaviItem{
    
    if (isHideLeftNaviItem) {
        self.navigationItem.leftBarButtonItem = nil;
    }
}

- (void)popToReset:(UIButton *)button{
    
    [self pop];
}

- (void)pop {
    if (self.navigationController == nil) return ;
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)popToRootVc {
    if (self.navigationController == nil) return ;
    [self.navigationController popToRootViewControllerAnimated:YES];
}

- (void)popToVc:(UIViewController *)vc {
    if ([vc isKindOfClass:[UIViewController class]] == NO) return ;
    if (self.navigationController == nil) return ;
    [self.navigationController popToViewController:vc animated:YES];
}

- (void)dismiss {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)dismissWithCompletion:(void(^)())completion {
    [self dismissViewControllerAnimated:YES completion:completion];
}

- (void)presentVc:(UIViewController *)vc {
    if ([vc isKindOfClass:[UIViewController class]] == NO) return ;
    [self presentVc:vc completion:nil];
}

- (void)presentVc:(UIViewController *)vc completion:(void (^)(void))completion {
    if ([vc isKindOfClass:[UIViewController class]] == NO) return ;
    [self presentViewController:vc animated:YES completion:completion];
}

- (void)pushVc:(UIViewController *)vc {
    if ([vc isKindOfClass:[UIViewController class]] == NO) return ;
    if (self.navigationController == nil) return ;
    if (vc.hidesBottomBarWhenPushed == NO) {
        vc.hidesBottomBarWhenPushed = YES;
    }
    
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)removeChildVc:(UIViewController *)childVc {
    if ([childVc isKindOfClass:[UIViewController class]] == NO) {
        return ;
    }
    [childVc.view removeFromSuperview];
    [childVc willMoveToParentViewController:nil];
    [childVc removeFromParentViewController];
}

- (void)addChildVc:(UIViewController *)childVc {
    if ([childVc isKindOfClass:[UIViewController class]] == NO) {
        return ;
    }
    [childVc willMoveToParentViewController:self];
    [self addChildViewController:childVc];
    [self.view addSubview:childVc.view];
    childVc.view.frame = self.view.bounds;
}

-(void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    
    GYLog(@"%s",__func__);
}

//3D Touch action方法;
-(NSArray<id<UIPreviewActionItem>> *)previewActionItems{
    //3D Touch 弹出的个按钮
    UIPreviewAction * backAction = [UIPreviewAction actionWithTitle:@"关闭" style:UIPreviewActionStyleDefault handler:^(UIPreviewAction * _Nonnull action, UIViewController * _Nonnull previewViewController) {
    }];
    
    return  @[backAction];
}

@end
