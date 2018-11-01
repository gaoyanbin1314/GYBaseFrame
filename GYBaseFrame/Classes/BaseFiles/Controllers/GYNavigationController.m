//
//  GYNavigationController.m
//  GYBaseFrame
//
//  Created by 高艳彬 on 2018/11/1.
//  Copyright © 2018年 GYB. All rights reserved.
//

#import "GYNavigationController.h"

@interface GYNavigationController ()

@end

@implementation GYNavigationController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // 设置为不透明
    [[UINavigationBar appearance] setTranslucent:NO];
    
    [[UINavigationBar appearance] setTintColor:KMainGreenColor];
    // 设置导航栏背景颜色
    [UINavigationBar appearance].barTintColor = kWhiteColor ;
    // 设置导航栏标题文字颜色
    // 创建字典保存文字大小和颜色
    NSMutableDictionary * color = [NSMutableDictionary dictionary];
    color[NSFontAttributeName] = kFont(17.0f);
    color[NSForegroundColorAttributeName] = KMainGreenColor;
    [[UINavigationBar appearance] setTitleTextAttributes:color];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

-(void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated {
    
    if (self.viewControllers.count > 0) {
        
        if ([viewController isKindOfClass:[UIViewController class]] == NO) return ;
        if (viewController.hidesBottomBarWhenPushed == NO) {
            viewController.hidesBottomBarWhenPushed = YES;
        }
        
        //        UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, SCALE(44), SCALE(44))];
        //        [btn setImage:[UIImage imageNamed:@"endVersionBack"] forState:UIControlStateNormal];
        ////        btn.imageEdgeInsets = UIEdgeInsetsMake(0, SCALE(-40), 0, 0);
        //        btn.tintColor = [UIColor whiteColor];
        //        [btn addTarget:self action:@selector(popViewControllerAnimated:) forControlEvents:UIControlEventTouchUpInside];
        //        UIBarButtonItem *leftItem = [[UIBarButtonItem alloc] initWithCustomView:btn];
        //
        //        viewController.navigationItem.leftBarButtonItem = leftItem;
    } else {
        //            viewController.navigationItem.leftBarButtonItem = [UIBarButtonItem itemWithTitle:@"" tintColor:[UIColor colorWithRed:0.42f green:0.33f blue:0.27f alpha:1.00f] touchBlock:nil];
    }
    
    [super pushViewController:viewController animated:animated];
}

-(void)dealloc {
    NSLog(@"%s 已经被销毁！",__func__);
}

@end
