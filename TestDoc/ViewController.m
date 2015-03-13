//
//  ViewController.m
//  TestDoc
//
//  Created by xu_hui on 15/2/26.
//  Copyright (c) 2015年 xu_hui. All rights reserved.
//

#import "ViewController.h"
#import "FirstDomain.h"

@interface ViewController ()

@end

@implementation ViewController

#pragma mark - Custom Methods
/**
 *  我的第一个方法
 *
 *  @param str 字符串参数
 */
- (void)myFirstMethod:(NSString *)str {
    NSLog(@"%s", __PRETTY_FUNCTION__);
}

/**
 *  我的第二个方法
 *
 *  @param str1 参数一
 *  @param str2 参数二
 *
 *  @return 返回值
 */
- (NSString *)mySecondMethod:(NSString *)str1 str2:(NSString *)str2 {
    return @"STR";
}

- (FirstDomain *)myThirdMethod:(NSString *)str1 str2:(NSString *)str2 {
    FirstDomain *firstDomain = [[FirstDomain alloc] init];
    //  int i = 3;
    //  float ffffffffffffffff = 33333.f;
    return firstDomain;
}

/**
 *  我的第四个m文件定义的方法
 */
- (void)myForthMethod {
    NSLog(@"%s", __PRETTY_FUNCTION__);
}

#pragma mark - View Lifecycle Methods
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    NSLog(@"%s", __PRETTY_FUNCTION__);
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Title"
                                                    message:@"Message"
                                                   delegate:nil
                                          cancelButtonTitle:@"OK"
                                          otherButtonTitles:nil, nil];
    // UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Title"
    // message:@"Message" delegate:nil cancelButtonTitle:@"OK"
    // otherButtonTitles:nil, nil];
    [alert show];
}

/**
 *  接收到内存警告时候
 */
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
