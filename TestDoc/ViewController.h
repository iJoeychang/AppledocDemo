//
//  ViewController.h
//  TestDoc
//
//  Created by xu_hui on 15/2/26.
//  Copyright (c) 2015年 xu_hui. All rights reserved.
//
//  第一个视图控制器类

#import <UIKit/UIKit.h>


@class FirstDomain;

/** 第一行是类的简介
 
 在简介的下面,就是类的详细介绍了。
 没有间隔换行会被消除，就像Html那样。
 
 下面是常用的markdown语法
 
 - - -
 
 无序列表: (每行以 '*'、'-'、'+' 开头):
 
 * this is the first line
 * this is the second line
 * this is the third line
 
 有序列表: (每行以 1.2.3、a.b.c 开头):
 
 a. this is the first line
 b. this is the secode line
 
 多级列表:
 
 * this is the first line
 a. this is line a
 b. this is line b
 * this is the second line
 1. this in line 1
 2. this is line 2
 
 标题:
 
 # This is an H1
 ## This is an H2
 ### This is an H3
 #### This is an h4
 ##### This is an h5
 ###### This is an H6
 
 链接:
 
 普通URL直接写上，appledoc会自动翻译成链接: http://blog.ibireme.com
 
 [这个](http://example.net/) 链接会隐藏实际URL.
 
 表格:
 
 | header1 | header2 | header3 |
 |---------|:-------:|--------:|
 | normal  |  center |  right  |
 | cell    | cell    | cell    |
 
 引用:
 
 这里会引用到方法 `someMethod:`，这里会引用到类 `YYColor`
 
 这里会引用到一个代码块
 
 void CMYK2RGB(float c, float m, float y, float k,
 float *r, float *g, float *b) {
 *r = (1 - c) * (1 - k);
 *g = (1 - m) * (1 - k);
 *b = (1 - y) * (1 - k);
 }
 
 @since iOS5.0
 
 */
@interface ViewController : UIViewController

@property (nonatomic, strong) NSString *str; // 双斜杠注释的第一个字符串
/**
 *  第二个字符串
 */
@property (nonatomic, strong) NSString *str2;
///这里是属性的说明
@property (nonatomic, strong) NSString *str3;
/**
 *  INT类型的变量
 */
@property (nonatomic) int i;
/**
 *  NSUInteger类型的变量
 */
@property (nonatomic) NSUInteger ii;
/**
 *  FLOAT类型的变量
 */
@property (nonatomic) float ff;

/**
 *  我的第一个方法
 *
 *  @param str 字符串参数
 */
- (void)myFirstMethod:(NSString *)str;
/**
 *  我的第二个方法
 *
 *  @param str1 参数一
 *  @param str2 参数二
 *
 *  @return 返回值
 */
- (NSString *)mySecondMethod:(NSString *)str1 str2:(NSString *)str2;
/**
 *  我的第三个方法
 *
 *  @see FirstDomain
 *  @return 自定义实体类
 */

- (FirstDomain *)myThirdMethod;

@end
