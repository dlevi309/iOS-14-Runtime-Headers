/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNUIUserActionTargetDiscovering, CNUIUserActionRanking, CNUIDefaultUserActionFetcher, CNUIUserActionDiscoveringEnvironment;
@interface CNUIUserActionDisambiguationModeler : NSObject {

	BOOL _tracksChanges;
	id<CNUIUserActionTargetDiscovering> _targetDiscoveringHelper;
	id<CNUIUserActionRanking> _rankingHelper;
	id<CNUIDefaultUserActionFetcher> _defaultActionFetcher;
	id<CNUIUserActionDiscoveringEnvironment> _discoveringEnvironment;

}

@property (nonatomic,retain) id<CNUIUserActionTargetDiscovering> targetDiscoveringHelper;                  //@synthesize targetDiscoveringHelper=_targetDiscoveringHelper - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionRanking> rankingHelper;                                      //@synthesize rankingHelper=_rankingHelper - In the implementation block
@property (nonatomic,retain) id<CNUIDefaultUserActionFetcher> defaultActionFetcher;                        //@synthesize defaultActionFetcher=_defaultActionFetcher - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionDiscoveringEnvironment> discoveringEnvironment;              //@synthesize discoveringEnvironment=_discoveringEnvironment - In the implementation block
@property (assign,nonatomic) BOOL tracksChanges;                                                           //@synthesize tracksChanges=_tracksChanges - In the implementation block
+(id)descriptorForRequiredKeys;
-(id)init;
-(void)setContactStore:(id)arg1 ;
-(id)schedulerProvider;
-(id)initWithDiscoveringEnvironment:(id)arg1 ;
-(id)thirdPartyTargetsForActionTypes:(id)arg1 ;
-(id)thirdPartyActionsForContactProperty:(id)arg1 ;
-(BOOL)tracksChanges;
-(void)setTracksChanges:(BOOL)arg1 ;
-(id)modelsWithContact:(id)arg1 actionType:(id)arg2 ;
-(id<CNUIUserActionTargetDiscovering>)targetDiscoveringHelper;
-(id)initWithTargetDiscoveringHelper:(id)arg1 rankingHelper:(id)arg2 defaultActionFetcher:(id)arg3 discoveringEnvironment:(id)arg4 ;
-(id<CNUIUserActionDiscoveringEnvironment>)discoveringEnvironment;
-(void)setDiscoveringEnvironment:(id<CNUIUserActionDiscoveringEnvironment>)arg1 ;
-(id)discoverActionsForContact:(id)arg1 actionType:(id)arg2 trackingChanges:(BOOL)arg3 ;
-(id)defaultActionFromActions:(id)arg1 trackingChanges:(BOOL)arg2 ;
-(id)recentActionsFromActions:(id)arg1 ;
-(id)modelsWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 sorts:(BOOL)arg6 throttles:(BOOL)arg7 ;
-(id)targetsChangedObservableForActionType:(id)arg1 ;
-(id)discoverActionsForContact:(id)arg1 actionType:(id)arg2 ;
-(id)_discoverActionsForContact:(id)arg1 actionType:(id)arg2 ;
-(id)defaultActionChangedObservable;
-(id)defaultActionFromActions:(id)arg1 ;
-(id<CNUIDefaultUserActionFetcher>)defaultActionFetcher;
-(id<CNUIUserActionRanking>)rankingHelper;
-(id)sortActionsOnModel:(id)arg1 ;
-(void)setTargetDiscoveringHelper:(id<CNUIUserActionTargetDiscovering>)arg1 ;
-(void)setRankingHelper:(id<CNUIUserActionRanking>)arg1 ;
-(void)setDefaultActionFetcher:(id<CNUIDefaultUserActionFetcher>)arg1 ;
@end

