//
//  GPImageEditorColorPickerView.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 11..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol GPImageEditorColorPickerViewDelegate;


/**
 컬러 픽커뷰
 */
@interface GPImageEditorColorPickerView : UIView
/** 델리게이트 */
@property (nonatomic, weak) id<GPImageEditorColorPickerViewDelegate> delegate;
/** 선택된 컬러 */
@property (nonatomic, strong) UIColor *selectedColor;
@end


/**
 GPImageEditorColorPickerView 델리게이트
 */
@protocol GPImageEditorColorPickerViewDelegate<NSObject>
@optional
/**
 키패드 닫기 버튼 클릭시
 @param pickerView	컬러 픽커뷰
 */
- (void)GPImageEditorColorPickerViewDidClickedKeypadDown:(GPImageEditorColorPickerView *)pickerView;
/**
 컬러 선택시
 @param pickerView	컬러 픽커뷰
 @param color		선택된 컬러
 */
- (void)GPImageEditorColorPickerView:(GPImageEditorColorPickerView *)pickerView didSelectColor:(UIColor *)color;
@end