//
//  ColorWheel.h
//  FunFacts
//
//  Created by Ash Ryan Arnwine on 11/14/15.
//  Copyright © 2015 Adobe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;
@property (strong, nonatomic) UIColor *previousColor;

- (UIColor *)randomColor;

@end
