//
//  WhiskeyViewController.h
//  Alcolator
//
//  Created by Nigon's on 2/14/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WhiskeyViewController : UIViewController
@property (weak, nonatomic) UITextField *beerPercentTextField;
@property (weak, nonatomic) UILabel *resultLabel;
@property (weak, nonatomic) UISlider *beerCountSlider;
@property (weak, nonatomic) UILabel *numberOfBeersLable;
- (void)buttonPressed:(UIButton *)sender;
@end
