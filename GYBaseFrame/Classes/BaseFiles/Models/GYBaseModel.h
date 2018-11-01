//
//  GYBaseModel.h
//  GYBaseFrame
//
//  Created by 高艳彬 on 2018/11/1.
//  Copyright © 2018年 GYB. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GYBaseModel : NSObject

/**
 *  字典数组转模型数组
 */
+ (NSMutableArray *)modelArrayWithDictArray:(NSArray *)response;

/**
 *  字典转模型
 */
+ (instancetype)modelWithDictionary:(NSDictionary *)dictionary;

/**
 *  模型包含模型数组
 */
+ (void)setUpModelClassInArrayWithContainDict:(NSDictionary *)dict;

/**
 *  字典数组转模型数组
 *  @param dict     模型包含模型数组 格式为 key-字段名字 value-[被包含的类名]
 */
+ (NSMutableArray *)modelArrayWithDictArray:(NSArray *)response containDict:(NSDictionary *)dict;

/**
 *  数组转模型
 */
+ (id)modelArrayWithXYArray:(NSArray *)array;


@end

NS_ASSUME_NONNULL_END
