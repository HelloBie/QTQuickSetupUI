//
//  UIView+Frame.m
//  Source
//
//  Created by MD101 on 16/1/25.
//  Copyright © 2016年 yaocheng. All rights reserved.
//

#import "UIView+Frame.h"

@implementation UIView (Frame)
- (void)setQt_x:(CGFloat)qt_x {
    CGRect frame = self.frame;
    frame.origin.x = qt_x;
    self.frame = frame;
}

- (CGFloat)qt_x{
    return self.frame.origin.x;
}

- (void)setQt_y:(CGFloat)qt_y{
    CGRect frame = self.frame;
    frame.origin.y = qt_y;
    self.frame = frame;
}

- (CGFloat)qt_y{
    return self.frame.origin.y;
}

-(void)setQt_width:(CGFloat)qt_width{
    CGRect frame = self.frame;
    frame.size.width = qt_width;
    self.frame = frame;
}

- (CGFloat)qt_width{
    return self.frame.size.width;
}

-(void)setQt_height:(CGFloat)qt_height{
    CGRect frame = self.frame;
    frame.size.height = qt_height;
    self.frame = frame;
}

- (CGFloat)qt_height{
    return self.frame.size.height;
}


- (void)setQt_centerX:(CGFloat)qt_centerX{
    CGPoint point = self.center;
    point.x = qt_centerX;
    self.center = point;
}

- (CGFloat)qt_centerX{
    return self.center.x;
}

-(void)setQt_centerY:(CGFloat)qt_centerY{
    CGPoint point = self.center;
    point.y = qt_centerY;
    self.center = point;
}

- (CGFloat)qt_centerY{
    return self.center.y;
}

-(void)setQt_size:(CGSize)qt_size{
    CGRect frame = self.frame;
    frame.size = qt_size;
    self.frame = frame;
}


- (CGSize)qt_size{
    return self.frame.size;
}



- (CGFloat)qt_right
{
    return self.frame.origin.x + self.frame.size.width;
}

- (void)setQt_right:(CGFloat)qt_right
{
    CGRect frame = self.frame;
    frame.origin.x = qt_right - self.frame.size.width;
    self.frame = frame;
}

- (CGFloat)qt_bottom
{
    return self.frame.origin.y + self.frame.size.height;
}

- (void)setQt_bottom:(CGFloat)qt_bottom
{
    CGRect frame = self.frame;
    frame.origin.y = qt_bottom - self.frame.size.height;
    self.frame = frame;
}



@end
