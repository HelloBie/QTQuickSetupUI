//
//  ViewController.m
//  QTQuickSetupUI
//
//  Created by MasterBie on 2020/7/22.
//  Copyright © 2020 MasterBie. All rights reserved.
//

#import "ViewController.h"
#import "QTQuickSetupUI.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *testLabel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)setUp:(id)sender {
    self.testLabel
    .qt_setText(@"测试label")
    .qt_setTextColor([UIColor yellowColor])
    .qt_setBackgroundColor([UIColor orangeColor])
    .qt_setRadius(25)
    .qt_setClipsToBounds(YES)
    .qt_setFrame(CGRectMake(0, 0, 100, 50))
    .qt_setCenter(self.view.center)
    .qt_setBorderWidth(3)
    .qt_setBorderColor([UIColor brownColor]);
    
}

@end
