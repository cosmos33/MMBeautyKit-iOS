//
//  MMRenderFilterModule.h
//  MMBeautyKit
//
//  Created by sunfei on 2019/12/13.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
#import "MMRenderInputType.h"

NS_ASSUME_NONNULL_BEGIN

/// 滤镜描述信息
@interface MMRenderFilterModule : NSObject 

/// 滤镜id
@property (nonatomic, readonly) NSString *identifier;
/// 滤镜名称
@property (nonatomic, readonly) NSString *label;
/// 输入数据源类型
@property (nonatomic, assign) MMRenderInputType inputType;

- (id<MTIUnaryFilter> _Nullable)renderFilter;

@end

NS_ASSUME_NONNULL_END
