/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MPUBorderConfiguration : NSObject <NSCopying> {

	double _borderAlpha;
	UIColor* _borderColor;
	double _borderWidth;
	double _fillAlpha;
	UIColor* _fillColor;
	double _dropShadowAlpha;
	UIColor* _dropShadowColor;
	unsigned long long _dropShadowEdges;
	double _dropShadowWidth;

}

@property (assign,nonatomic) double borderAlpha;                                             //@synthesize borderAlpha=_borderAlpha - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                                             //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double fillAlpha;                                               //@synthesize fillAlpha=_fillAlpha - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                            //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double dropShadowAlpha;                                         //@synthesize dropShadowAlpha=_dropShadowAlpha - In the implementation block
@property (nonatomic,retain) UIColor * dropShadowColor;                                      //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
@property (assign,nonatomic) unsigned long long dropShadowEdges;                             //@synthesize dropShadowEdges=_dropShadowEdges - In the implementation block
@property (assign,nonatomic) double dropShadowWidth;                                         //@synthesize dropShadowWidth=_dropShadowWidth - In the implementation block
@property (getter=isFullyTransparent,nonatomic,readonly) BOOL fullyTransparent; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(void)setDropShadowColor:(UIColor *)arg1 ;
-(void)setDropShadowEdges:(unsigned long long)arg1 ;
-(void)setDropShadowWidth:(double)arg1 ;
-(void)setFillAlpha:(double)arg1 ;
-(void)setBorderAlpha:(double)arg1 ;
-(BOOL)isFullyTransparent;
-(double)borderAlpha;
-(double)fillAlpha;
-(double)dropShadowAlpha;
-(void)setDropShadowAlpha:(double)arg1 ;
-(UIColor *)dropShadowColor;
-(unsigned long long)dropShadowEdges;
-(double)dropShadowWidth;
@end

