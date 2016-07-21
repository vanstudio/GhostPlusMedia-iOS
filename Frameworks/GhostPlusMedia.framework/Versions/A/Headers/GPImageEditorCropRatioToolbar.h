//
//  GPImageEditorCropRatioToolbar.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 14..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <GhostPlusMedia/GPImageEditorController.h>


@protocol GPImageEditorCropRatioToolbarDelegate;


/**
 자르기 비율 툴바
 */
@interface GPImageEditorCropRatioToolbar : UIView

/** 델리게이트 */
@property (nonatomic, weak) id<GPImageEditorCropRatioToolbarDelegate> delegate;

/**
 초기화
 @param delegate	델리게이트
 */
- (instancetype)initWithDelegate:(id<GPImageEditorCropRatioToolbarDelegate>)delegate;

@end


/**
 GPImageEditorCropRatioToolbar 델리게이트
 */
@protocol GPImageEditorCropRatioToolbarDelegate<NSObject>
@required
/**
 비율 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorCropRatioToolbar:(GPImageEditorCropRatioToolbar *)toolbar didChangeRatio:(GPImageEditorCropRatio)cropRatio;
@end