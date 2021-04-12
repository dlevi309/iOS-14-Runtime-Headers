/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface CTLCropSupport : NSObject
+(CGSize)playbackSizeForAsset:(id)arg1 ;
+(id)fetchNewCGImageForAsset:(id)arg1 size:(CGSize)arg2 ;
+(id)sourceImageForAsset:(id)arg1 ;
+(CGImageRef)createCGImageWithSourceCGImage:(id)arg1 normalizedSourceRect:(CGRect)arg2 destinationSize:(CGSize)arg3 ;
+(CGImageRef)croppedImageForAsset:(id)arg1 normalizedSourceRect:(CGRect)arg2 destinationSize:(CGSize)arg3 ;
+(BOOL)writeImage:(CGImageRef)arg1 toURL:(id)arg2 fileType:(id)arg3 ;
+(CGImageRef)createScaledImageForImage:(CGImageRef)arg1 scale:(double)arg2 ;
+(CGRect)calculateSuggestedCropRectWithAsset:(id)arg1 aspectRatio:(double)arg2 destinationSize:(CGSize)arg3 ;
+(id)rectAndColorStringFromRect:(CGRect)arg1 colorIndex:(long long)arg2 ;
+(CGImageRef)createScaledImageForImage:(CGImageRef)arg1 scale:(double)arg2 rectAndColors:(id)arg3 ;
+(BOOL)createImageFileWithAsset:(id)arg1 fileType:(id)arg2 normalizedSourceRect:(CGRect)arg3 destinationSize:(CGSize)arg4 scale:(double)arg5 url:(id)arg6 error:(id*)arg7 ;
+(BOOL)createImageFileWithAsset:(id)arg1 fileType:(id)arg2 scale:(double)arg3 rects:(id)arg4 url:(id)arg5 error:(id*)arg6 ;
+(CGRect)calculateCropRectWithAsset:(id)arg1 aspectRatio:(double)arg2 destinationSize:(CGSize)arg3 cropMethodType:(long long)arg4 ;
@end

