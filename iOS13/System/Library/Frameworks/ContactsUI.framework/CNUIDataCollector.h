/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class CNUIDataCollectorAggDLogger, NSString, CNUIDataCollectorSGLogger;

@interface CNUIDataCollector : NSObject {

	CNUIDataCollectorAggDLogger* _aggDLogger;
	NSString* _appIdentifier;
	CNUIDataCollectorSGLogger* _sgLogger;

}

@property (nonatomic,readonly) CNUIDataCollectorAggDLogger * aggDLogger;              //@synthesize aggDLogger=_aggDLogger - In the implementation block
@property (nonatomic,readonly) NSString * appIdentifier;                              //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) CNUIDataCollectorSGLogger * sgLogger;                  //@synthesize sgLogger=_sgLogger - In the implementation block
+(BOOL)isEnabled;
+(id)sharedCollector;
-(id)init;
-(id)initWithEnvironment:(id)arg1 ;
-(NSString *)appIdentifier;
-(void)logContactActionType:(id)arg1 attributes:(id)arg2 ;
-(void)logPresentation;
-(void)_reallyLogIndexUsage;
-(void)logIndexUsage;
-(void)logSearchUsage;
-(void)logSearchResultsFetchedSuggested:(BOOL)arg1 ;
-(void)logSearchResultSelected:(id)arg1 ;
-(void)logRefreshUsage;
-(void)logGroupsShown:(long long)arg1 totalGroups:(long long)arg2 ;
-(void)logAddProperty:(id)arg1 contact:(id)arg2 ;
-(void)logContactShown:(id)arg1 ;
-(void)logContactCreated:(id)arg1 originalContact:(id)arg2 ;
-(CNUIDataCollectorAggDLogger *)aggDLogger;
-(CNUIDataCollectorSGLogger *)sgLogger;
@end

