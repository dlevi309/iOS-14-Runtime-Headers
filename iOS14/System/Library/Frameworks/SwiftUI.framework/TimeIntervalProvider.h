/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <SwiftUI/SwiftUI-Structs.h>
#import <SwiftUI/BaseDateProvider.h>

@class NSDateFormatter, NSArray, NSDate;

@interface TimeIntervalProvider : BaseDateProvider {

	NSDateFormatter* _dateFormatter;
	NSArray* _fallbackSequence;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)_sessionTextForIndex:(long long)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 locale:(id)arg4 timeZone:(id)arg5 ;
-(id)_fallbackSequence;
-(id)_textForSequenceItem:(long long)arg1 ;
-(NSRange)_rangeOfAnnontatedTime:(id)arg1 matchingPattern:(/*^block*/id)arg2 ;
-(id)_timeIntervalFullText;
-(id)_timeIntervalDropMinutesText;
-(id)_startTimeFullText;
-(id)_startTimeDropMinutesText;
-(id)_dateIntervalWideText;
-(id)_dateIntervalNarrowText;
-(id)_timeIntervalTextWithDropMinutes:(BOOL)arg1 onlyStartDate:(BOOL)arg2 ;
-(id)_dateIntervalTextWithNarrow:(BOOL)arg1 ;
-(NSRange)_rangeOfDesignatorInAnnotatedTime:(id)arg1 ;
-(id)_stringByRemovingDesignatorRange:(NSRange)arg1 fromString:(id)arg2 ;
-(NSRange)_rangeOfHoursInAnnotatedTime:(id)arg1 ;
@end

