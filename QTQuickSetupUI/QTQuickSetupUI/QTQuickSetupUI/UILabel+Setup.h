//
//  UILabel+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/20.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Setup)
- (UILabel *(^)(NSString *text))qt_setText;
- (UILabel *(^)(UIColor *textColor))qt_setTextColor;
- (UILabel *(^)(UIFont *font))qt_setFont;
- (UILabel *(^)(NSTextAlignment textAlignment))qt_setTextAlignment;
- (UILabel *(^)(NSInteger numberOfline))qt_setNumberOfLine;

/// 设置背景颜色 参数:(UIColor *)
- (UILabel *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

/// 设置边框颜色 参数:(UIColor *)
- (UILabel *(^)(UIColor *borderColor))qt_setBorderColor;

/// 设置frame 参数:(CGRect)
- (UILabel *(^)(CGRect frame))qt_setFrame;

/// 将view添加到父视图 参数:(UIView *)
- (UILabel *(^)(UIView *superView))qt_setSuperView;

/// 设置边框宽度 参数:(CGFloat )
- (UILabel *(^)(CGFloat borderwidth))qt_setBorderWidth;

/// 设置圆角大小 参数:(CGFloat )
- (UILabel *(^)(CGFloat radius))qt_setRadius;

/// 是否裁剪边框 参数:(BOOL )
- (UILabel *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

/// 设置中心点 参数:(CGPoint )
- (UILabel *(^)(CGPoint center))qt_setCenter;

/// 设置TransForm 参数:(CGAffineTransform )
- (UILabel *(^)(CGAffineTransform transForm))qt_setTransForm;

/// 设置是否隐藏 参数:(BOOL )
- (UILabel *(^)(BOOL hidden))qt_setHidden;

/// 设置是否交互响应 参数:(BOOL )
- (UILabel *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;

@end
