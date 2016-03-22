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

// Constans
#define GHOSTPLUSMEDIA_BUNDLE	[GhostPlusMedia bundle]

/**
 GhostPlusMedia 메인클래스
 */
@interface GhostPlusMedia : NSObject

/** GhostPlusMedia 번들 */
+ (NSBundle *)bundle;

/** GhostPlusMedia 번들로부터 이미지 불러오기 */
+ (UIImage *)imageWithFilename:(NSString *)filename;

// TODO: delete
- (void)test;

@end
