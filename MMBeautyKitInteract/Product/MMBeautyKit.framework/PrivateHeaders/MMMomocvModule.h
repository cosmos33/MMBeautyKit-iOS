//
//  MMMomocvModule.h
//  MMVideoSDK
//
//  Created by 符吉胜 on 2019/10/25.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "MMFaceDetectorInfo.h"

@class MMMomocvModule;

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, MMFaceDetectorModuleOptions) {
    // detector to enable
    MMFaceDetectorModuleFace = 1 << 0,              // 人脸检测器
    MMFaceDetectorModuleAnimoji = 1 << 2,           // animoji
    MMFaceDetectorModuleObject = 1 << 4,            // 肢体检测器
    MMFaceDetectorModuleHandGesture = 1 << 5,       // 手势检测器

    MMFaceDetectorModuleAll = MMFaceDetectorModuleFace | MMFaceDetectorModuleAnimoji | MMFaceDetectorModuleObject | MMFaceDetectorModuleHandGesture
};

@protocol MMFaceDetectorModuleDelegate <NSObject>

@optional

- (void)faceDetectorModule:(MMMomocvModule *)detectorModule
         detectorIsLoading:(BOOL)isLoading;

- (void)faceDetectorModule:(MMMomocvModule *)detectorModule
         detectorLoadError:(NSError *)error;

- (void)faceDetectorModule:(MMMomocvModule *)detectorModule
              faceFeatures:(NSArray *)faceFeatures;

- (void)faceDetectorModule:(MMMomocvModule *)detectorModule objectType:(NSString *)type bounds:(CGRect)bounds;

@end

@interface MMMomocvModule : NSObject

@property (nonatomic, weak) id<MMFaceDetectorModuleDelegate> delegate;

/// 加载模型
/// @param options 需要加载的模型
- (void)loadWithOptions:(MMFaceDetectorModuleOptions)options;

/// 关键点检测
/// @param pixelBuffer 需要检测的图像数据
/// @param orientation 设备旋转方向
/// @param position 相机位置
- (MMFaceDetectorInfo * _Nullable)detectorInfoWithPixelBuffer:(CVPixelBufferRef)pixelBuffer
                                                  orientation:(UIDeviceOrientation)orientation
                                        captureDevicePosition:(AVCaptureDevicePosition)position;

/// 重置关键点检测器
/// @param options 需要重置的检测器
- (void)resetWithOptions:(MMFaceDetectorModuleOptions)options;

/// 人脸检测防抖属性
@property (nonatomic, assign) BOOL advancedStabilizationModeEnabled;

/// 是否支持多人脸切换
@property (nonatomic, assign) BOOL enableMutiFace;

/// 手势检测类型
@property (nonatomic, assign) NSUInteger handGestureType;

@end

NS_ASSUME_NONNULL_END
