/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Parse/PFProduct.h>
#import "PFUnitTestCase.h"
#import "PFObjectPrivate.h"

#if TARGET_OS_IOS
@interface ProductTests : PFUnitTestCase

@end

@implementation ProductTests

- (void)testSubclass {
    XCTAssertNotNil([PFProduct parseClassName]);

    XCTAssertNoThrow([PFProduct object]);
    PFAssertThrowsInvalidArgumentException([[PFProduct alloc] initWithClassName:@"Yarr"]);
}

@end
#endif
