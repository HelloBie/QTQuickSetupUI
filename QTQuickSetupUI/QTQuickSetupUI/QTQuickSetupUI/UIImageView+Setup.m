//
//  UIImageView+Setup.m
//  QTCore
//
//  Created by bqt on 2017/7/19.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import "UIImageView+Setup.h"
#import "UIImageView+WebCache.h"
@implementation UIImageView (Setup)
- (UIImageView *(^)(UIImage *image))qt_setImage
{
    return ^(UIImage *image)
    {
        [self setImage:image];
        return self;
    };
}

- (UIImageView *(^)(NSArray *animationImages))qt_setAnimationImages
{
    return ^(NSArray *animationImages){
        [self setAnimationImages:animationImages];
        return self;
    };
}

@end
