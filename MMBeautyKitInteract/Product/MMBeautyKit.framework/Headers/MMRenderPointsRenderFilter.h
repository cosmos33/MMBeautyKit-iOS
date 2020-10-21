//
//  MMRenderPointsRenderFilter.h
//  MMBeautyKit
//
//  Created by sunfei on 2020/8/15.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMRenderPointsRenderFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, copy) NSArray *points;

@end

NS_ASSUME_NONNULL_END
