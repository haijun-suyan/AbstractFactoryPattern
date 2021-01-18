//
//  FactoryManager.h
//  AbstractFactoryPattern
//
//  Created by haijunyan on 2020/3/2.
//  Copyright © 2020年 haijunyan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppleFactory.h"
#import "GoogleFactory.h"

typedef NS_ENUM(NSUInteger, KFactoryType) {
    
    KApple,
    KGoogle
};

@interface FactoryManager : NSObject


/**
 获取工厂

 @param factoryType 工厂类型
 @return 创建出的工厂
 */
+ (BaseFactory *)factoryWithBrand:(KFactoryType)factoryType;

@end
