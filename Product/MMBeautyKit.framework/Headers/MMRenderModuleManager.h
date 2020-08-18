//
//  MMRenderModuleManager.h
//  MMBeautyKit
//
//  Created by sunfei on 2019/12/13.
//

#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>
#import <AVFoundation/AVFoundation.h>
#import "MMRenderFilterModule.h"
#import "MMRenderInputType.h"
#import <MomoCV/MomoCV.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, MMRenderModuleCameraRotate) {
    MMRenderModuleCameraRotate0,        //  home 键在右侧
    MMRenderModuleCameraRotate90,       //  home 键在下方
    MMRenderModuleCameraRotate180,      //  home 键在左侧
    MMRenderModuleCameraRotate270,      //  home 键在上方
};

typedef NSString * const MMRenderObjectTriggerType NS_STRING_ENUM;

FOUNDATION_EXPORT MMRenderObjectTriggerType HEART;         // 双手比心
FOUNDATION_EXPORT MMRenderObjectTriggerType FINGERHEART;   // 单手比心
FOUNDATION_EXPORT MMRenderObjectTriggerType FIVE;          // 五指
FOUNDATION_EXPORT MMRenderObjectTriggerType YEAH;          // 两指/剪刀手
FOUNDATION_EXPORT MMRenderObjectTriggerType ONE;           // 一指(向上)
FOUNDATION_EXPORT MMRenderObjectTriggerType BAOQUAN;       // 抱拳
FOUNDATION_EXPORT MMRenderObjectTriggerType BAINIAN;       // 拜年
FOUNDATION_EXPORT MMRenderObjectTriggerType EIGHT;         // 比八/手枪
FOUNDATION_EXPORT MMRenderObjectTriggerType ZAN;           // 大拇指
FOUNDATION_EXPORT MMRenderObjectTriggerType FIST;          // 拳头

@class MMRenderModuleManager;

@protocol MMRenderModuleManagerDelegate <NSObject>

@optional

/**
 * 返回人脸关键点以及检测到的人脸数量
 */
- (void)renderModuleManager:(MMRenderModuleManager *)manager faceFeatures:(NSArray<MMFaceFeature *> *)faceFeatures;

/**
 * 返回手势类型以及手势位置
 */
- (void)renderModuleManager:(MMRenderModuleManager *)manager objectType:(MMRenderObjectTriggerType)type bounds:(CGRect)bounds;

@end

/// 渲染
@interface MMRenderModuleManager : NSObject

// 如果是相机，需要传入前置/后置位置, 该参数仅在相机模式下设置
@property (nonatomic, assign) AVCaptureDevicePosition devicePosition;

// 目前摄像头相对于人脸的旋转角度, 该参数仅在相机模式下设置
@property (nonatomic, assign) MMRenderModuleCameraRotate cameraRotate;

// 图像数据形式, 默认MMRenderInputTypeStream。 相机或视频MMRenderInputTypeStream，静态图片MMRenderInputTypeStatic
@property (nonatomic, assign) MMRenderInputType inputType;

// 代理
@property (nonatomic, weak) id<MMRenderModuleManagerDelegate> delegate;

/// 渲染函数
/// @param pixelBuffer 输入图像
/// @param error 错误信息
/// @return 渲染后图像
- (CVPixelBufferRef _Nullable)renderFrame:(CVPixelBufferRef)pixelBuffer
                                    error:(NSError * __autoreleasing _Nullable *)error;

/// 注册滤镜
/// @param filterModule 滤镜模块信息
- (void)registerModule:(MMRenderFilterModule *)filterModule;
/// 移除滤镜
/// @param filterModule 滤镜模块信息
- (void)unregisterModule:(MMRenderFilterModule *)filterModule;

@end

NS_ASSUME_NONNULL_END
