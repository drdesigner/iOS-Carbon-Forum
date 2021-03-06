//
//  UIColor+WSFExtension.h
//  iOS-Carbon-Forum
//
//  Created by WangShengFeng on 15/12/3.
//  Copyright © 2015年 WangShengFeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (WSFExtension)

+ (UIColor *)randomColor;

+ (instancetype)colorWithHex:(NSString*)hex andAlpha:(CGFloat)alpha;

@end
