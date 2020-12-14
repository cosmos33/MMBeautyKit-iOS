//
//  MMFaceRigV3DetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMFaceRigV3DetectorContext : NSObject <MMImageDetectorProtocol>

@end

@interface MMLocalFaceRigV3DetectorContext : MMFaceRigV3DetectorContext

@end

NS_ASSUME_NONNULL_END
