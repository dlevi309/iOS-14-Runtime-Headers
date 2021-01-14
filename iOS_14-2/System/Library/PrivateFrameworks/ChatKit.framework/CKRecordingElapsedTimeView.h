/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDateComponentsFormatter, UILabel, UIView, NSTimer, NSDate;

@interface CKRecordingElapsedTimeView : UIView {

	NSDateComponentsFormatter* __durationFormatter;
	UILabel* __timeLabel;
	UIView* __recordingDotView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,readonly) NSDateComponentsFormatter * _durationFormatter;              //@synthesize _durationFormatter=__durationFormatter - In the implementation block
@property (nonatomic,readonly) UILabel * _timeLabel;                                        //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,readonly) UIView * _recordingDotView;                                  //@synthesize _recordingDotView=__recordingDotView - In the implementation block
@property (nonatomic,readonly) NSTimer * _updateTimer;                                      //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,readonly) NSDate * _startTime;                                         //@synthesize _startTime=__startTime - In the implementation block
-(void)_update:(id)arg1 ;
-(void)_commonCAMElapsedTimeViewInitialization;
-(void)_beginRecordingAnimation;
-(void)_endRecordingAnimation;
-(NSDateComponentsFormatter *)_durationFormatter;
-(UIView *)_recordingDotView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)_timeLabel;
-(NSDate *)_startTime;
-(void)startTimer;
-(void)resetTimer;
-(void)endTimer;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimer *)_updateTimer;
-(void)dealloc;
@end

