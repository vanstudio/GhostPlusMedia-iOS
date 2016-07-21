//
//  GPImageEditorCanvasCropView.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 10..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 캔버스 자르기 뷰
 */
@interface GPImageEditorCanvasCropView : UIView
/**
 이미지 지정
 @param	image	이미지
 */
- (void)setImage:(UIImage *)image;
/**
 자르기 비율 옵션 지정
 @param	cropRatio	자르기 비율
 */
- (void)setCropRatio:(GPImageEditorCropRatio)cropRatio;
/**
 자르기 영역 가져오기
 */
- (CGRect)getCropRect;

@end
