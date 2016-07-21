//
//  GPImageEditorNavigationBar.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 10..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol GPImageEditorNavigationBarDelegate;


/**
 에디터 네이게이션바
 */
@interface GPImageEditorNavigationBar : UIView

/** 델리게이트 */
@property (nonatomic, weak) id<GPImageEditorNavigationBarDelegate> delegate;
/** 타이틀 라벨 */
@property (nonatomic, strong, readonly) UILabel *titleLabel;
/** 닫기 버튼 */
@property (nonatomic, strong, readonly) UIButton *closeButton;
/** 완료 버튼 */
@property (nonatomic, strong, readonly) UIButton *doneButton;

/**
 초기화
 @param delegate 델리게이트
 */
- (instancetype)initWithDelegate:(id<GPImageEditorNavigationBarDelegate>)delegate;

@end


/**
 GPImageEditorNavigationBar 델리게이트
 */
@protocol GPImageEditorNavigationBarDelegate<NSObject>
@optional
/**
 닫기 버튼 클릭
 @param navigationBar 네비게이션바
 */
- (void)GPImageEditorNavigationBarDidClickedCloseButton:(GPImageEditorNavigationBar *)navigationBar;
/**
 완료 버튼 클릭
 @param navigationBar 네비게이션바
 */
- (void)GPImageEditorNavigationBarDidClickedDoneButton:(GPImageEditorNavigationBar *)navigationBar;
@end