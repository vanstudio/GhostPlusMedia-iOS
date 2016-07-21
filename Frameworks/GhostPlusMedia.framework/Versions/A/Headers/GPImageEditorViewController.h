//
//  GPImageEditorViewController.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 9..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//


/**
 이미지 편집 테마
 */
typedef NS_ENUM(NSInteger, GPImageEditorTheme) {
	/** Light 테마 */
	GPImageEditorThemeLight,
	/** Dark 테마 */
	GPImageEditorThemeDark
};

/**
 이미지 편집 모드
 */
typedef NS_ENUM(NSInteger, GPImageEditorMode) {
	/** 기본 모드 */
	GPImageEditorModeNone,
	/** 기본 모드 */
	GPImageEditorModeDefault,
	/** 자르기 모드 */
	GPImageEditorModeCrop,
	/** 텍스트 모드 */
	GPImageEditorModeText,
	/** 도구 모드 */
	GPImageEditorModeTool
};

/**
 이미지 편집 도구 모드
 */
typedef NS_ENUM(NSInteger, GPImageEditorToolMode) {
	/** 기본값 */
	GPImageEditorToolModeNone,
	/** 밝기 모드 */
	GPImageEditorToolModeBrightness,
	/** 대비 모드 */
	GPImageEditorToolModeContrast
};

/**
 이미지 자르기 비율
 */
typedef NS_ENUM(NSInteger, GPImageEditorCropRatio) {
	/** 자유 */
	GPImageEditorCropRatio_Free = 1,
	/** 1:1 */
	GPImageEditorCropRatio_1_1 = 2,
	/** 3:4 */
	GPImageEditorCropRatio_3_4 = 3,
	/** 4:3 */
	GPImageEditorCropRatio_4_3 = 4
};


#import <UIKit/UIKit.h>
#import <GPUImage/GPUImage.h>
#import <GhostPlusMedia/GPImageEditorOption.h>
#import <GhostPlusMedia/GPImageEditorCanvasView.h>
#import <GhostPlusMedia/GPImageEditorNavigationBar.h>
#import <GhostPlusMedia/GPImageEditorToolbar.h>
#import <GhostPlusMedia/GPImageEditorAcceptToolbar.h>
#import <GhostPlusMedia/GPImageEditorCropRatioToolbar.h>
#import <GhostPlusMedia/GPImageEditorToolToolbar.h>
#import <GhostPlusMedia/GPImageEditorSliderToolbar.h>


@protocol GPImageEditorViewControllerDelegate;


/**
 이미지 편집 뷰컨트롤러
 */
@interface GPImageEditorViewController : UIViewController
<
GPImageEditorNavigationBarDelegate,
GPImageEditorToolbarDelegate,
GPImageEditorAcceptToolbarDelegate,
GPImageEditorCropRatioToolbarDelegate,
GPImageEditorToolToolbarDelegate,
GPImageEditorSliderToolbarDelegate
>

/** 원본 이미지 */
@property (nonatomic, readonly) UIImage *image;
/** 현재 에디터 모드 */
@property (nonatomic, readonly) GPImageEditorMode currentMode;
/** 델리게이트 */
@property (nonatomic, weak) id<GPImageEditorViewControllerDelegate> delegate;

/** 캔버스 뷰 */
@property (nonatomic, strong, readonly) GPImageEditorCanvasView *canvasView;
/** 네비게이션바 */
@property (nonatomic, strong, readonly) GPImageEditorNavigationBar *navigationBar;
/** 툴바 */
@property (nonatomic, strong, readonly) GPImageEditorToolbar *toolbar;


/**
 초기화
 @param image 편집할 이미지
 @param theme 테마
 */
- (instancetype)initWithImage:(UIImage *)image;

/**
 초기화
 @param image 편집할 이미지
 @param theme 테마
 @param options 옵션
 */
- (instancetype)initWithImage:(UIImage *)image options:(GPImageEditorOption *)option;

@end


/**
 이미지 편집 뷰컨트롤러 델리게이트
 */
@protocol GPImageEditorViewControllerDelegate <NSObject>
@required
/**
 이미지 편집 완료시
 @param image 편집된 이미지
 */
- (void)GPImageEditorViewController:(GPImageEditorViewController *)imageEditorViewController didFinishEditingImage:(UIImage *)image;
/**
 이미지 편집 취소시
 */
- (void)GPImageEditorViewControllerDidCancel:(GPImageEditorViewController *)imageEditorViewController;
@end