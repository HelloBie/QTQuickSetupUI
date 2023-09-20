//
//  UILabel+Setup.m
//  QTCore
//
//  Created by bqt on 2017/7/20.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import "UILabel+Setup.h"

@implementation UILabel (Setup)
- (UILabel *(^)(NSString *text))qt_setText
{

    return ^(NSString *text){
        self.text = text;
        return self;
    };
}

- (UILabel *(^)(UIColor *textColor))qt_setTextColor
{
    return ^(UIColor *textColor)
    {
        self.textColor = textColor;
        return self;
    };
}

- (UILabel *(^)(UIFont *font))qt_setFont
{
    return ^(UIFont *font){
        self.font = font;
        return self;
    };
}

- (UILabel *(^)(NSTextAlignment textAlignment))qt_setTextAlignment
{
    return ^(NSTextAlignment textAlignment){
        self.textAlignment = textAlignment;
        return self;
    };
}

- (UILabel *(^)(NSInteger numberOfline))qt_setNumberOfLine
{
    return ^(NSInteger numberOfLine){
        self.numberOfLines = numberOfLine;
        return self;
    };
}
@end
