//
//  UIButton+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/20.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Setup)

/// 设置按钮标题 参数:(NSString *)
- (UIButton *(^)(NSString *title))qt_setTitle;

/// 设置标题字体颜色 参数:(UIColor *)
- (UIButton *(^)(UIColor *titleColor))qt_setTitleColor;

/// 设置backgroundImage 参数:(NSString *)
- (UIButton *(^)(NSString * backgroundImage))qt_setBackgroundImage;

/// 设置image 参数:(UIImage *)
- (UIButton *(^)(UIImage * image))qt_setImage;

/// 设置TitleEdgeInsets 参数:(UIEdgeInsets )
- (UIButton *(^)(UIEdgeInsets titleEdgeInsets))qt_setTitleEdgeInsets;

/// 设置ImageEdgeInsets 参数:(UIEdgeInsets )
- (UIButton *(^)(UIEdgeInsets imageEdgeInsets))qt_setImageEdgeInsets;

/// 设置标题文字位置下移 参数:(CGFloat )
- (UIButton *(^)(CGFloat spacing))qt_setTextDown;




/// 设置背景颜色 参数:(UIColor *)
- (UIButton *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

/// 设置边框颜色 参数:(UIColor *)
- (UIButton *(^)(UIColor *borderColor))qt_setBorderColor;

/// 设置frame 参数:(CGRect)
- (UIButton *(^)(CGRect frame))qt_setFrame;

/// 将view添加到父视图 参数:(UIView *)
- (UIButton *(^)(UIView *superView))qt_setSuperView;

/// 设置边框宽度 参数:(CGFloat )
- (UIButton *(^)(CGFloat borderwidth))qt_setBorderWidth;

/// 设置圆角大小 参数:(CGFloat )
- (UIButton *(^)(CGFloat radius))qt_setRadius;

/// 是否裁剪边框 参数:(BOOL )
- (UIButton *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

/// 设置中心点 参数:(CGPoint )
- (UIButton *(^)(CGPoint center))qt_setCenter;

/// 设置TransForm 参数:(CGAffineTransform )
- (UIButton *(^)(CGAffineTransform transForm))qt_setTransForm;

/// 设置是否隐藏 参数:(BOOL )
- (UIButton *(^)(BOOL hidden))qt_setHidden;

/// 设置是否交互响应 参数:(BOOL )
- (UIButton *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;
@end
