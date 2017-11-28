//
//  GhostPlusMedia.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// GhostPlus
#import <GhostPlus/GhostPlus.h>

// Constant
#define GHOSTPLUSMEDIA_BUNDLE	[GhostPlusMedia bundle]

// Module
#import <GhostPlusMedia/GPImagePicker.h>
#import <GhostPlusMedia/GPImagePickerController.h>
#import <GhostPlusMedia/GPImageEditorController.h>

// Constans
#define GHOSTPLUSMEDIA_VERSION           @"1.01";
#define GHOSTPLUSMEDIA_BUILD_VERSION     @"101";


/**
 GhostPlusMedia 메인클래스
 */
@interface GhostPlusMedia : NSObject

/**
 준비 확인
 */
+ (void)checkPrepare;

/**
 GhostPlusMedia 번들
 */
+ (NSBundle *)bundle;

/** 
 hostPlusMedia 번들로부터 이미지 불러오기
 @param filename 파일이름
 */
+ (UIImage *)imageWithFilename:(NSString *)filename;

@end
