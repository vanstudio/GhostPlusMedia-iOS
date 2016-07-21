//
//  GPImageEditorToolbar.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 9..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GhostPlusMedia/GPImageEditorController.h>


@protocol GPImageEditorToolbarDelegate;


/**
 에디터 툴바
 */
@interface GPImageEditorToolbar : UIView

/** 델리게이트 */
@property (nonatomic, weak) id<GPImageEditorToolbarDelegate> delegate;

/**
 초기화
 @param delegate	델리게이트
 */
- (instancetype)initWithDelegate:(id<GPImageEditorToolbarDelegate>)delegate;

@end


/**
 GPImageEditorToolbar 델리게이트
 */
@protocol GPImageEditorToolbarDelegate<NSObject>
@optional
/**
 회전 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorToolbarDidClickedRotateButton:(GPImageEditorToolbar *)toolbar;
/**
 자르기 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorToolbarDidClickedCropButton:(GPImageEditorToolbar *)toolbar;
/**
 텍스트 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorToolbarDidClickedTextButton:(GPImageEditorToolbar *)toolbar;
/**
 도구 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorToolbarDidClickedToolButton:(GPImageEditorToolbar *)toolbar;
@end