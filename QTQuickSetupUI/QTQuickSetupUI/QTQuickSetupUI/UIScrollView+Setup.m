//
//  UIScrollView+Setup.m
//  QTCore
//
//  Created by bqt on 2017/7/20.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import "UIScrollView+Setup.h"

@implementation UIScrollView (Setup)

- (UIScrollView *(^)(id delegate))qt_setDelegate
{
    return ^(id delegate){
        self.delegate = delegate;
        return self;
    };
}

- (UIScrollView *(^)(CGSize size))qt_setContentSize
{
    return ^(CGSize size)
    {
        self.contentSize = size;
     
        return self;
    };
}

- (UIScrollView *(^)(CGPoint contentOffset, BOOL animated))qt_setContentOffset
{
    return ^(CGPoint contentOffset,BOOL animated){
        [self setContentOffset:contentOffset animated:animated];
        return self;
    };
}

- (UIScrollView *(^)(UIEdgeInsets contentInset))qt_setContentInset
{
    return ^(UIEdgeInsets contentInset){
        self.contentInset = contentInset;
        return self;
    };
}

- (UIScrollView *(^)(BOOL bounces))qt_setBounces
{
    return ^(BOOL bounces){
        self.bounces = bounces;
        return self;
        
    };
}

- (UIScrollView *(^)(BOOL alwaysBounceVertical))qt_setAlwaysBounceVertical
{
    return ^(BOOL alwaysBounceVertical){
        self.alwaysBounceVertical = alwaysBounceVertical;
        return self;
    };
}

- (UIScrollView *(^)(BOOL alwaysBounceHorizontal))qt_setAlwaysBounceHorizontal
{
    return ^(BOOL alwaysBounceHorizontal)
    {
        self.alwaysBounceHorizontal = alwaysBounceHorizontal;
        return self;
    };
}

- (UIScrollView *(^)(CGFloat minimumZoomScale))qt_setMinimumZoomScale
{
    return ^(CGFloat minimumZoomScale){
        self.minimumZoomScale = minimumZoomScale;
        return self;
    };
}

- (UIScrollView *(^)(CGFloat maximumZoomScale))qt_setMaximumZoomScale
{
    return ^(CGFloat maximumZoomScale){
        self.maximumZoomScale = maximumZoomScale;
        return self;
    };
}
@end
