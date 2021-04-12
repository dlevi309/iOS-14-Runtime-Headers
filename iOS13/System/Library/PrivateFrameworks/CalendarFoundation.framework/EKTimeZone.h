/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EKTimeZone : NSObject <NSCopying> {

	NSString* _name;
	void* _internal;
	long long _lastStart;
	long long _lastEnd;
	unsigned long long _lastIndex;
	double _offset;

}
+(id)timeZoneWithName:(id)arg1 ;
+(id)timeZoneWithNSTimeZone:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)abbreviation;
-(double)secondsFromGMT;
-(double)secondsFromGMTForAbsoluteTime:(double)arg1 ;
-(double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1 ;
-(id)initWithOffset:(double)arg1 name:(id)arg2 ;
-(id)abbreviationForAbsoluteTime:(double)arg1 ;
-(unsigned long long)_indexForAbsoluteTime:(double)arg1 ;
-(id)_abbreviationForIndex:(unsigned long long)arg1 ;
-(id)NSTimeZone;
@end

