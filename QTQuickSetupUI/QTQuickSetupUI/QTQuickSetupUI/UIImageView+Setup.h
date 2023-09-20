//
//  UIImageView+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/19.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface UIImageView (Setup)
- (UIImageView *(^)(UIImage *image))qt_setImage;
- (UIImageView *(^)(NSArray *animationImages))qt_setAnimationImages;


- (UIImageView *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

- (UIImageView *(^)(UIColor *borderColor))qt_setBorderColor;

- (UIImageView *(^)(CGRect frame))qt_setFrame;

- (UIImageView *(^)(UIView *superView))qt_setSuperView;

- (UIImageView *(^)(CGFloat borderwidth))qt_setBorderWidth;

- (UIImageView *(^)(CGFloat radius))qt_setRadius;

- (UIImageView *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

- (UIImageView *(^)(CGPoint center))qt_setCenter;

- (UIImageView *(^)(CGAffineTransform transForm))qt_setTransForm;

- (UIImageView *(^)(BOOL hidden))qt_setHidden;

- (UIImageView *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;

@end

