/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface HFAppleMusicHomeAccountManager : NSObject {

	NSMutableDictionary* _homeIdentifierToMediaAccountMapping;
	NSObject*<OS_dispatch_queue> _dataModelUpdateQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueryQueue;
	NSMutableDictionary* _homeIdentifierToActiveAMSQueriesMapping;
	NSMutableDictionary* _homeIdentifierToFuturePromiseMapping;

}

@property (nonatomic,retain) NSMutableDictionary * homeIdentifierToMediaAccountMapping;                  //@synthesize homeIdentifierToMediaAccountMapping=_homeIdentifierToMediaAccountMapping - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataModelUpdateQueue;                          //@synthesize dataModelUpdateQueue=_dataModelUpdateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueryQueue;                          //@synthesize concurrentQueryQueue=_concurrentQueryQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homeIdentifierToActiveAMSQueriesMapping;              //@synthesize homeIdentifierToActiveAMSQueriesMapping=_homeIdentifierToActiveAMSQueriesMapping - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homeIdentifierToFuturePromiseMapping;                 //@synthesize homeIdentifierToFuturePromiseMapping=_homeIdentifierToFuturePromiseMapping - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)applicationWillEnterForeground;
-(void)executeHomeMediaAccountFetchForAllHomes;
-(NSMutableDictionary *)homeIdentifierToMediaAccountMapping;
-(void)setHomeIdentifierToMediaAccountMapping:(NSMutableDictionary *)arg1 ;
-(id)_fetchMediaAccountForHome:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataModelUpdateQueue;
-(id)_futureForQueryLimitForHome:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueryQueue;
-(NSMutableDictionary *)homeIdentifierToFuturePromiseMapping;
-(void)setHomeIdentifierToFuturePromiseMapping:(NSMutableDictionary *)arg1 ;
-(void)_finishPendingPromisesWithMediaAccountInfo:(id)arg1 forHome:(id)arg2 ;
-(NSMutableDictionary *)homeIdentifierToActiveAMSQueriesMapping;
-(void)setHomeIdentifierToActiveAMSQueriesMapping:(NSMutableDictionary *)arg1 ;
-(id)mediaAccountForHomeIdentifier:(id)arg1 ;
-(id)executeHomeMediaAccountFetchForHome:(id)arg1 ;
-(void)setAMSiTunesAccount:(id)arg1 forHome:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getHomeMediaAccountForHome:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDataModelUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConcurrentQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

