/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorCubeFilter.h>

@class NSNumber, UIColor, NSData;

@interface OKWidgetContentColorCubeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorCubeFilter> {

	NSNumber* _inputMinHueAngle;
	NSNumber* _inputMaxHueAngle;
	UIColor* _inputReplaceColor;
	NSData* _cubeData;

}

@property (nonatomic,retain) NSNumber * inputMinHueAngle;              //@synthesize inputMinHueAngle=_inputMinHueAngle - In the implementation block
@property (nonatomic,retain) NSNumber * inputMaxHueAngle;              //@synthesize inputMaxHueAngle=_inputMaxHueAngle - In the implementation block
@property (nonatomic,retain) UIColor * inputReplaceColor;              //@synthesize inputReplaceColor=_inputReplaceColor - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithMinHueAngle:(id)arg1 inputMaxHueAngle:(id)arg2 inputReplaceColor:(id)arg3 ;
-(void)dealloc;
-(id)outputImage;
-(id)inputKeys;
-(void)createCubeWithMinHueAngle:(double)arg1 maxHueAngle:(double)arg2 ;
-(void)setInputMinHueAngle:(NSNumber *)arg1 ;
-(void)setInputMaxHueAngle:(NSNumber *)arg1 ;
-(void)setInputReplaceColor:(UIColor *)arg1 ;
-(void)rgbToHSV:(float*)arg1 hsv:(float*)arg2 ;
-(void)setSettingInputReplaceColor:(id)arg1 ;
-(void)setSettingInputMinHueAngle:(id)arg1 ;
-(void)setSettingInputMaxHueAngle:(id)arg1 ;
-(NSNumber *)inputMinHueAngle;
-(NSNumber *)inputMaxHueAngle;
-(UIColor *)inputReplaceColor;
@end

