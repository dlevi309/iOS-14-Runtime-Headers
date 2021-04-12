/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTStateModelLocation;

@interface RTStateDepictionAggStateStats : NSObject {

	int _numOfEntries;
	RTStateModelLocation* _location;
	double _aggregateTime_s;
	double _lastExit_s;

}

@property (nonatomic,retain) RTStateModelLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double aggregateTime_s;                       //@synthesize aggregateTime_s=_aggregateTime_s - In the implementation block
@property (assign,nonatomic) double lastExit_s;                            //@synthesize lastExit_s=_lastExit_s - In the implementation block
@property (assign,nonatomic) int numOfEntries;                             //@synthesize numOfEntries=_numOfEntries - In the implementation block
-(id)init;
-(RTStateModelLocation *)location;
-(void)setLocation:(RTStateModelLocation *)arg1 ;
-(void)setAggregateTime_s:(double)arg1 ;
-(double)aggregateTime_s;
-(void)setLastExit_s:(double)arg1 ;
-(void)setNumOfEntries:(int)arg1 ;
-(double)lastExit_s;
-(int)numOfEntries;
@end

