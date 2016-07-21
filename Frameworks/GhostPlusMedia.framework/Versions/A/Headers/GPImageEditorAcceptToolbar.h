//
//  GPImageEditorAcceptToolbar.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 10..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GhostPlusMedia/GPImageEditorController.h>


@protocol GPImageEditorAcceptToolbarDelegate;


/**
 에디터 툴바
 */
@interface GPImageEditorAcceptToolbar : UIView

/** 델리게이트 */
@property (nonatomic, weak) id<GPImageEditorAcceptToolbarDelegate> delegate;

/**
 초기화
 @param delegate	델리게이트
 */
- (instancetype)initWithDelegate:(id<GPImageEditorAcceptToolbarDelegate>)delegate;

@end


/**
 GPImageEditorAcceptToolbar 델리게이트
 */
@protocol GPImageEditorAcceptToolbarDelegate<NSObject>
@required
/**
 취소 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorAcceptToolbarDidClickedCancelButton:(GPImageEditorAcceptToolbar *)toolbar;
/**
 완료 버튼 클릭
 @param toolbar 툴바
 */
- (void)GPImageEditorAcceptToolbarDidClickedDoneButton:(GPImageEditorAcceptToolbar *)toolbar;
@end