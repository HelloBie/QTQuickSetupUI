//
//  UIButton+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/20.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Setup)

- (UIButton *(^)(NSString *title))set_title;
- (UIButton *(^)(UIColor *titleColor))set_titleColor;
- (UIButton *(^)(NSString * backgroundImage))set_backgroundImage;
- (UIButton *(^)(UIImage * image))set_image;
- (UIButton *(^)(UIEdgeInsets titleEdgeInsets))set_titleEdgeInsets;
- (UIButton *(^)(UIEdgeInsets imageEdgeInsets))set_imageEdgeInsets;
- (UIButton *(^)(CGFloat spacing))set_textDown;

- (UIButton *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

- (UIButton *(^)(UIColor *borderColor))qt_setBorderColor;

- (UIButton *(^)(CGRect frame))qt_setFrame;

- (UIButton *(^)(UIView *superView))qt_setSuperView;

- (UIButton *(^)(CGFloat borderwidth))qt_setBorderWidth;

- (UIButton *(^)(CGFloat radius))qt_setRadius;

- (UIButton *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

- (UIButton *(^)(CGPoint center))qt_setCenter;

- (UIButton *(^)(CGAffineTransform transForm))qt_setTransForm;

- (UIButton *(^)(BOOL hidden))qt_setHidden;

- (UIButton *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;
@end
