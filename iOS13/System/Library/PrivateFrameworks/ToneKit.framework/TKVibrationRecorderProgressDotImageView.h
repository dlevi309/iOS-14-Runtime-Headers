/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface TKVibrationRecorderProgressDotImageView : UIImageView {

	double _timeInterval;
	double _duration;
	double _previousPauseTimeInterval;
	double _previousPauseDuration;
	double _accessibilityFrameAdditionalHeight;

}

@property (assign,nonatomic) double timeInterval;                                    //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double previousPauseTimeInterval;                       //@synthesize previousPauseTimeInterval=_previousPauseTimeInterval - In the implementation block
@property (assign,nonatomic) double previousPauseDuration;                           //@synthesize previousPauseDuration=_previousPauseDuration - In the implementation block
@property (assign,nonatomic) double accessibilityFrameAdditionalHeight;              //@synthesize accessibilityFrameAdditionalHeight=_accessibilityFrameAdditionalHeight - In the implementation block
-(double)timeInterval;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setTimeInterval:(double)arg1 ;
-(void)setPreviousPauseTimeInterval:(double)arg1 ;
-(void)setPreviousPauseDuration:(double)arg1 ;
-(void)setAccessibilityFrameAdditionalHeight:(double)arg1 ;
-(double)previousPauseTimeInterval;
-(double)previousPauseDuration;
-(double)accessibilityFrameAdditionalHeight;
@end

