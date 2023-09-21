//
//  UITextField+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/19.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (Setup)
- (UITextField *(^)(UIColor *placeColor))qt_setPlaceholdColor;
- (UITextField *(^)(NSString * borderColor))qt_setText;
- (UITextField *(^)(NSString * placehold))qt_setPlacehold;
- (UITextField *(^)(UIColor *textColor))qt_setTextColor;
- (UITextField *(^)(UIFont *font))qt_setFont;
- (UITextField *(^)(NSTextAlignment alignment))qt_setAlignment;

/// 设置背景颜色 参数:(UIColor *)
- (UITextField *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

/// 设置边框颜色 参数:(UIColor *)
- (UITextField *(^)(UIColor *borderColor))qt_setBorderColor;

/// 设置frame 参数:(CGRect)
- (UITextField *(^)(CGRect frame))qt_setFrame;

/// 将view添加到父视图 参数:(UIView *)
- (UITextField *(^)(UIView *superView))qt_setSuperView;

/// 设置边框宽度 参数:(CGFloat )
- (UITextField *(^)(CGFloat borderwidth))qt_setBorderWidth;

/// 设置圆角大小 参数:(CGFloat )
- (UITextField *(^)(CGFloat radius))qt_setRadius;

/// 是否裁剪边框 参数:(BOOL )
- (UITextField *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

/// 设置中心点 参数:(CGPoint )
- (UITextField *(^)(CGPoint center))qt_setCenter;

/// 设置TransForm 参数:(CGAffineTransform )
- (UITextField *(^)(CGAffineTransform transForm))qt_setTransForm;

/// 设置是否隐藏 参数:(BOOL )
- (UITextField *(^)(BOOL hidden))qt_setHidden;

/// 设置是否交互响应 参数:(BOOL )
- (UITextField *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;
