//
//  MMFaceDetectorInfo.h
//  BroadcastChannel
//
//  Created by 符吉胜 on 2019/10/25.
//

#import <Foundation/Foundation.h>
#import <MMImageDetectorProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMFaceDetectorInfo : NSObject

- (instancetype)initWithPixelBufferSize:(CGSize)size;

// 正在使用的人脸
@property (nonatomic, strong) id currentFaceFeature;
//
@property (nonatomic, copy) NSArray *skinColorThreshold;
// 所有检测到的人脸
@property (nonatomic, copy) NSArray *faceFeatures;
// 表情信息
@property (nonatomic, copy) NSArray *expressions;
// animoji
@property (nonatomic, strong) id facerigFeature;
// 手势信息
@property (nonatomic, strong) id handFeature;
// 肢体动作信息
@property (nonatomic, copy) NSArray<MMHandGestureProtocol> *objectFeatures;
// 图像分割
@property (nonatomic, strong) id imageSegmentationResult;
// 躯体信息
@property (nonatomic, copy) NSArray *bodyFeatures;

// 光膀子信息
@property (nonatomic, assign, getter=isBareness) BOOL bareness;

@property (nonatomic, readonly) CGSize pixelBufferSize;

@end

NS_ASSUME_NONNULL_END
