/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@protocol OS_dispatch_group;
#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSObject;

@interface PIVideoReframer : NSObject {

	shared_ptr<VRFSession>* session;
	SCD_Struct_PI5 encodedPixelSize;
	long long orientation;
	CenteredRect pixelRect;
	CenteredRect clapRect;
	CenteredRect viewRect;
	NSObject*<OS_dispatch_group> processGroup;
	/*^block*/id _frameProvider;
	long long _revision;

}

@property (nonatomic,copy) id frameProvider;                    //@synthesize frameProvider=_frameProvider - In the implementation block
@property (nonatomic,readonly) long long revision;              //@synthesize revision=_revision - In the implementation block
+(long long)defaultRevision;
+(/*function pointer*/void*)defaultConfigForRevision:(long long)arg1 ;
+(id)reframerWithRevision:(long long)arg1 encodedPixelSize:(SCD_Struct_PI5)arg2 orientation:(long long)arg3 clapRect:(SCD_Struct_PI6)arg4 viewRect:(SCD_Struct_PI6)arg5 config:(const /*function pointer*/void**)arg6 ;
-(id)init;
-(double)confidence;
-(long long)revision;
-(id)initWithEncodedPixelSize:(SCD_Struct_PI5)arg1 orientation:(long long)arg2 clapRect:(SCD_Struct_PI6)arg3 viewRect:(SCD_Struct_PI6)arg4 config:(const /*function pointer*/void**)arg5 ;
-(void)setFrameProvider:(id)arg1 ;
-(void)startReframingAtTime:(SCD_Struct_PI8)arg1 ;
-(void)updateWithTrackedSubjects:(id)arg1 atTime:(SCD_Struct_PI8)arg2 ;
-(void)updateWithEstimatedCameraMotion:(CGVector)arg1 atTime:(SCD_Struct_PI8)arg2 ;
-(void)finishReframingAtTime:(SCD_Struct_PI8)arg1 ;
-(void)processReframe:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)reframedViewRectAtTime:(SCD_Struct_PI8)arg1 ;
-(id)frameProvider;
@end

