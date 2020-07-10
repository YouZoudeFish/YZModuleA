//
//  YZTestGenerator.h
//  test
//
//  Created by 张闽 on 2020/7/7.
//  Copyright © 2020 张闽. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YZTestGenerator : NSObject

- (YZTestGenerator *(^)(NSString *))loginFunc;
- (YZTestGenerator *(^)(NSString *))checkInFunc;

@end

NS_ASSUME_NONNULL_END
