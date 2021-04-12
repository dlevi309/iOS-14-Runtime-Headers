/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REObservableSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, REUpNextScheduler;

@interface REDonatedActionStore : REObservableSingleton {

	BOOL _isMonitoringLockState;
	BOOL _synchronized;
	NSObject*<OS_dispatch_queue> _queue;
	REUpNextScheduler* _donationsScheduler;
	REUpNextScheduler* _deletionsScheduler;

}
-(void)start;
-(id)_init;
-(id)callbackQueue;
-(void)dealloc;
-(void)_queue_distributeRecentDonatedActions;
-(void)_queue_distributeRecentDeletedActions;
-(BOOL)_shouldLimitQueries;
-(void)_queue_distributeAllDonatedActions;
-(void)_subscribeToNotifications;
-(void)_notified_addDonatedActionsForInstalledApps:(id)arg1 ;
-(void)_notified_removeDonatedActionsForUninstalledApps:(id)arg1 ;
-(void)_notified_removeThenDistributeAllActions:(id)arg1 ;
-(void)_notified_distributeRecentDonatedActions:(id)arg1 ;
-(void)_notified_distributeRecentDeletedActions:(id)arg1 ;
-(void)_beginLoadingData;
-(void)_finishLoadingData:(unsigned long long)arg1 ;
-(void)_queue_distributeAllDonatedActionsWithIdentifier:(id)arg1 ;
-(void)fetchDonationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)synchronizeDonationsIfNecessary;
-(void)triggerDistributeAllDonatedActions:(BOOL)arg1 ;
@end

