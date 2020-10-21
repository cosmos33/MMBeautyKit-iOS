//
//  MMRenderFilterStickerModule.h
//  MMBeautyKit
//
//  Created by sunfei on 2020/8/6.
//

#import "MMRenderFilterModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMRenderFilterStickerModule : MMRenderFilterModule

/**
 * 设置贴纸资源
 * @param path: 资源路径
 */
- (void)setMaskModelPath:(NSString *)path;

/**
 * 移除效果
 */
- (void)clear;

@end

NS_ASSUME_NONNULL_END
