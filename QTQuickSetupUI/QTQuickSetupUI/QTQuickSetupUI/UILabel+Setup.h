//
//  UILabel+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/20.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Setup)
- (UILabel *(^)(NSString *text))set_text;
- (UILabel *(^)(UIColor *textColor))set_textColor;
- (UILabel *(^)(UIFont *font))set_font;
- (UILabel *(^)(NSTextAlignment textAlignment))set_textAlignment;
- (UILabel *(^)(NSInteger numberOfline))set_numberOfLine;

- (UILabel *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

- (UILabel *(^)(UIColor *borderColor))qt_setBorderColor;

- (UILabel *(^)(CGRect frame))qt_setFrame;

- (UILabel *(^)(UIView *superView))qt_setSuperView;

- (UILabel *(^)(CGFloat borderwidth))qt_setBorderWidth;

- (UILabel *(^)(CGFloat radius))qt_setRadius;

- (UILabel *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

- (UILabel *(^)(CGPoint center))qt_setCenter;

- (UILabel *(^)(CGAffineTransform transForm))qt_setTransForm;

- (UILabel *(^)(BOOL hidden))qt_setHidden;

- (UILabel *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;

@end
