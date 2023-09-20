//
//  UIView+Setup.m
//  QTCore
//
//  Created by bqt on 2017/7/19.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import "UIView+Setup.h"

@implementation UIView (Setup)
- (void)setQt_x:(CGFloat)qt_x{
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
- (NSArray *)qt_getRGBWithColor:(UIColor *)color
{
    CGFloat red = 0.0;
    CGFloat green = 0.0;
    CGFloat blue = 0.0;
    CGFloat alpha = 0.0;
    [color getRed:&red green:&green blue:&blue alpha:&alpha];
    return @[@(red), @(green), @(blue), @(alpha)];
}


- (UIColor *)qt_colorOfPoint:(CGPoint)point {
    unsigned char pixel[4] = {0};
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    CGContextRef context = CGBitmapContextCreate(pixel, 1, 1, 8, 4, colorSpace, (CGBitmapInfo)kCGImageAlphaPremultipliedLast);
    
    CGContextTranslateCTM(context, -point.x, -point.y);
    
    [self.layer renderInContext:context];
    
    CGContextRelease(context);
    CGColorSpaceRelease(colorSpace);
    
    UIColor *color = [UIColor colorWithRed:pixel[0]/255.0 green:pixel[1]/255.0 blue:pixel[2]/255.0 alpha:pixel[3]/255.0];
    
    return color;
}
#pragma mark - Location
- (CGPoint)qt_origin
{
    return self.frame.origin;
}

- (void)setQt_origin:(CGPoint)qt_origin
{
    CGRect newframe = self.frame;
    newframe.origin = qt_origin;
    self.frame = newframe;
}

- (CGFloat)qt_top
{
    return self.frame.origin.y;
}

- (void)setQt_top:(CGFloat)qt_top
{
    CGRect newframe = self.frame;
    newframe.origin.y = qt_top;
    self.frame = newframe;
}

- (CGFloat)qt_left

{
    return self.frame.origin.x;
}

- (void)setQt_left:(CGFloat)qt_left
{
    CGRect newframe = self.frame;
    newframe.origin.x = qt_left;
    self.frame = newframe;
}

- (CGFloat)qt_bottom
{
    return self.frame.origin.y + self.frame.size.height;
}

- (void)setQt_bottom:(CGFloat)qt_bottom
{
    CGRect newframe = self.frame;
    newframe.origin.y = qt_bottom - self.frame.size.height;
    self.frame = newframe;
}

- (CGFloat)qt_right
{
    return self.frame.origin.x + self.frame.size.width;
}

- (void)setQt_right:(CGFloat)qt_right
{
    CGRect newframe = self.frame;
    newframe.origin.x = qt_right - self.frame.size.width;
    self.frame = newframe;
}

#pragma mark - Center
- (CGFloat)qt_centerX
{
    return self.center.x;
}

- (void)setQt_centerX:(CGFloat)qt_centerX
{
    CGPoint newCenter = self.center;
    newCenter.x = qt_centerX;
    self.center = newCenter;
}

- (CGFloat)qt_centerY
{
    return self.center.y;
}

- (void)setQt_centerY:(CGFloat)qt_centerY
{
    CGPoint newCenter = self.center;
    newCenter.y = qt_centerY;
    self.center = newCenter;
}

#pragma mark - Size
- (CGSize)qt_size
{
    return self.frame.size;
}

- (void)setQt_size:(CGSize)qt_size
{
    CGRect newframe = self.frame;
    newframe.size = qt_size;
    self.frame = newframe;
}

- (CGFloat)qt_height
{
    return self.frame.size.height;
}

- (void)setQt_height:(CGFloat)qt_height
{
    CGRect newframe = self.frame;
    newframe.size.height = qt_height;
    self.frame = newframe;
}

- (CGFloat)qt_width
{
    return self.frame.size.width;
}

- (void)setQt_width:(CGFloat)qt_width
{
    CGRect newframe = self.frame;
    newframe.size.width = qt_width;
    self.frame = newframe;
}

#pragma mark - Other Origin
- (CGPoint)qt_bottomRight
{
    CGFloat x = self.frame.origin.x + self.frame.size.width;
    CGFloat y = self.frame.origin.y + self.frame.size.height;
    return CGPointMake(x, y);
}

- (CGPoint)qt_bottomLeft
{
    CGFloat x = self.frame.origin.x;
    CGFloat y = self.frame.origin.y + self.frame.size.height;
    return CGPointMake(x, y);
}

- (CGPoint)qt_topRight
{
    CGFloat x = self.frame.origin.x + self.frame.size.width;
    CGFloat y = self.frame.origin.y;
    return CGPointMake(x, y);
}

- (UIImage *)qt_saveImageWithScale:(float)scale
{
    UIGraphicsBeginImageContextWithOptions(self.frame.size, NO, scale);
    [self.layer renderInContext:UIGraphicsGetCurrentContext()];
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}


- (UIView *(^)(UIColor *backgroundColor))qt_setBackgroundColor
{
    return ^(UIColor *backgroundColor)
    {
        self.backgroundColor = backgroundColor;
        return self;
    };
}

- (UIView *(^)(UIColor *borderColor))qt_setBorderColor
{
    return ^(UIColor *borderColor){
        self.layer.borderColor = borderColor.CGColor;
        return self;
    };
}

- (UIView *(^)(CGRect frame))qt_setFrame
{
    return ^(CGRect frame){
        self.frame = frame;
        return self;
    };
}

- (UIView *(^)(UIView *superView))qt_setSuperView
{
    return ^(UIView *superView){
        [superView addSubview:self];
        return self;
    };
}

- (UIView *(^)(CGFloat borderwidth))qt_setBorderWidth
{
    return ^(CGFloat borderwidth){
        self.layer.borderWidth = borderwidth;
        return self;
    };
}

- (UIView *(^)(CGFloat radius))qt_setRadius
{
    return ^(CGFloat radius){
        self.layer.cornerRadius = radius;
        return self;
    };
}

- (UIView *(^)(BOOL clipsToBounds))qt_setClipsToBounds
{
    return ^(BOOL clipsToBounds){
        self.clipsToBounds = clipsToBounds;
        return self;
    };
}

- (UIView *(^)(CGPoint center))qt_setCenter
{
    return ^(CGPoint center){
        self.center = center;
        return self;
    };
}

- (UIView *(^)(CGAffineTransform transForm))qt_setTransForm
{
    return ^(CGAffineTransform transform)
    {
        self.transform = transform;
        return self;
    };
}
 
- (UIView *(^)(BOOL hidden))qt_setHidden
{
    return ^(BOOL hidden){
        self.hidden = hidden;
     
        return self;
    };
}

- (UIView *(^)(BOOL userInteractionEnabled))qt_setUserInteractionEnabled
{
    return ^(BOOL userInteractionEnabled){
        self.userInteractionEnabled = userInteractionEnabled;
        return self;
    };
}
@end
