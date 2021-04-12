/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class BSMachPortTaskNameRight;

@interface FBProcessCPUStatistics : NSObject {

	BSMachPortTaskNameRight* _taskNameRight;
	FBProcessTimes _times;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) double totalElapsedTime; 
@property (nonatomic,readonly) double totalElapsedUserTime; 
@property (nonatomic,readonly) double totalElapsedSystemTime; 
@property (nonatomic,readonly) double totalElapsedIdleTime; 
-(void)dealloc;
-(double)totalElapsedTime;
-(void)update;
-(id)initWithTaskNameRight:(id)arg1 ;
-(id)descriptionForCrashReport;
-(double)_elapsedCPUTime;
-(void)_lock_getApplicationCPUTimesForUser:(out double*)arg1 system:(out double*)arg2 idle:(out double*)arg3 ;
-(void)_hostwideUserElapsedCPUTime:(out double*)arg1 systemElapsedCPUTime:(out double*)arg2 idleElapsedCPUTime:(out double*)arg3 ;
-(double)totalElapsedUserTime;
-(double)totalElapsedSystemTime;
-(double)totalElapsedIdleTime;
@end

