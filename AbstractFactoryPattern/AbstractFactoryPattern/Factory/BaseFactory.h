//
//  BaseFactory.h
//  AbstractFactoryPattern
//
//  Created by haijunyan on 2020/3/2.
//  Copyright © 2020年 haijunyan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BasePhone.h"
#import "BaseWatch.h"


@interface BaseFactory : NSObject

- (BasePhone *)createPhone;

- (BaseWatch *)createWatch;


@end
