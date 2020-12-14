//
//  MMRenderFilterBeautyKey.h
//  MMBeautyKit
//
//  Created by sunfei on 2020/7/8.
//

#import <Foundation/Foundation.h>

typedef NSString *MMBeautyFilterKey NS_STRING_ENUM;

// 基础美颜
extern MMBeautyFilterKey const RUDDY;       // 红润             0.0 - 1.0
extern MMBeautyFilterKey const SKIN_WHITENING;   // 美白             0.0 - 1.0
extern MMBeautyFilterKey const SKIN_SMOOTH;      // 磨皮             0.0 - 1.0
extern MMBeautyFilterKey const BIG_EYE;      // 大眼             0.0 - 1.0
extern MMBeautyFilterKey const THIN_FACE;    // 瘦脸             0.0 - 1.0

// 高级美颜
extern MMBeautyFilterKey const NOSE_WIDTH;   // 鼻宽            -1.0 - 1.0
extern MMBeautyFilterKey const FACE_WIDTH;   // 脸宽             0.0 - 1.0
extern MMBeautyFilterKey const JAW_SHAPE;    // 削脸            -1.0 - 1.0
extern MMBeautyFilterKey const CHIN_LENGTH;  // 下巴            -1.0 - 1.0
extern MMBeautyFilterKey const FOREHEAD;    // 额头            -1.0 - 1.0
extern MMBeautyFilterKey const SHORTEN_FACE; // 短脸             0.0 - 1.0
extern MMBeautyFilterKey const NASOLABIALFOLDSAREA; // 祛法令纹  0.0 - 1.0
extern MMBeautyFilterKey const EYE_TILT;     // 眼睛角度         -1.0 - 1.0
extern MMBeautyFilterKey const EYE_DISTANCE; // 眼距            -1.0 - 1.0
extern MMBeautyFilterKey const EYESAREA;    // 眼袋             0.0 - 1.0
extern MMBeautyFilterKey const EYE_HEIGHT;   // 眼高             0.0 - 1.0
extern MMBeautyFilterKey const NOSE_SIZE;    // 鼻子大小         -1.0 - 1.0
extern MMBeautyFilterKey const NOSE_LIFT;    // 鼻高            -1.0 - 1.0
extern MMBeautyFilterKey const NOSE_RIDGE_WIDTH; // 鼻梁         -1.0 - 1.0
extern MMBeautyFilterKey const NOSE_TIP_SIZE; // 鼻尖            -1.0 - 1.0
extern MMBeautyFilterKey const LIP_THICKNESS; // 嘴唇厚度        -1.0 - 1.0
extern MMBeautyFilterKey const MOUTH_SIZE;   // 嘴唇大小         -1.0 - 1.0
extern MMBeautyFilterKey const JAWWIDTH;    // 宽颔            -1.0 - 1.0

// 提升效果
extern MMBeautyFilterKey const SATURATION; // 饱和度 0 - 1
extern MMBeautyFilterKey const CONTRAST; // 对比度 0 - 1
extern MMBeautyFilterKey const SHARPEN;  // 锐化 0 - 1
