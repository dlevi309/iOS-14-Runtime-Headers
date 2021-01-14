/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, CIVector;

@interface CIToneCurve : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIVector* inputPoint2;
	CIVector* inputPoint3;
	CIVector* inputPoint4;
	CIImage* _curveImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) CIVector * inputPoint0; 
@property (nonatomic,copy) CIVector * inputPoint1; 
@property (nonatomic,copy) CIVector * inputPoint2; 
@property (nonatomic,copy) CIVector * inputPoint3; 
@property (nonatomic,copy) CIVector * inputPoint4; 
+(id)curveImageFromPoints:(const CGPoint*)arg1 ;
+(void)splineCurveTable:(double*)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const CGPoint*)arg4 ;
+(id)curveImageFromPoints:(const CGPoint*)arg1 linear:(BOOL)arg2 ;
+(id)customAttributes;
-(CIVector *)inputPoint2;
-(void)setInputPoint2:(CIVector *)arg1 ;
-(void)setInputPoint3:(CIVector *)arg1 ;
-(void)setInputPoint4:(CIVector *)arg1 ;
-(CIVector *)inputPoint3;
-(CIVector *)inputPoint4;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(CIVector *)inputPoint0;
-(CIVector *)inputPoint1;
-(id)outputImage;
-(id)_kernel16;
-(CIImage *)inputImage;
-(void)setInputPoint0:(CIVector *)arg1 ;
-(void)setInputPoint1:(CIVector *)arg1 ;
-(void)dealloc;
@end

