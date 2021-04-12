/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class HKHealthStore, NSMutableDictionary;

@interface _HKAnchoredObjectQueryManager : NSObject {

	HKHealthStore* _healthStore;
	NSMutableDictionary* _outstandingQueriesByType;
	NSMutableDictionary* _queryStatesByType;
	NSMutableDictionary* _observersByType;

}
-(id)initWithHealthStore:(id)arg1 ;
-(id)_observersForType:(id)arg1 ;
-(BOOL)_typeRequiresNewQuery:(id)arg1 ;
-(void)_createQueryForType:(id)arg1 retryCount:(long long)arg2 ;
-(void)_callObservers:(id)arg1 withType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)addObserver:(id)arg1 forType:(id)arg2 ;
-(void)_removeQueryForType:(id)arg1 ;
-(long long)_queryStateForType:(id)arg1 ;
-(void)_setQueryState:(long long)arg1 forType:(id)arg2 ;
-(void)_handleQueryCallbackForType:(id)arg1 samplesAdded:(id)arg2 objectsDeleted:(id)arg3 error:(id)arg4 retryCount:(long long)arg5 ;
-(void)_transitionToQueryFailureForType:(id)arg1 ;
-(void)_handleQueryErrorForType:(id)arg1 retryCount:(long long)arg2 ;
-(void)_handleQuerySuccessForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 ;
-(id)addObserverForType:(id)arg1 operationQueue:(id)arg2 usingHandler:(/*^block*/id)arg3 ;
-(id)addObserverForType:(id)arg1 dispatchQueue:(id)arg2 usingHandler:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 forType:(id)arg2 ;
@end

