/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class _ATXDataStore, NSString, NSMutableDictionary;

@interface _ATXAppLaunchSequence : NSObject {

	_ATXDataStore* _datastore;
	NSString* _previousLaunch;
	NSMutableDictionary* _subsequentLaunchCountMap;
	int _launchType;
	opaque_pthread_rwlock_t _rwlock;
	BOOL _previousAppDeleted;
	double _subsequentLaunchTotalCount;

}

@property (nonatomic,readonly) double subsequentLaunchTotalCount;              //@synthesize subsequentLaunchTotalCount=_subsequentLaunchTotalCount - In the implementation block
@property (nonatomic,readonly) BOOL previousAppDeleted;                        //@synthesize previousAppDeleted=_previousAppDeleted - In the implementation block
-(void)dealloc;
-(void)save;
-(id)initWithPreviousLaunch:(id)arg1 dataStore:(id)arg2 ;
-(id)initWithPreviousLaunch:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(BOOL)arg3 ;
-(id)initWithPreviousLaunch:(id)arg1 subsequentLaunchCounts:(id)arg2 dataStore:(id)arg3 allowSimulatedCrashes:(BOOL)arg4 launchType:(int)arg5 ;
-(id)initWithPreviousAppActionLaunch:(id)arg1 dataStore:(id)arg2 ;
-(id)initWithPreviousAppActionLaunch:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(BOOL)arg3 ;
-(id)initWithPreviousAppActionLaunch:(id)arg1 subsequentAppActionLaunchCounts:(id)arg2 dataStore:(id)arg3 allowSimulatedCrashes:(BOOL)arg4 ;
-(void)addSubsequentLaunch:(id)arg1 ;
-(void)deleteDataForLaunch:(id)arg1 ;
-(void)deleteDataForLaunches:(id)arg1 ;
-(void)_deleteDataForLaunchLocked:(id)arg1 ;
-(double)launchCount:(id)arg1 ;
-(double)likelihoodForLaunch:(id)arg1 ;
-(void)decayByFactor:(double)arg1 ;
-(void)decayWithHalfLifeInDays:(double)arg1 ;
-(void)deleteAllInformation;
-(double)subsequentLaunchTotalCount;
-(BOOL)previousAppDeleted;
@end

