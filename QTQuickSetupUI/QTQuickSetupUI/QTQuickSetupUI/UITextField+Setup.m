//
//  UITextField+Setup.m
//  QTCore
//
//  Created by bqt on 2017/7/19.
//  Copyright © 2017年 bambootech. All rights reserved.
//

#import "UITextField+Setup.h"

@implementation UITextField (Setup)
- (UITextField *(^)(UIColor *placeColor))qt_setPlaceholdColor
{
    return ^(UIColor *placeColor){
            self.attributedPlaceholder = [[NSAttributedString alloc] initWithString:self.placeholder attributes:@{NSForegroundColorAttributeName: placeColor}];
        return self;
    };
}

- (UITextField *(^)(NSString * borderColor))qt_setText
{
    return ^(NSString *text)
    {
        self.text = text;
        return self;
    };
}

- (UITextField *(^)(NSString * placehold))qt_setPlacehold
{
    return ^(NSString *placehold)
    {
        self.placeholder = placehold;
        return self;
    };
}

- (UITextField *(^)(UIColor *textColor))qt_setTextColor
{
    return ^(UIColor *textColor)
    {
        self.textColor = textColor;
        return self;
    };
}

- (UITextField *(^)(UIFont *font))qt_setFont
{
    return ^(UIFont *font){
        self.font = font;
        return self;
    };
}

- (UITextField *(^)(NSTextAlignment alignment))qt_setAlignment
{
    return ^(NSTextAlignment alignment){
        self.textAlignment = alignment;
        return self;
    };
}
@end
