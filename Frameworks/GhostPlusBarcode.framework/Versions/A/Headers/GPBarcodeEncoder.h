//
//  GPBarcodeEncoder.h
//  GhostPlusBarcode
//
//  Created by VANSTUDIO on 2016. 3. 30..
//  Copyright © 2016년 GhostPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GPBarcodeEncoder : NSObject

+ (UIImage *)encode:(NSString *)contents format:(ZXBarcodeFormat)format width:(int)width height:(int)height scale:(CGFloat)scale;
+ (NSString *)stringByZXBarcodeFormat:(ZXBarcodeFormat)format;

@end
