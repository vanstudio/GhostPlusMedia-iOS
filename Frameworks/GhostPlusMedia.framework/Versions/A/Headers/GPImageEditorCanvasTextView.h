//
//  GPImageEditorCanvasTextView.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 11..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol GPImageEditorCanvasTextViewDelegate;


/**
 캔버스 텍스트뷰
 */
@interface GPImageEditorCanvasTextView : UIView

/** 델리게이트 */
@property (nonatomic, weak) id<GPImageEditorCanvasTextViewDelegate> delegate;
/** 텍스트뷰 */
@property (nonatomic, strong, readonly) UITextView *textView;

/**
 텍스트 편집 시작
 */
- (void)startEditing;
/**
 텍스트 편집 종료
 */
- (void)endEditing;

@end


/**
 GPImageEditorCanvasTextView 델리게이트
 */
@protocol GPImageEditorCanvasTextViewDelegate<NSObject>
@optional
/**
 삭제 버튼 클릭시
 @param textView	텍스트뷰
 */
- (void)GPImageEditorCanvasTextViewDidDelete:(GPImageEditorCanvasTextView *)textView;
@end