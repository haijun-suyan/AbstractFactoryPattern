//
//  PhoneProtocol.h
//  AbstractFactoryPattern
//
//  Created by haijunyan on 2020/3/2.
//  Copyright © 2020年 haijunyan. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PhoneProtocol <NSObject>

//打电话
- (void)phoneCall;

//发短信
- (void)sendMessage;

@end
