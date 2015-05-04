//
//  ColorWheel.h
//  FunFacts
//
//  Created by Sunny Surdhar on 2015-05-03.
//  Copyright (c) 2015 Sunny Surdhar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
