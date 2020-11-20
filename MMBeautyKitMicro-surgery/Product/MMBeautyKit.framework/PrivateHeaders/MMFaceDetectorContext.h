//
//  MMFaceDetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MMImageDetectorProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMFaceDetectorContext : NSObject <MMImageDetectorProtocol>

@property (nonatomic, strong) id<MMFaceDetectorResultProtocol> result;

@end

@interface MMFace137DetectorContext: MMFaceDetectorContext

@end

@interface MMFaceNewDetectorContext: MMFaceDetectorContext

@end

@interface MMLocalFaceDetectorContext: MMFaceDetectorContext

@end

@interface MMFace240DetectorContext: MMFaceDetectorContext

@end

NS_ASSUME_NONNULL_END
