//
//  MMObjectDetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMObjectDetectorContext : NSObject <MMImageDetectorProtocol>

@property (nonatomic, readonly) id<MMHandGestureResultProtocol> result;

@end

@interface MMLocalObjectDetectorContext : MMObjectDetectorContext

@end

NS_ASSUME_NONNULL_END
