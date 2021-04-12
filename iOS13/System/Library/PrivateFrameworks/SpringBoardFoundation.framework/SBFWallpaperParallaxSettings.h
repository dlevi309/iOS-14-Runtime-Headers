/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFParallaxSettings.h>

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings {

	double _overhangX;
	double _overhangY;
	double _perspectiveTransform;

}

@property (assign) double overhangX;                         //@synthesize overhangX=_overhangX - In the implementation block
@property (assign) double overhangY;                         //@synthesize overhangY=_overhangY - In the implementation block
@property (assign) double perspectiveTransform;              //@synthesize perspectiveTransform=_perspectiveTransform - In the implementation block
+(id)settingsControllerModule;
+(CGSize)bestWallpaperSizeForWallpaperSize:(CGSize)arg1 deviceType:(long long)arg2 parallaxFactor:(double)arg3 portrait:(BOOL)arg4 ;
+(CGSize)minimumWallpaperSizeForWallpaperSize:(CGSize)arg1 deviceType:(long long)arg2 ;
+(CGSize)minimumWallpaperSizeForCurrentDevice;
+(long long)_currentDeviceType;
+(CGSize)_requiredOverhangSizeForDeviceType:(long long)arg1 ;
+(CGSize)_requiredOverhangSizeForCurrentDevice;
+(CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1 portrait:(BOOL)arg2 ;
+(CGSize)overhangSizeForDeviceType:(long long)arg1 ;
+(double)minimumZoomScaleForWallpaperSize:(CGSize)arg1 parallaxFactor:(double)arg2 deviceType:(long long)arg3 ;
+(CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1 ;
+(CGSize)overhangSizeForCurrentDevice;
+(double)minimumZoomScaleForCurrentDeviceForWallpaperSize:(CGSize)arg1 parallaxFactor:(double)arg2 ;
-(void)setDefaultValues;
-(double)perspectiveTransform;
-(void)setPerspectiveTransform:(double)arg1 ;
-(void)setOverhangX:(double)arg1 ;
-(void)setOverhangY:(double)arg1 ;
-(double)overhangX;
-(double)overhangY;
@end

