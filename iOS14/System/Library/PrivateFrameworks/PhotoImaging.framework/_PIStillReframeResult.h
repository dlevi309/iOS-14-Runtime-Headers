/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PIStillReframeResult.h>

@class VNSaliencyImageObservation, NSArray, NSString;

@interface _PIStillReframeResult : _NURenderResult <PIStillReframeResult> {

	double _confidence;
	VNSaliencyImageObservation* _saliencyObservation;
	NSArray* _ANODSubjects;
	CGRect _bounds;

}

@property (assign,nonatomic) CGRect bounds;                                                 //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double confidence;                                             //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
@property (nonatomic,copy) NSArray * ANODSubjects;                                          //@synthesize ANODSubjects=_ANODSubjects - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)confidence;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(VNSaliencyImageObservation *)saliencyObservation;
-(void)setSaliencyObservation:(VNSaliencyImageObservation *)arg1 ;
-(void)setANODSubjects:(NSArray *)arg1 ;
-(NSArray *)ANODSubjects;
@end

