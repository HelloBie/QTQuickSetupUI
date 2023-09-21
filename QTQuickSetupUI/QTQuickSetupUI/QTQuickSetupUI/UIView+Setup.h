//
//  UIView+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/19.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Setup)
/**
 *  location
 */
@property(nonatomic, assign) CGPoint qt_origin;
@property(nonatomic, assign) CGFloat qt_top;
@property(nonatomic, assign) CGFloat qt_left;
@property(nonatomic, assign) CGFloat qt_bottom;
@property(nonatomic, assign) CGFloat qt_right;

/**
 *  center
 */
@property(nonatomic, assign) CGFloat qt_centerY;
@property(nonatomic, assign) CGFloat qt_centerX;

/**
 *  size
 */
@property(nonatomic, assign) CGFloat qt_x;
@property(nonatomic, assign) CGFloat qt_y;
@property(nonatomic, assign) CGSize qt_size;
@property(nonatomic, assign) CGFloat qt_height;
@property(nonatomic, assign) CGFloat qt_width;

/**
 *  Other Origin
 */
@property(nonatomic, assign, readonly) CGPoint qt_bottomLeft;
@property(nonatomic, assign, readonly) CGPoint qt_bottomRight;
@property(nonatomic, assign, readonly) CGPoint qt_topRight;


/// 将view内容转化为image
/// - Parameter scale: 图片尺寸
- (UIImage *)qt_getImageWithScale:(float)scale;

/// 设置背景颜色 参数:(UIColor *)
- (UIView *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

/// 设置边框颜色 参数:(UIColor *)
- (UIView *(^)(UIColor *borderColor))qt_setBorderColor;

/// 设置frame 参数:(CGRect)
- (UIView *(^)(CGRect frame))qt_setFrame;

/// 将view添加到父视图 参数:(UIView *)
- (UIView *(^)(UIView *superView))qt_setSuperView;

/// 设置边框宽度 参数:(CGFloat )
- (UIView *(^)(CGFloat borderwidth))qt_setBorderWidth;

/// 设置圆角大小 参数:(CGFloat )
- (UIView *(^)(CGFloat radius))qt_setRadius;

/// 是否裁剪边框 参数:(BOOL )
- (UIView *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

/// 设置中心点 参数:(CGPoint )
- (UIView *(^)(CGPoint center))qt_setCenter;

/// 设置TransForm 参数:(CGAffineTransform )
- (UIView *(^)(CGAffineTransform transForm))qt_setTransForm;

/// 设置是否隐藏 参数:(BOOL )
- (UIView *(^)(BOOL hidden))qt_setHidden;

/// 设置是否交互响应 参数:(BOOL )
- (UIView *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;

/// 获取view中某一点的颜色
- (UIColor *)qt_colorOfPoint:(CGPoint)point;

/// 获取color的rgb值
- (NSArray *)qt_getRGBWithColor:(UIColor *)color;

@end
