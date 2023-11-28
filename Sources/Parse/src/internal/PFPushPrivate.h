/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <Parse/PFPush.h>

#import "PFMacros.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PFPushInternalUtils <NSObject>

@optional
+ (NSString *)convertDeviceTokenToString:(id)deviceToken;
+ (nullable NSString *)getDeviceTokenFromKeychain;
+ (void)clearDeviceToken;

@end

@interface PFPush (Private)

// For unit testability
+ (Class)pushInternalUtilClass;
+ (void)setPushInternalUtilClass:(nullable Class)utilClass;

@end

NS_ASSUME_NONNULL_END
