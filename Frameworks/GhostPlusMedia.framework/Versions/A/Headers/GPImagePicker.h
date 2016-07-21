//
//  GPImagePicker.h
//  Created by VANSTUDIO
//

#import <Foundation/Foundation.h>


@protocol GPImagePickerDelegate;

/**
 취소 타입
 */
typedef NS_ENUM(NSInteger, GPImagePickerCancelType) {
	/** 사용자가 취소 */
	GPImagePickerCancelTypeByUser,
	/** 카메라 권한이 없을때 */
	GPImagePickerCancelTypeCameraDenied,
	/** 카메라 사용할 수 없는 디바이스 일때 */
	GPImagePickerCancelTypeCameraRestricted,
	/** 사진라이브러리 권한이 없을때 */
	GPImagePickerCancelTypePhotoLibraryDenied,
	/** 사진라이브러리 사용할 수 없는 디바이스 일때 */
	GPImagePickerCancelTypePhotoLibraryRestricted,
	/** 시뮬레이터 일때 */
	GPImagePickerCancelTypeSimulator
};


/**
 GPImagePicker
 카메라,앨범 이미지 선택 모듈
 */
@interface GPImagePicker : NSObject <UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

/** 델리게이트 */
@property (nonatomic, weak) id<GPImagePickerDelegate> delegate;
/** 취소버튼 타이틀 */
@property (nonatomic, strong) NSString *cancelButtonTitle;
/** 카메라버튼 타이틀 */
@property (nonatomic, strong) NSString *chooseCameraButtonTitle;
/** 앨범버튼 타이틀 */
@property (nonatomic, strong) NSString *chooseAlbumButtonTitle;
/** 편집 사용여부 */
@property (nonatomic) BOOL allowsEditing;

/**
 해당 뷰컨트롤러에서 보이기
 @param viewController 해당 뷰컨트롤러
 */
- (void)showInViewController:(UIViewController *)viewController;
/**
 이미지 픽커 닫기
 @param flag		애니메이션
 @param	completion	애니메이션 완료시
 */
- (void)dismissViewControllerAnimated:(BOOL)flag completion:(void (^)(void))completion;

@end


/**
 GPImagePickerDelegate
 */
@protocol GPImagePickerDelegate <NSObject>
@required
/**
 이미지 선택시
 @param picker 픽커
 @param image 선택된 이미지
 */
- (void)GPImagePicker:(GPImagePicker *)picker didFinishPickingImage:(UIImage *)image;
/**
 이미지 선택 취소시
 @param picker 픽커
 */
- (void)GPImagePickerDidCancel:(GPImagePicker *)picker cancelType:(GPImagePickerCancelType)cancelType;
@end