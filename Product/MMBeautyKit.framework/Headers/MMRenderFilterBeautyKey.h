//
//  MMRenderFilterBeautyKey.h
//  MMBeautyKit
//
//  Created by sunfei on 2020/7/8.
//

#import <Foundation/Foundation.h>

typedef NSString *MMBeautyFilterKey NS_STRING_ENUM;

// 基础美颜
extern MMBeautyFilterKey const kBeautyFilterKeyRubby;       // 红润             0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyWhitening;   // 美白             0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeySmooth;      // 磨皮             0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyBigEye;      // 大眼             0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyThinFace;    // 瘦脸             0.0 - 1.0

// 高级美颜
extern MMBeautyFilterKey const kBeautyFilterKeyNoseWidth;   // 鼻宽            -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyFaceWidth;   // 脸宽             0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyJawShape;    // 削脸            -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyChinLength;  // 下巴            -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyForehead;    // 额头            -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyShortenFace; // 短脸             0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyNasolabialFoldsArea; // 祛法令纹  0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyEyeTilt;     // 眼睛角度         -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyEyeDistance; // 眼距            -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyEyesArea;    // 眼袋             0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyEyeHeight;   // 眼高             0.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyNoseSize;    // 鼻子大小         -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyNoseLift;    // 鼻高            -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyNoseRidgeWidth; // 鼻梁         -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyNoseTipSize; // 鼻尖            -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyLipThickness; // 嘴唇厚度        -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyMouthSize;   // 嘴唇大小         -1.0 - 1.0
extern MMBeautyFilterKey const kBeautyFilterKeyJawWidth;    // 宽颔            -1.0 - 1.0
