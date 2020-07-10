//
//  YZTestGenerator.m
//  test
//
//  Created by 张闽 on 2020/7/7.
//  Copyright © 2020 张闽. All rights reserved.
//

#import "YZTestGenerator.h"

@implementation YZTestGenerator
- (YZTestGenerator * _Nonnull (^)(NSString * _Nonnull))loginFunc {
    return ^(NSString *test) {
        NSLog(@"%@",test);
        return self;
    };
}
@end
