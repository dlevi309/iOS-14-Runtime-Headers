/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PIVideoStabilizeResult.h>

@class NSArray, NSDictionary, NSString;

@interface _PIVideoStabilizeResult : _NURenderResult <PIVideoStabilizeResult> {

	NSArray* _keyframes;
	unsigned long long _analysisType;
	NSDictionary* _rawHomographies;
	SCD_Struct_PI6 _stabCropRect;

}

@property (nonatomic,copy,readonly) NSArray * keyframes;                     //@synthesize keyframes=_keyframes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI6 stabCropRect;                  //@synthesize stabCropRect=_stabCropRect - In the implementation block
@property (nonatomic,readonly) unsigned long long analysisType;              //@synthesize analysisType=_analysisType - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawHomographies;               //@synthesize rawHomographies=_rawHomographies - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)rawHomographies;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;
-(unsigned long long)analysisType;
-(id)initWithKeyframes:(id)arg1 stabCropRect:(SCD_Struct_PI6)arg2 analysisType:(unsigned long long)arg3 rawHomographies:(id)arg4 ;
@end

