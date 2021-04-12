/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>

@protocol ATXSearchFeedbackListenerTarget, ATXPETEventTracker2Protocol;
@class NSObject, PETGoalConversionEventTracker, ATXEngagementRecordManager, ATXActionPredictionClient, NSString, NSMutableSet, ATXActionSearchResult, NSMutableArray;

@interface ATXSearchFeedbackListener : NSObject <SFFeedbackListener> {

	NSObject*<ATXSearchFeedbackListenerTarget> _target;
	PETGoalConversionEventTracker* _apAppPredictionsShownTracker;
	SCD_Struct_AT9 _debounce;
	ATXEngagementRecordManager* _engagementRecordManager;
	ATXActionPredictionClient* _actionPredictionClient;
	id<ATXPETEventTracker2Protocol> _tracker;
	NSString* _currentQuery;
	BOOL _didSearchDuringSession;
	NSMutableSet* _visibleActionUUIDs;
	NSMutableSet* _visibleAppUUIDs;
	NSMutableSet* _visibleAppBundleIds;
	ATXActionSearchResult* _currentResultCard;
	NSString* _appBlendingCacheId;
	NSString* _actionBlendingCacheId;
	BOOL _hasSeenSearchViewDidAppear;
	NSMutableArray* _queuedEvents;
	BOOL _currentSessionHasEngagement;
	BOOL _previousSessionHadEngagement;
	BOOL _shouldDebounce;

}

@property (assign,nonatomic) BOOL shouldDebounce;                   //@synthesize shouldDebounce=_shouldDebounce - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(BOOL)shouldDebounce;
-(id)init;
-(void)searchViewDidAppear:(id)arg1 ;
-(void)sendUpdateNotification;
-(void)writeSpotlightEvent:(id)arg1 isViewAppearEvent:(BOOL)arg2 ;
-(void)didStartSearch:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(BOOL)_isDuplicateEventWithState:(SCD_Struct_AT8*)arg1 timestamp:(unsigned long long)arg2 method:(SEL)arg3 ;
-(void)_logAppPredictionsShown;
-(void)setShouldDebounce:(BOOL)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)_tryRemoveLockscreenActionPredictionMatchingSuggestion:(id)arg1 ;
-(void)_resetState;
-(id)initWithTarget:(id)arg1 engagementRecordManager:(id)arg2 actionClient:(id)arg3 tracker:(id)arg4 ;
@end

