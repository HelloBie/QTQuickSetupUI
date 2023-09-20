//
//  UIButton+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/20.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Setup)

- (UIButton *(^)(NSString *title))qt_setTitle;
- (UIButton *(^)(UIColor *titleColor))qt_setTitleColor;
- (UIButton *(^)(NSString * backgroundImage))qt_setBackgroundImage;
- (UIButton *(^)(UIImage * image))qt_setImage;
- (UIButton *(^)(UIEdgeInsets titleEdgeInsets))qt_setTitleEdgeInsets;
- (UIButton *(^)(UIEdgeInsets imageEdgeInsets))qt_setImageEdgeInsets;
- (UIButton *(^)(CGFloat spacing))qt_setTextDown;

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
