//
//  MMFeatureOptions.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>

typedef NSString * const MMDetectorOptions NS_STRING_ENUM;

FOUNDATION_EXPORT MMDetectorOptions MMDetectorOptionsOrientation;

// face detector options
FOUNDATION_EXPORT MMDetectorOptions MMDetectorOptionsNPDFrameInterval;
FOUNDATION_EXPORT MMDetectorOptions MMDetectorOptionsFaceAlignmentVersion;
FOUNDATION_EXPORT MMDetectorOptions MMDetectorOptionsCameraPosition;
FOUNDATION_EXPORT MMDetectorOptions MMDetectorOptionsAdvancedStabilizationModeEnabled;
FOUNDATION_EXPORT MMDetectorOptions MMDetectorOptionsEnableMutiFace;

// handGesture detector options
FOUNDATION_EXPORT MMDetectorOptions MMDetectorOptionsHandGestureType;

// faceFeaturres
FOUNDATION_EXPORT MMDetectorOptions MMDetectorOptionsFaceFeatures;
