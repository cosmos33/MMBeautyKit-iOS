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

extern MMBeautyLookupEffect const kMMBeautyLookupEffectIceCream;    // 冰激凌
extern MMBeautyLookupEffect const kMMBeautyLookupEffectCoolWhite;   // 凉白开
extern MMBeautyLookupEffect const kMMBeautyLookupEffectRebellious;  // 叛逆
extern MMBeautyLookupEffect const kMMBeautyLookupEffectTasty;       // 可口
extern MMBeautyLookupEffect const kMMBeautyLookupEffectLatte;       // 拿铁
extern MMBeautyLookupEffect const kMMBeautyLookupEffectSunShine;    // 日系
extern MMBeautyLookupEffect const kMMBeautyLookupEffectOld;         // 旧时光
extern MMBeautyLookupEffect const kMMBeautyLookupEffectSeaweed;     // 海苔
extern MMBeautyLookupEffect const kMMBeautyLookupEffectGrayTone;    // 灰调
extern MMBeautyLookupEffect const kMMBeautyLookupEffectCaramel;     // 焦糖
extern MMBeautyLookupEffect const kMMBeautyLookupEffectSnowPear;    // 白梨
extern MMBeautyLookupEffect const kMMBeautyLookupEffectPinkTone;    // 粉调
extern MMBeautyLookupEffect const kMMBeautyLookupEffectRedTone;     // 红调
extern MMBeautyLookupEffect const kMMBeautyLookupEffectCheese;      // 芝士
extern MMBeautyLookupEffect const kMMBeautyLookupEffectQuinoa;      // 藜麦
extern MMBeautyLookupEffect const kMMBeautyLookupEffectCrispy;      // 酥脆
extern MMBeautyLookupEffect const kMMBeautyLookupEffectFoggy;       // 雾感
extern MMBeautyLookupEffect const kMMBeautyLookupEffectFreshCream;  // 鲜奶油
extern MMBeautyLookupEffect const kMMBeautyLookupEffectNatural;     // 自然
extern MMBeautyLookupEffect const kMMBeautyLookupEffectFresh;       // 清新
extern MMBeautyLookupEffect const kMMBeautyLookupEffectSoulmate;    // 红颜
extern MMBeautyLookupEffect const kMMBeautyLookupEffectSun;         // 日系F2
extern MMBeautyLookupEffect const kMMBeautyLookupEffectBoyhood;     // 少年时代
extern MMBeautyLookupEffect const kMMBeautyLookupEffectEgret;       // 白鹭
extern MMBeautyLookupEffect const kMMBeautyLookupEffectRetro;       // 复古
extern MMBeautyLookupEffect const kMMBeautyLookupEffectStoker;      // 斯托克
extern MMBeautyLookupEffect const kMMBeautyLookupEffectPicnic;      // 野餐
extern MMBeautyLookupEffect const kMMBeautyLookupEffectFrida;       // 弗洛达
extern MMBeautyLookupEffect const kMMBeautyLookupEffectRome;        // 罗马
extern MMBeautyLookupEffect const kMMBeautyLookupEffectBroil;       // 烧烤
extern MMBeautyLookupEffect const kMMBeautyLookupEffectBroilF2;     // 烧烤 F2
 
@interface MMRenderFilterLookupModule : MMRenderFilterModule

- (void)setEffect:(MMBeautyLookupEffect)effect;
- (void)setIntensity:(CGFloat)intensity;

@end

NS_ASSUME_NONNULL_END
