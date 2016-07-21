//
//  GhostPlusBarcode.h
//  GhostPlusBarcode
//
//  Created by VANSTUDIO
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// GhostPlus
#import <GhostPlus/GhostPlus.h>

// Constant
#define GhostPlusBarcode_BUNDLE	[GhostPlusBarcode bundle]

// Library
#import <ZXingObjC/ZXingObjC.h>
#import <ZBarSDK/ZBarSDK.h>

// Module
#import <GhostPlusBarcode/GPBarcodeEncoder.h>


/**
 GhostPlusBarcode 메인클래스
 */
@interface GhostPlusBarcode : NSObject

/**
 GhostPlusBarcode 번들
 */
+ (NSBundle *)bundle;

/** 
 hostPlusMedia 번들로부터 이미지 불러오기
 @param filename 파일이름
 */
+ (UIImage *)imageWithFilename:(NSString *)filename;

@end
