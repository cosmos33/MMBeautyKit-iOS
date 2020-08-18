//
//  MMRenderFilterLookupModule.h
//  MMBeautyKit
//
//  Created by sunfei on 2020/7/7.
//

#import <Foundation/Foundation.h>
#import "MMRenderFilterModule.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString *MMBeautyLookupEffect NS_STRING_ENUM;

@interface MMRenderFilterLookupModule : MMRenderFilterModule

- (void)setLookupResourcePath:(NSString *)resourcePath;
- (void)setIntensity:(CGFloat)intensity;

@end

NS_ASSUME_NONNULL_END
