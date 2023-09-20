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

- (UITextField *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

- (UITextField *(^)(UIColor *borderColor))qt_setBorderColor;

- (UITextField *(^)(CGRect frame))qt_setFrame;

- (UITextField *(^)(UIView *superView))qt_setSuperView;

- (UITextField *(^)(CGFloat borderwidth))qt_setBorderWidth;

- (UITextField *(^)(CGFloat radius))qt_setRadius;

- (UITextField *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

- (UITextField *(^)(CGPoint center))qt_setCenter;

- (UITextField *(^)(CGAffineTransform transForm))qt_setTransForm;

- (UITextField *(^)(BOOL hidden))qt_setHidden;

- (UITextField *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;
@end
