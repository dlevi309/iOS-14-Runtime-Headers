/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <CoreHandwriting/CHPointFIFO.h>

@class UIView;

@interface AKBitmapFIFO : CHPointFIFO {

	char* _bitmapDataPtr;
	CGContextRef _bitmapContext;
	CGImageRef _bitmapImage;
	CGPathRef _cachedPath;
	UIView* _view;
	BOOL _isInLiveDraw;
	BOOL _bitmapSizeHasBeenUpdatedOnceForLiveDraw;
	double _bitmapSizeMultiplier;
	double _shadowRadiusInView;
	CGSize _bitmapSize;
	 _lastPoint;
	CGRect _unionDirtyRect;
	CGAffineTransform _viewToBitmapTransform;

}

@property (assign) CGSize bitmapSize;                                         //@synthesize bitmapSize=_bitmapSize - In the implementation block
@property (assign) BOOL bitmapSizeHasBeenUpdatedOnceForLiveDraw;              //@synthesize bitmapSizeHasBeenUpdatedOnceForLiveDraw=_bitmapSizeHasBeenUpdatedOnceForLiveDraw - In the implementation block
@property (assign)  lastPoint;                                                //@synthesize lastPoint=_lastPoint - In the implementation block
@property (assign) CGRect unionDirtyRect;                                     //@synthesize unionDirtyRect=_unionDirtyRect - In the implementation block
@property (assign) CGAffineTransform viewToBitmapTransform;                   //@synthesize viewToBitmapTransform=_viewToBitmapTransform - In the implementation block
@property (assign) double bitmapSizeMultiplier;                               //@synthesize bitmapSizeMultiplier=_bitmapSizeMultiplier - In the implementation block
@property (assign,nonatomic) BOOL isInLiveDraw;                               //@synthesize isInLiveDraw=_isInLiveDraw - In the implementation block
@property (nonatomic,retain) UIView * view;                                   //@synthesize view=_view - In the implementation block
@property (assign) double shadowRadiusInView;                                 //@synthesize shadowRadiusInView=_shadowRadiusInView - In the implementation block
-(void)clear;
-(void)flush;
-(void)addPoint:;
-(void)setView:(UIView *)arg1 ;
-(UIView *)view;
-()lastPoint;
-(void)teardown;
-(id)initWithFIFO:(id)arg1 ;
-(void)setLastPoint:;
-(void)setIsInLiveDraw:(BOOL)arg1 ;
-(void)setBitmapSizeMultiplier:(double)arg1 ;
-(CGPathRef)newPathFromCurrentBitmap;
-(CGImageRef)currentBitmap;
-(CGAffineTransform)viewToBitmapTransform;
-(CGRect)bitmapRectInView;
-(void)resetDirtyRect;
-(double)shadowRadiusInView;
-(void)setShadowRadiusInView:(double)arg1 ;
-(void)setBitmapSize:(CGSize)arg1 ;
-(void)setBitmapSizeHasBeenUpdatedOnceForLiveDraw:(BOOL)arg1 ;
-(void)setViewToBitmapTransform:(CGAffineTransform)arg1 ;
-(void)setUnionDirtyRect:(CGRect)arg1 ;
-(void)_clearAllBitmapData;
-(void)_clearCachedPath;
-(void)_createBitmapContextIfNecessary;
-(void)_addPointToBitmap:;
-(void)_updateBitmapSizeFromViewIfNecessary;
-(CGPoint)_convertPointToScreenBacking:(CGPoint)arg1 ;
-(void)_createBitmapIfNecessary;
-(BOOL)isInLiveDraw;
-(BOOL)bitmapSizeHasBeenUpdatedOnceForLiveDraw;
-(double)bitmapSizeMultiplier;
-(CGSize)bitmapSize;
-(void)_addSinglePointToBitmap:;
-(void)_applyDirtyRectToView;
-(void)_addToDirtyRect:(CGRect)arg1 ;
-(CGRect)unionDirtyRect;
@end

