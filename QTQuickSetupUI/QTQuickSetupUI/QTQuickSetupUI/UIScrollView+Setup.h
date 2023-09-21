//
//  UIScrollView+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/20.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (Setup)

/// 设置代理 参数:(id )
- (UIScrollView *(^)(id delegate))qt_setDelegate;

/// 设置ContentSize 参数:(CGSize )
- (UIScrollView *(^)(CGSize size))qt_setContentSize;

/// 设置ContentOffset 参数:(CGPoint contentOffset, BOOL animated )
- (UIScrollView *(^)(CGPoint contentOffset, BOOL animated))qt_setContentOffset;

/// 设置ContentInset 参数:(UIEdgeInsets )
- (UIScrollView *(^)(UIEdgeInsets contentInset))qt_setContentInset;

/// 设置bounces 参数:(BOOL)
- (UIScrollView *(^)(BOOL bounces))qt_setBounces;

/// 设置AlwaysBounceVertical 参数:(BOOL)
- (UIScrollView *(^)(BOOL alwaysBounceVertical))qt_setAlwaysBounceVertical;

/// 设置AlwaysBounceHorizontal 参数:(BOOL)
- (UIScrollView *(^)(BOOL alwaysBounceHorizontal))qt_setAlwaysBounceHorizontal;

/// 设置inimumZoomScale 参数:(CGFloat)
- (UIScrollView *(^)(CGFloat minimumZoomScale))qt_setMinimumZoomScale;

/// 设置MaximumZoomScale 参数:(CGFloat)
- (UIScrollView *(^)(CGFloat maximumZoomScale))qt_setMaximumZoomScale;




/// 设置背景颜色 参数:(UIColor *)
- (UIScrollView *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

/// 设置边框颜色 参数:(UIColor *)
- (UIScrollView *(^)(UIColor *borderColor))qt_setBorderColor;

/// 设置frame 参数:(CGRect)
- (UIScrollView *(^)(CGRect frame))qt_setFrame;

/// 将view添加到父视图 参数:(UIView *)
- (UIScrollView *(^)(UIView *superView))qt_setSuperView;

/// 设置边框宽度 参数:(CGFloat )
- (UIScrollView *(^)(CGFloat borderwidth))qt_setBorderWidth;

/// 设置圆角大小 参数:(CGFloat )
- (UIScrollView *(^)(CGFloat radius))qt_setRadius;

/// 是否裁剪边框 参数:(BOOL )
- (UIScrollView *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

/// 设置中心点 参数:(CGPoint )
- (UIScrollView *(^)(CGPoint center))qt_setCenter;

/// 设置TransForm 参数:(CGAffineTransform )
- (UIScrollView *(^)(CGAffineTransform transForm))qt_setTransForm;

/// 设置是否隐藏 参数:(BOOL )
- (UIScrollView *(^)(BOOL hidden))qt_setHidden;

/// 设置是否交互响应 参数:(BOOL )
- (UIScrollView *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;
@end
