//
//  UIImageView+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/19.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface UIImageView (Setup)


/// 设置image 参数:(UIImage *)
- (UIImageView *(^)(UIImage *image))qt_setImage;

/// 设置帧动画 参数:(NSArray *)
- (UIImageView *(^)(NSArray *animationImages))qt_setAnimationImages;


/// 设置背景颜色 参数:(UIColor *)
- (UIImageView *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

/// 设置边框颜色 参数:(UIColor *)
- (UIImageView *(^)(UIColor *borderColor))qt_setBorderColor;

/// 设置frame 参数:(CGRect)
- (UIImageView *(^)(CGRect frame))qt_setFrame;

/// 将view添加到父视图 参数:(UIView *)
- (UIImageView *(^)(UIView *superView))qt_setSuperView;

/// 设置边框宽度 参数:(CGFloat )
- (UIImageView *(^)(CGFloat borderwidth))qt_setBorderWidth;

/// 设置圆角大小 参数:(CGFloat )
- (UIImageView *(^)(CGFloat radius))qt_setRadius;

/// 是否裁剪边框 参数:(BOOL )
- (UIImageView *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

/// 设置中心点 参数:(CGPoint )
- (UIImageView *(^)(CGPoint center))qt_setCenter;

/// 设置TransForm 参数:(CGAffineTransform )
- (UIImageView *(^)(CGAffineTransform transForm))qt_setTransForm;

/// 设置是否隐藏 参数:(BOOL )
- (UIImageView *(^)(BOOL hidden))qt_setHidden;

/// 设置是否交互响应 参数:(BOOL )
- (UIImageView *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;

@end

