//
//  GoogleFactory.m
//  AbstractFactoryPattern
//
//  Created by haijunyan on 2020/3/2.
//  Copyright © 2020年 haijunyan. All rights reserved.
//

#import "GoogleFactory.h"

@implementation GoogleFactory

- (BasePhone *)createPhone {
    
    return [[Android alloc] init];
}

- (BaseWatch *)createWatch {
    
    return [[AndroidWatch alloc] init];
}


@end
