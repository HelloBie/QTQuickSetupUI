//
//  UIScrollView+Setup.h
//  QTCore
//
//  Created by bqt on 2017/7/20.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (Setup)
- (UIScrollView *(^)(id delegate))qt_setDelegate;
- (UIScrollView *(^)(CGSize size))qt_setContentSize;
- (UIScrollView *(^)(CGPoint contentOffset, BOOL animated))qt_setContentOffset;
- (UIScrollView *(^)(UIEdgeInsets contentInset))qt_setContentInset;
- (UIScrollView *(^)(BOOL bounces))qt_setBounces;
- (UIScrollView *(^)(BOOL alwaysBounceVertical))qt_setAlwaysBounceVertical;
- (UIScrollView *(^)(BOOL alwaysBounceHorizontal))qt_setAlwaysBounceHorizontal;
- (UIScrollView *(^)(CGFloat minimumZoomScale))qt_setMinimumZoomScale;
- (UIScrollView *(^)(CGFloat maximumZoomScale))qt_setMaximumZoomScale;

- (UIScrollView *(^)(UIColor *backgroundColor))qt_setBackgroundColor;

- (UIScrollView *(^)(UIColor *borderColor))qt_setBorderColor;

- (UIScrollView *(^)(CGRect frame))qt_setFrame;

- (UIScrollView *(^)(UIView *superView))qt_setSuperView;

- (UIScrollView *(^)(CGFloat borderwidth))qt_setBorderWidth;

- (UIScrollView *(^)(CGFloat radius))qt_setRadius;

- (UIScrollView *(^)(BOOL clipsToBounds))qt_setClipsToBounds;

- (UIScrollView *(^)(CGPoint center))qt_setCenter;

- (UIScrollView *(^)(CGAffineTransform transForm))qt_setTransForm;

- (UIScrollView *(^)(BOOL hidden))qt_setHidden;

- (UIScrollView *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled;
@end
