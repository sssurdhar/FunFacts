//
//  ViewController.h
//  FunFacts
//
//  Created by Sunny Surdhar on 2015-05-02.
//  Copyright (c) 2015 Sunny Surdhar. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@property (strong, nonatomic) FactBook *factBook;

@property (strong, nonatomic) ColorWheel *colorWheel;

@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end

