//
//  FactBook.h
//  FunFacts
//
//  Created by Ash Ryan Arnwine on 11/14/15.
//  Copyright © 2015 Adobe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;
@property (strong, nonatomic) NSString * previousFact;

- (NSString *)randomFact;

@end
