//
//  FactBook.h
//  FunFacts
//
//  Created by Sunny Surdhar on 2015-05-02.
//  Copyright (c) 2015 Sunny Surdhar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
