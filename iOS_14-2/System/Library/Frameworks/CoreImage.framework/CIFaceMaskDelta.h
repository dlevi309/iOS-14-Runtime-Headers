/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIImage, NSDictionary, NSNumber;

@interface CIFaceMaskDelta : CIFilter {

	CIVector* inputImageSize;
	CIImage* inputParameterImage;
	CIVector* inputFacesCenterX;
	CIVector* inputFacesCenterY;
	CIVector* inputFacesChinX;
	CIVector* inputFacesChinY;
	CIVector* inputFacesLeftEyeX;
	CIVector* inputFacesLeftEyeY;
	CIVector* inputFacesRightEyeX;
	CIVector* inputFacesRightEyeY;
	CIVector* inputK0;
	CIVector* inputK1;
	CIVector* inputK2;
	CIVector* inputK3;
	NSDictionary* inputTuningParameters;
	NSNumber* inputDistanceAdd;
	NSNumber* inputAdditiveMaxBlur;
	NSNumber* inputSubtractiveMaxBlur;
	NSNumber* inputApertureScaling;
	NSNumber* inputMaxBlur;
	CIVector* inputFocusRect;
	NSNumber* inputSubjectDistanceMinimumFocusDistance;
	NSNumber* inputSubjectDistanceMaximumFocusDistance;
	NSNumber* inputSubjectDistanceScalingFactor;
	NSNumber* inputSubjectDistanceOffset;

}

@property (nonatomic,retain) CIVector * inputImageSize; 
@property (nonatomic,retain) CIImage * inputParameterImage; 
@property (nonatomic,copy) CIVector * inputFacesCenterX; 
@property (nonatomic,copy) CIVector * inputFacesCenterY; 
@property (nonatomic,copy) CIVector * inputFacesChinX; 
@property (nonatomic,copy) CIVector * inputFacesChinY; 
@property (nonatomic,copy) CIVector * inputFacesLeftEyeX; 
@property (nonatomic,copy) CIVector * inputFacesLeftEyeY; 
@property (nonatomic,copy) CIVector * inputFacesRightEyeX; 
@property (nonatomic,copy) CIVector * inputFacesRightEyeY; 
@property (nonatomic,copy) CIVector * inputK0; 
@property (nonatomic,copy) CIVector * inputK1; 
@property (nonatomic,copy) CIVector * inputK2; 
@property (nonatomic,copy) CIVector * inputK3; 
@property (nonatomic,copy) NSNumber * inputDistanceAdd; 
@property (nonatomic,copy) NSNumber * inputAdditiveMaxBlur; 
@property (nonatomic,copy) NSNumber * inputSubtractiveMaxBlur; 
@property (nonatomic,copy) NSNumber * inputApertureScaling; 
@property (nonatomic,copy) NSNumber * inputMaxBlur; 
@property (nonatomic,copy) NSNumber * inputSubjectDistanceMinimumFocusDistance; 
@property (nonatomic,copy) NSNumber * inputSubjectDistanceMaximumFocusDistance; 
@property (nonatomic,copy) NSNumber * inputSubjectDistanceScalingFactor; 
@property (nonatomic,copy) NSNumber * inputSubjectDistanceOffset; 
@property (nonatomic,copy) CIVector * inputFocusRect; 
@property (nonatomic,copy) NSDictionary * inputTuningParameters; 
-(CIVector *)inputImageSize;
-(CIVector *)inputK0;
-(CIVector *)inputK1;
-(CIVector *)inputK2;
-(CIVector *)inputK3;
-(NSNumber *)inputApertureScaling;
-(NSNumber *)inputMaxBlur;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(void)setInputK1:(CIVector *)arg1 ;
-(CIImage *)inputParameterImage;
-(void)setInputParameterImage:(CIImage *)arg1 ;
-(CIVector *)inputFacesCenterX;
-(void)setInputFacesCenterX:(CIVector *)arg1 ;
-(CIVector *)inputFacesCenterY;
-(void)setInputFacesCenterY:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinX;
-(void)setInputFacesChinX:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinY;
-(void)setInputK0:(CIVector *)arg1 ;
-(void)setInputFacesChinY:(CIVector *)arg1 ;
-(void)setInputK2:(CIVector *)arg1 ;
-(void)setInputK3:(CIVector *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(BOOL)_isValidFace:(unsigned)arg1 ;
-(unsigned)findMostProminentFace;
-(float)distanceToAdd;
-(void)setInputImageSize:(CIVector *)arg1 ;
-(CIVector *)inputFacesLeftEyeX;
-(double)_landmarksToDist:(unsigned)arg1 minimumDistance:(float)arg2 maximumDistance:(float)arg3 scalingFactor:(float)arg4 offset:(float)arg5 ;
-(void)setInputFacesLeftEyeX:(CIVector *)arg1 ;
-(CIVector *)inputFacesLeftEyeY;
-(void)setInputFacesLeftEyeY:(CIVector *)arg1 ;
-(CIVector *)inputFacesRightEyeX;
-(NSNumber *)inputDistanceAdd;
-(void)setInputFacesRightEyeX:(CIVector *)arg1 ;
-(CIVector *)inputFacesRightEyeY;
-(void)setInputFacesRightEyeY:(CIVector *)arg1 ;
-(void)setInputDistanceAdd:(NSNumber *)arg1 ;
-(CIVector *)inputFocusRect;
-(NSNumber *)inputAdditiveMaxBlur;
-(void)setInputAdditiveMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputSubtractiveMaxBlur;
-(void)setInputSubtractiveMaxBlur:(NSNumber *)arg1 ;
-(void)setInputFocusRect:(CIVector *)arg1 ;
-(NSNumber *)inputSubjectDistanceMinimumFocusDistance;
-(NSNumber *)inputSubjectDistanceMaximumFocusDistance;
-(void)setInputSubjectDistanceMinimumFocusDistance:(NSNumber *)arg1 ;
-(void)setInputSubjectDistanceMaximumFocusDistance:(NSNumber *)arg1 ;
-(NSNumber *)inputSubjectDistanceScalingFactor;
-(void)setInputSubjectDistanceScalingFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputSubjectDistanceOffset;
-(void)setInputSubjectDistanceOffset:(NSNumber *)arg1 ;
-(id)outputImage;
@end

