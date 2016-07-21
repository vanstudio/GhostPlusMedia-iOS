//
//  GPImageEditorSliderToolbar.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 15..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GhostPlusMedia/GPImageEditorController.h>


@class GPImageEditorSlider;
@protocol GPImageEditorSliderToolbarDelegate;


/**
 에디터 슬라이더 툴바
 */
@interface GPImageEditorSliderToolbar : UIView

/** 델리게이트 */
@property (nonatomic, weak) id<GPImageEditorSliderToolbarDelegate> delegate;
/** 슬라이더 */
@property (nonatomic, strong) GPImageEditorSlider *slider;

/**
 초기화
 @param delegate	델리게이트
 */
- (instancetype)initWithDelegate:(id<GPImageEditorSliderToolbarDelegate>)delegate;

@end


/**
 에디터 슬라이더
 */
@interface GPImageEditorSlider : UIControl

/** 현재값. 기본값 0.0 */
@property(nonatomic) float value;
/** 최소값. 기본값 0.0 */
@property(nonatomic) float minimumValue;
/** 최대값. 기본값 1.0 */
@property(nonatomic) float maximumValue;

/** minimum track 틴트 컬러 */
@property(nonatomic, strong) UIColor *minimumTrackTintColor;
/** maximum track 틴트 컬러 */
@property(nonatomic, strong) UIColor *maximumTrackTintColor;
/** thumb 틴트 컬러 */
@property(nonatomic, strong) UIColor *thumbTintColor;

/** 현재값 변경시 핸들러 */
@property (nonatomic, copy) void (^valueChanged)(GPImageEditorSlider *slider, CGFloat value);

/** set thumb 이미지 */
- (void)setThumbImage:(UIImage *)image;

@end


/**
 GPImageEditorSliderToolbar 델리게이트
 */
@protocol GPImageEditorSliderToolbarDelegate<NSObject>
@required
/**
 취소 버튼 클릭
 @param toolbar 툴바
 @param value	슬라이더 값
 */
- (void)GPImageEditorSliderToolbar:(GPImageEditorSliderToolbar *)toolbar didValueChanged:(CGFloat)value;
/**
 취소 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorSliderToolbarDidClickedCancelButton:(GPImageEditorSliderToolbar *)toolbar;
/**
 완료 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorSliderToolbarDidClickedDoneButton:(GPImageEditorSliderToolbar *)toolbar;
@end