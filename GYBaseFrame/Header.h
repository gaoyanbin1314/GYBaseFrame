//
//  Header.h
//  GYBaseFrame
//
//  Created by 高艳彬 on 2018/11/1.
//  Copyright © 2018年 GYB. All rights reserved.
//

#ifndef Header_h
#define Header_h

/**
 *  弱指针
 */
#define WeakSelf(weakSelf)  __weak __typeof(&*self)weakSelf = self;
#define WeakObj(o) __weak typeof(o) o##Weak = o;

// 日志输出
#ifdef DEBUG
#define GYLog(...) NSLog(__VA_ARGS__)
#else
#define GYLog(...)
#endif

//屏幕尺寸
#define SCREEN_WIDTH    ([[UIScreen mainScreen] bounds].size.width)
//#define SCREEN_HEIGHT   ([[UIScreen mainScreen] bounds].size.height == 812. ? [[UIScreen mainScreen] bounds].size.height - 24 :[[UIScreen mainScreen] bounds].size.height)
#define SCREEN_HEIGHT   ([[UIScreen mainScreen] bounds].size.height)

#define SCREEN_iPhoneX (SCREEN_WIDTH == 375.f && SCREEN_HEIGHT == 812.f ? YES : NO)

#define SCREEN_StatusBarAndNavBarHeight  (SCREEN_iPhoneX ? 88.f : 64.f)
#define SCREEN_TabbarHeight    (SCREEN_iPhoneX ? (49.f+34.f) : 49.f)
#define SCREEN_TabbarSafeBottomMargin (SCREEN_iPhoneX ? 34.f : 0.f)
#define SCREEN_StatusSafeAreaHeight  (SCREEN_iPhoneX ? 24.f : 0.f)

//iPhoneX留白高度
#define IPHONEX_StatusBarHeight  (SCREEN_iPhoneX ? 44.f : 20.f)

#define TOP_NAV_STATUS_HEIGHT (SCREEN_iPhoneX ? 88.f : 64.f)
#define BOTTOM_TABBAR_HEIGHT (SCREEN_iPhoneX ? (49.f+34.f) : 49.f)
#define BOTTOM_HEIGHT (SCREEN_iPhoneX ? 34.f : 0.f)

#define IPHONEX_NAV_HEIGHT 88.f
#define IPHONEX_TABBAR_HEIGHT (49.f+34.f)
/**
 待编稿库选稿操作记录选择的位置
 */
#define GYTOEDITMANUNAME @"GYToEditManuscriptName"
#define GYTOEDITMANUID @"GYToEditManuscriptID"

//生产地址KEY
#define COLLECTINGANDEDITING @"CollectingAndEditing"
//采编地址KEY
#define PODUCTION @"poduction"
//配置的名字
#define CONGFIGWITHNAME @"configWithName"

/**
 记录选择服务器
 */
#define tagInter @"tagIndexPath"
/**
 个人偏好设置--账号密码
 */
//#define userNameStr @"zhangHaoPassWord"
//#define passWordStr @"mimaPassWord"

#define GYCbUserCode @"gy_cb_usercode"
#define GYCbPassWord @"gy_cb_password"

/**
 个人偏好设置--大样列表 批注显示状态
 */
#define PAPERDETAILIST @"detailDrawingState"

/**
 个人偏好设置--是否允许获取定位
 */
#define USER_LOCATION_STATUS @"userLocationStatus"

/**
 个人偏好设置 -- 是否开启提示声
 */
#define USER_MSG_SOUND_STATUS @"userMessageSoundStatus"

/**
 个人偏好设置 -- 是否开启振动
 */
#define USER_MSG_VIBRATION_STATUS @"userMessageVibrationStatus"

/**
 记录上一次登录系统情况
 */
#define GYTHTLASTLOGINMETHOD @"GYTheLastLoginMethod"

/**
 购买权限 -- 是否购买翔宇
 */
#define GYTHEXYBUYTRANS @"GYTheXyBuyTrans"

/**
 购买权限 -- 是否购买采编
 */
#define GYTHECBBUYTRANS @"GYTheCbBuyTrans"

/**
 购买权限 -- 即时通讯购买权限
 */
#define GYTHEIMTRANS @"GYTheIMBuyTrans"

/**
 购买权限 -- 大数据购买权限
 */
#define GYTHEBIGDATATRANS @"GYTheBigDataBuyTrans"


/**
 取消侧滑手势的通知
 */
#define CANCLEPAN @"CANCLEPANNOTIFICATION"

/**
 dismiss通知名
 */
#define DISSMISSTOLOGINVIEW @"DISSMISSTILOGINVIEWNOTIFICATION"

/**
 送讨论开始通知
 */
#define DISCUSSIONSTARTNOTIFICATION @"DiscussionStartNotification"
/*
 *   上传视频的通知
 */
#define VIDEOUPLOAD_GETPROGRESS @"getVideoProgress"
#define VIDEOUPLOAD_FINISHUPLOAD @"FinishUploadVideo"
#define VIDEOUPLOAD_FailUPLOAD    @"FailUploadVideo"
#define VIDEOUPLOAD_AUTOUPLOAD     @"autoUpload"
#define VIDEOUPLOAD_AUTOSUSPEND     @"autoSuspend"

//
/*
 *  检测网络状态的通知
 */
#define NETWORKSTATUSNOTREACH @"NotReachable"
#define NETWORKSTATUSWWAN @"ReachableViaWWAN"
#define NETWORKSTATUSWIFI @"ReachabilityStatusWIFI"

/**
 *  上传视频的状态。是否允许蜂窝网络和Wi-Fi
 */
#define UPLOADSTATUSFORWWAN @"UploadStatusForWWAN"

/**
 *  上传视频的状态。是否允许蜂窝网络和Wi-Fi
 */
#define ISALLOWBIGDATA @"IsAllowBigData"


/**
 送讨论结束通知
 */
#define DISCUSSIONENDNOTIFICATION @"DiscussionEndNotification"

/**
 注册初始化NIMSDK成功的通知
 */
#define GYNIMSDKSTARTNOTIFICATION @"GYNIMSDKStartNotification"

/**
 工作室修改稿件成功之后发送自定义消息通知
 */
#define GYTEAMMAUNSCRIPTEDITNOTIFICATION @"GYTeamManuScriptEditNotification"

/**
 大数据新闻获取数据字段
 */
#define GYRECENTDATATYPE @[@"news",@"bbs",@"blog",@"wechat",@"weibo",@"app",@"epaper"]
#define SORTSARRAY @[@{@"field":@"pubdate",@"order":@"desc",}]
//#define SEARCHSORTSARRAY @[@{@"field":@"_score",@"order":@"desc",}]

/**
 部门库送定稿会操作记录选择的部门
 */
#define GYMANUSENDFINALSELECTNODE   @"GYManuSendFinalSelectNode"

#define NTES_FORBID_INTERACTIVE_POP - (BOOL)forbidInteractivePop{return YES;}
#define NTES_USE_CLEAR_BAR - (BOOL)useClearBar{return YES;}

//设备型号
#define IS_IPAD     [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad
#define IS_IPHONE   [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone
#define IS_IPHONE_4 (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double )480) < DBL_EPSILON )
#define IS_IPHONE_5 (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double )568) < DBL_EPSILON )
#define IS_IPHONE_6 (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double )667) < DBL_EPSILON )
#define IS_IPHONE_6_PLUS (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double )960) < DBL_EPSILON )

#pragma mark - 尺寸
#define CategoryButtonW 40
#define CategoryButtonH 80

#pragma mark - #pragma mark - 颜色相关
#define kWhiteColor [UIColor whiteColor]
#define kBlackColor [UIColor blackColor]
#define kDarkGrayColor [UIColor darkGrayColor]
#define kLightGrayColor [UIColor lightGrayColor]
#define kGrayColor [UIColor grayColor]
#define kRedColor [UIColor redColor]
#define kGreenColor [UIColor greenColor]
#define kBlueColor [UIColor blueColor]
#define kCyanColor [UIColor cyanColor]
#define kYellowColor [UIColor yellowColor]
#define kMagentaColor [UIColor magentaColor]
#define kOrangeColor [UIColor orangeColor]
#define kPurpleColor [UIColor purpleColor]
#define kBrownColor [UIColor brownColor]
#define kClearColor [UIColor clearColor]
//#define KMainGreenColor  UIColorFromRGB(0x59B19A)
#define KMainGreenColor  UIColorFromRGB(0xE87B31)
#define kSeperatorColor kRGBColor(234,237,240)
#define kAuditIdentiColor UIColorFromRGB(0x09bb07)

#define kLineHeight (1 / [UIScreen mainScreen].scale)

#define kRGBColor(r,g,b) kRGBAColor(r,g,b,1.0f)
#define kRGBAColor(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define UIColorFromRGBA(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]

#define HHColor(r, g, b, al) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:al]

/***  普通字体 */
#define kFont(size) [UIFont systemFontOfSize:size]

/** 主题颜色(橘黄) **/
#define DEFAULT_THEME_COLOR  UIColorFromRGB(0xE87B31)

/** 字体默认颜色(浅黑) **/
#define DEFAULT_FONT_COLOR [UIColor colorWithRed:45/255.0f green:46/255.0f blue:47/255.0f alpha:1]
/** 边框颜色(浅灰) **/
#define DEFAULT_BORDER_COLOR UIColorFromRGB(0xF5F5F5)

/** 默认背景色 **/
#define DEFAULT_BACKGROUND_COLOR [UIColor colorWithRed:0.94f green:0.94f blue:0.94f alpha:1.00f]

/** 字体默认大小（标题/[作者时间信息]/内容） **/
// 正文详情
#define DETAIL_TITLE_FONT_SIZE SCALE(20.)
#define DETAIL_SUBTITLE_FONT_SIZE SCALE(14.)
#define DETAIL_CONTENT_FONT_SIZE SCALE(16.)
// 列表
#define LIST_TITLE_FONT_SIZE SCALE(18.)
#define LIST_SUBTITLE_FONT_SIZE SCALE(12.)

/** 本地存储key 设置字体大小后存储本地**/
#define DETAILTITLEFONT @"detailTitleFont" //正文标题
#define DETAILSUBUTITLEFONT @"detailSubtitleFont" //正文作者时间等信息
#define DETAILCONTENTFONT @"detailContentFont" //正文内容

#define LISTTITLEFONT @"listTitleFont" //列表标题
#define LISTSUBTITLEFONT @"listSubtitleFont" //列表作者时间信息等

#define SUCCESS_MESSAGE @"成功！"
#define BUTTONINDEX @"homeinfoButtonIndex"
#define BUTTONVALUE @"homeinfoButtonValue"
//#define NOTIFICATIONBUTTONVIEWCHANGE @"notificationViewChange"

#define NOTIFICATIONSORTVIEWCHANGE @"notificationSortViewChange"
#define KEYWORDSADDARRAY [NSString stringWithFormat:@"%@%@", @"keywordAddArray", [GYGlobleTransSetting sharedConfig].getCurrentUserID] //大数据新闻关键词展示
#define KEYWORDSSAVEACTION @"keywordsSaveAciton"//关键词添加删除操作
#define GYCOUNTYAREABASEURL @"GYCountyAreaBaseURL"
//判断数组是否为空
#define NULLArray(array) ((array == nil)||[array isKindOfClass:[NSNull class]]||array.count ==0)
//判断数组是否为空
#define NULLDic(dic) ((dic == nil)||[dic isKindOfClass:[NSNull class]]||dic == 0)
//判断字符串是否为空
#define NULLString(string) ((string == nil)||[string isKindOfClass:[NSNull class]]||string.length ==0 || [string isEqualToString:@"<null>"] || [string isEqualToString:@"(null)"] || string == NULL || [string isEqual:[NSNull null]] || [string isEqual:NULL])

///签发意见限制字数
#define SIGNOPINIONWORDCOUNT 85

///newsedit/newMobile/syn.do -- 记录用户登录接口
#define GYUSERLOGINDATA_MOBILE_SYN [NSString stringWithFormat:@"%@/newMobile/syn.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///newsedit/newMobile/syn.do -- 记录用户退出接口
#define GYUSERSIGNOUTDATA_MOBILE_SYN [NSString stringWithFormat:@"%@/newMobile/syn.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]

///newsedit/newsplan/screen.do
#define GYREQUESTNEWS_PLAN_SCREEN [NSString stringWithFormat:@"%@/newsplan/screen.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///newsedit/newMobile/syn.do
#define GYREQUESTNEW_MOBILE_SYN [NSString stringWithFormat:@"%@/newMobile/syn.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///newsedit/newsplan/syn.do
#define GYREQUESTNEWS_PLAN_SYN [NSString stringWithFormat:@"%@/newsplan/syn.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/getCheckSum.do
#define GYREQUESTNEWS_NIM_LOGINPASS [NSString stringWithFormat:@"%@/studioapp/getCheckSum.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/checkDiscuss.do
#define GYREQUESTNEWS_NIM_CHECKDISCUSS [NSString stringWithFormat:@"%@/studioapp/checkDiscuss.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/sendDiscuss.do
#define GYREQUESTNEWS_NIM_SENDDISCUSS [NSString stringWithFormat:@"%@/studioapp/sendDiscuss.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///172.19.32.166:8080/newsedit/studioapp/checkDiscuss.do
///localhost:8080/newsedit/newsedit/edit/DocSelect.do
#define GYREQUESTNEWS_NIM_SENDWORKTEAM [NSString stringWithFormat:@"%@/newsedit/edit/DocSelect.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/checkTeam.do
#define GYREQUESTNEWS_NIM_CHECKTEAM [NSString stringWithFormat:@"%@/studioapp/checkTeam.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/closeDiscuss.do
#define GYREQUESTNEWS_NIM_CLOSEDISCUSS [NSString stringWithFormat:@"%@/studioapp/closeDiscuss.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/saveRecords.do
#define GYREQUESTNEWS_NIM_SAVERECORD [NSString stringWithFormat:@"%@/studioapp/saveRecords.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/getDocs.do
#define GYREQUESTNEWS_NIM_GETDOCS [NSString stringWithFormat:@"%@/studioapp/getDocs.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/newWebDoc.do
#define GYREQUESTNEWS_NIM_NEWWEBDOC [NSString stringWithFormat:@"%@/studioapp/newWebDoc.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/getFriends.do
#define GYREQUESTNEWS_NIM_GETFRIENDS [NSString stringWithFormat:@"%@/studioapp/getFriends.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///获取区县报Request基础URL
#define GYPAPERREQUESTBASEURL [NSString stringWithFormat:@"%@/newMobile/syn.do",[GYGlobleTransSetting sharedConfig].getBaseURL]
//翔宇
#define XY_URL [NSString stringWithFormat:@"%@",[GYGlobleTransSetting sharedConfig].getUrlWithXy]
//#define XY_URL [NSString stringWithFormat:@"%@",@"https://newmedia.newaircloud.com/app_if"]
//#define XY_URL @"172.19.57.182:8080"

///studioapp/toNoticeDetail.do
#define GYREQUESTNEWS_NIM_GETTTEAMNOTICE [NSString stringWithFormat:@"%@/studioapp/toNoticeDetail.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]
///studioapp/pushNoticeToStudio.do
#define GYREQUESTNEWS_NIM_NEWTEAMNOTICE [NSString stringWithFormat:@"%@/studioapp/pushNoticeToStudio.do",[GYGlobleTransSetting sharedConfig].getUrlWithCb]

/*** 屏幕缩放比 */
#define SCALE(value) ((value)/375.0f*[UIScreen mainScreen].bounds.size.width)

//设备型号
#define IS_IPAD     [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad
#define IS_IPHONE   [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone
#define IS_IPHONE_4 (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double )480) < DBL_EPSILON )
#define IS_IPHONE_5 (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double )568) < DBL_EPSILON )
#define IS_IPHONE_6 (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double )667) < DBL_EPSILON )
#define IS_IPHONE_6_PLUS (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double )960) < DBL_EPSILON )
#define IS_IPHONE_6P (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double )960) < DBL_EPSILON )

#define IS_IPHONE_8P (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 736.0)

//系统版本
#define IS_IOS_VERSION   floorf([[UIDevice currentDevice].systemVersion floatValue])
#define IS_IOS_5    floorf([[UIDevice currentDevice].systemVersion floatValue]) ==5.0 ? 1 : 0
#define IS_IOS_6    floorf([[UIDevice currentDevice].systemVersion floatValue]) ==6.0 ? 1 : 0
#define IS_IOS_7    floorf([[UIDevice currentDevice].systemVersion floatValue]) ==7.0 ? 1 : 0
#define IS_IOS_8    floorf([[UIDevice currentDevice].systemVersion floatValue]) ==8.0 ? 1 : 0
#define IS_IOS_9    floorf([[UIDevice currentDevice].systemVersion floatValue]) ==9.0 ? 1 : 0

#define IS_IOS8Later    floorf([[UIDevice currentDevice].systemVersion floatValue]) > 8.0 ? 1 : 0

#define IS_IOS_GreaterThanOrEqualTo(value)   (([[UIDevice currentDevice].systemVersion floatValue]) >= (value) ? 1 : 0)

#define iOS11Later ([UIDevice currentDevice].systemVersion.floatValue >= 11.0f)

// 当前App版本
#define CURRENT_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]


//  数据库_多线程_上下文
#define COREDATA_THREAD_CONTEXT    @"thread_context"
//  数据库 表名
#define COREDATA_NAME_VIDEOCACHE    @"VideoCache"
#define COREDATA_NAME_TempCache     @"TempCache"


#endif /* Header_h */
