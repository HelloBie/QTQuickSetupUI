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

- (UIImage *)qt_saveImageWithScale:(float)scale;

- (UIView *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

- (UIView *(^)(UIColor *borderColor))qt_setBorderColor;

- (UIView *(^)(CGRect frame))qt_setFrame;

- (UIView *(^)(UIView *superView))qt_setSuperView;

- (UIView *(^)(CGFloat borderwidth))qt_setBorderWidth;

- (UIView *(^)(CGFloat radius))qt_setRadius;

- (UIView *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

- (UIView *(^)(CGPoint center))qt_setCenter;

- (UIView *(^)(CGAffineTransform transForm))qt_setTransForm;

- (UIView *(^)(BOOL hidden))qt_setHidden;

- (UIView *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;

- (UIColor *)qt_colorOfPoint:(CGPoint)point;

- (NSArray *)qt_getRGBWithColor:(UIColor *)color;

@end
