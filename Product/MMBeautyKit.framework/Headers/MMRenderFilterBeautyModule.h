//
//  MMRenderFilterBeautyModule.h
//  MMBeautyKit
//
//  Created by sunfei on 2019/12/13.
//

#import <Foundation/Foundation.h>
#import "MMRenderFilterModule.h"
#import "MMRenderFilterBeautyKey.h"

NS_ASSUME_NONNULL_BEGIN

/// 美颜滤镜描述信息
@interface MMRenderFilterBeautyModule : MMRenderFilterModule

/// 设置美颜滤镜参数
/// @param value 美颜参数值, 范围参见上面美颜相关key解释
/// @param key 美颜相关key
- (void)setBeautyFactor:(float)value forKey:(MMBeautyFilterKey)key;

@end

NS_ASSUME_NONNULL_END
