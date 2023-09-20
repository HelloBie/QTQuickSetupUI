//
//  UIView+Frame.h
//  Source
//
//  Created by MD101 on 16/1/25.
//  Copyright © 2016年 yaocheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)
@property (nonatomic, assign) CGFloat qt_x;
@property (nonatomic, assign) CGFloat qt_y;
@property (nonatomic, assign) CGFloat qt_width;
@property (nonatomic, assign) CGFloat qt_height;
@property (nonatomic, assign) CGSize qt_size;
@property (nonatomic, assign) CGFloat qt_centerX;
@property (nonatomic, assign) CGFloat qt_centerY;
/** view底部的距离 */
@property (nonatomic, assign) CGFloat qt_bottom;
/** view右侧的距离 */
@property (nonatomic, assign) CGFloat qt_right;

@end
