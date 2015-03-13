//
//  FirstDomain.h
//  TestDoc
//
//  Created by xu_hui on 15/2/26.
//  Copyright (c) 2015年 xu_hui. All rights reserved.
//
//  我的第一个实体类

#import <Foundation/Foundation.h>

@interface FirstDomain : NSObject

/**
 *  字符串
 */
@property (nonatomic, strong) NSString *domainStr;
/**
 *  字典
 */
@property (nonatomic) NSDictionary *domainDic;

#pragma mark - Custom Methods
/**
 *  实体类方法
 *
 *  @param ii  整数型
 *  @param ff  浮点型
 *  @param str 字符串型
 */
- (void)domainMethod:(int)ii sP:(float)ff thirdP:(NSString *)str;
/**
 *  返回数组
 *
 *  @param ii  整形
 *  @param dd  浮点型
 *  @param dic 字典
 *
 *  @return 数组
 */
- (NSArray *)domainReturnArray:(int)ii secondP:(double)dd thirdP:(NSDictionary *)dic;

@end
