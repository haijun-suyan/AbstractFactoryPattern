//
//  FactoryManager.m
//  AbstractFactoryPattern
//
//  Created by haijunyan on 2020/3/2.
//  Copyright © 2020年 haijunyan. All rights reserved.
//

#import "FactoryManager.h"

@implementation FactoryManager

+ (BaseFactory *)factoryWithBrand:(KFactoryType)factoryType {
    BaseFactory *factory = nil;
    
    if (factoryType == KApple) {
        
        factory = [[AppleFactory alloc] init];
        
    } else if (factoryType == KGoogle) {
        
        factory = [[GoogleFactory alloc] init];
    }
    
    return factory;

}

@end
