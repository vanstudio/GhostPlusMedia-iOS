//
//  GPImageEditorOption.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 9..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <Foundation/Foundation.h>


@class GPImageEditorStringResource;
@class GPImageEditorTextOption;
@class GPImageEditorToolValue;


/**
 이미지에디터 옵션
 */
@interface GPImageEditorOption : NSObject

/** 테마 */
@property (nonatomic) GPImageEditorTheme theme;
/** 회전 사용유무 */
@property (nonatomic) BOOL useRotate;
/** 자르기 사용유무 */
@property (nonatomic) BOOL useCrop;
/** 텍스트 사용유무 */
@property (nonatomic) BOOL useText;
/** 도구 사용유무 */
@property (nonatomic) BOOL useTool;
/** 도구-밝기 사용유무 */
@property (nonatomic) BOOL useToolSubBrightness;
/** 도구-대비 사용유무 */
@property (nonatomic) BOOL useToolSubContrast;
/** 뷰애니메이션 지속시간 */
@property (nonatomic) CGFloat viewAnimationDuration;
/** 문자열 리소스 */
@property (nonatomic, strong, readonly) GPImageEditorStringResource *stringResource;
/** 텍스트 옵션 */
@property (nonatomic, strong, readonly) GPImageEditorTextOption *textOption;
/** 도구 값 */
@property (nonatomic, strong, readonly) GPImageEditorToolValue *toolValue;

/** 싱글턴객체 */
+ (GPImageEditorOption *)sharedOption;
/**
 공유 옵션 지정
 @param option	옵션
 */
+ (void)setSharedOption:(GPImageEditorOption *)option;

@end

/**
 문자열 리소스
 */
@interface GPImageEditorStringResource : NSObject
/** 이미지 편집기 타이틀 */
@property (nonatomic, strong) NSString *image_editor_title;
/** 회전 */
@property (nonatomic, strong) NSString *rotate;
/** 자르기 */
@property (nonatomic, strong) NSString *crop;
/** 텍스트 */
@property (nonatomic, strong) NSString *text;
/** 도구 */
@property (nonatomic, strong) NSString *tool;
/** 밝기 */
@property (nonatomic, strong) NSString *brightness;
/** 대비 */
@property (nonatomic, strong) NSString *contrast;
@end


/**
 텍스트 옵션
 */
@interface GPImageEditorTextOption : NSObject
/** 기본 텍스트 */
@property (nonatomic, strong) NSString *defaultText;
/** 폰트 */
@property (nonatomic) UIFont *font;
/** 폰트 색상 배열 */
@property (nonatomic) NSArray<UIColor *> *colors;
/** 기본 폰트 색상 인덱스 */
@property (nonatomic) NSUInteger defaultColorIndex;
/** 색상버튼의 선택된 포커스 색상 */
@property (nonatomic) UIColor *selectedColor;
@end


/**
 도구 값 (런타임용)
 */
@interface GPImageEditorToolValue : NSObject
/** 현재 밝기 값 */
@property (nonatomic) CGFloat brightness;
/** 현재 대비 값 */
@property (nonatomic) CGFloat contrast;
/** 모두 초기화 */
- (void)clear;
@end