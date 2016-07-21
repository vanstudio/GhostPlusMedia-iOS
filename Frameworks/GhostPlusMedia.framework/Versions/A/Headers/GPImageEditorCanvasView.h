//
//  GPImageEditorCanvasView.h
//  GhostPlusMedia
//
//  Created by VANSTUDIO on 2016. 3. 10..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GhostPlusMedia/GPImageEditorController.h>


/**
 캔버스 뷰
 */
@interface GPImageEditorCanvasView : UIView

/**
 초기화
 @param	image	이미지
 */
- (instancetype)initWithImage:(UIImage *)image;
/**
 모드 지정
 @param mode	모드
 */
- (void)setMode:(GPImageEditorMode)mode;
/**
 자르기 비율 옵션 선택
 @param cropRatio 자르기 비율
 */
- (void)setCropRatio:(GPImageEditorCropRatio)cropRatio;
/**
 회전 프로세스 수행
 @param complete	작업 완료시
 */
- (void)performRotateWithComplete:(void (^)(void))complete;
/**
 자르기 프로세스 수행
 @param complete	작업 완료시
 */
- (void)performCropWithComplete:(void (^)(void))complete;
/**
 텍스트 컨트롤 추가
 */
- (void)performTextAdd;
/**
 텍스트 컨트롤 모두 지우기
 */
- (void)performTextRemoveAll;
/**
 텍스트 드로잉 프로세스 수행
 */
- (void)performTextDraw;
/**
 도구에서 수정한 모든 프로세스 수행
 */
- (void)performTools;
/**
 필터 초기화
 */
- (void)clearFilters;
/**
 밝기 필터 조정
 @param value	수치
 */
- (void)updateBrightnessFilterWithValue:(CGFloat)value;
/**
 대비 필터 조정
 @param value	수치
 */
- (void)updateContrastFilterWithValue:(CGFloat)value;
/**
 이미지 내보내기
 @param complete	작업 완료시
 */
- (void)exportImageWithComplete:(void (^)(UIImage *image))complete;

@end
