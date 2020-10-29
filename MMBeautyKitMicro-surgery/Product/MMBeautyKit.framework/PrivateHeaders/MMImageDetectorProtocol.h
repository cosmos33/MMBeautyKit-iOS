//
//  MMImageDetectorProtocol.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/26.
//

#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import "MMFeatureOptions.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MMDetectorContextClassName;

@protocol MMImageDetectorProtocol <NSObject>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(id<MMImageDetectorProtocol> _Nullable))completed;

@property (nonatomic, readonly) id result;

- (void)detectPixelBuffer:(CVPixelBufferRef)pixelBuffer options:(NSDictionary<MMDetectorOptions, id> * _Nullable)options;

- (void)reset;

@end

@protocol MMHandGestureProtocol <NSObject>

@property (nonatomic, readonly) NSString *type;

@property (nonatomic, readonly) CGRect bounds;

@property (nonatomic, readonly) float score;

@end

@protocol MMHandGestureResultProtocol <NSObject>

@property (nonatomic, readonly) NSArray<id<MMHandGestureProtocol>> *gestures;

@end

@protocol MMFaceDetectorResultProtocol <NSObject>

@property (nonatomic, readonly) NSArray<NSNumber *> *skinColorThreshold;
@property (nonatomic, readonly) NSArray *faceFeatures;
@property (nonatomic, readonly) id currentFaceFeature;
@property (nonatomic, readonly) NSArray *expressions;

@end

NS_ASSUME_NONNULL_END
