//
//  GYBaseViewControllsViewController.h
//  GYBaseFrame
//
//  Created by 高艳彬 on 2018/11/1.
//  Copyright © 2018年 GYB. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GYBaseViewControllsViewController : UIViewController
/*
 *  是否隐藏左边的 自动添加的 naviBaritem
 */
@property (nonatomic, assign) BOOL  isHideLeftNaviItem;

- (void)popToReset:(UIButton *)button;

- (void)pop;

- (void)popToRootVc;

- (void)popToVc:(UIViewController *)vc;

- (void)dismiss;

- (void)dismissWithCompletion:(void(^)(void))completion;

- (void)presentVc:(UIViewController *)vc;

- (void)presentVc:(UIViewController *)vc completion:(void (^)(void))completion;

- (void)pushVc:(UIViewController *)vc;

- (void)removeChildVc:(UIViewController *)childVc;

- (void)addChildVc:(UIViewController *)childVc;

/** 加载中*/
- (void)showLoadingAnimation;

/** 停止加载*/
- (void)hideLoadingAnimation;

/** 请求数据，交给子类去实现*/
- (void)loadData;

@property (nonatomic, assign) BOOL isNetworkReachable;

@end

NS_ASSUME_NONNULL_END
