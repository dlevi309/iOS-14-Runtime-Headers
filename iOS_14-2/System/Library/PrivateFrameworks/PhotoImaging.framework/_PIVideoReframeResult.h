/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PIVideoReframeResult.h>

@class NSArray, NSString;

@interface _PIVideoReframeResult : _NURenderResult <PIVideoReframeResult> {

	NSArray* _keyframes;
	double _confidence;
	SCD_Struct_PI6 _stabCropRect;

}

@property (nonatomic,copy,readonly) NSArray * keyframes;                 //@synthesize keyframes=_keyframes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI6 stabCropRect;              //@synthesize stabCropRect=_stabCropRect - In the implementation block
@property (nonatomic,readonly) double confidence;                        //@synthesize confidence=_confidence - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)confidence;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;
-(id)initWithKeyframes:(id)arg1 confidence:(double)arg2 stabCropRect:(SCD_Struct_PI6)arg3 ;
@end

