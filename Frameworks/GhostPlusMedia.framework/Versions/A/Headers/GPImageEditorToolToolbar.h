//
//  GPImageEditorToolToolbar.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 15..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GhostPlusMedia/GPImageEditorController.h>


@protocol GPImageEditorToolToolbarDelegate;


/**
 에디터 도구 툴바
 */
@interface GPImageEditorToolToolbar : UIView

/** 델리게이트 */
@property (nonatomic, weak) id<GPImageEditorToolToolbarDelegate> delegate;

/**
 초기화
 @param delegate	델리게이트
 */
- (instancetype)initWithDelegate:(id<GPImageEditorToolToolbarDelegate>)delegate;

@end


/**
 GPImageEditorToolToolbar 델리게이트
 */
@protocol GPImageEditorToolToolbarDelegate<NSObject>
@required
/**
 도구 서브 버튼 클릭
 @param toolbar 툴바
 @param mode	도구모드
 */
- (void)GPImageEditorToolToolbar:(GPImageEditorToolToolbar *)toolbar didSelectToolSubMode:(GPImageEditorToolMode)mode;
/**
 취소 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorToolToolbarDidClickedCancelButton:(GPImageEditorToolToolbar *)toolbar;
/**
 완료 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorToolToolbarDidClickedDoneButton:(GPImageEditorToolToolbar *)toolbar;
@end