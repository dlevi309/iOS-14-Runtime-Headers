/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HMHome;

@interface HFItemBuilder : NSObject {

	id _homeKitRepresentation;
	HMHome* _home;

}

@property (nonatomic,readonly) id homeKitRepresentation;              //@synthesize homeKitRepresentation=_homeKitRepresentation - In the implementation block
@property (nonatomic,readonly) HMHome * home;                         //@synthesize home=_home - In the implementation block
+(Class)homeKitRepresentationClass;
-(id)init;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(id)verifyPropertiesAreSet:(id)arg1 ;
-(id)homeKitRepresentation;
-(void)setHomeKitRepresentation:(id)arg1 ;
-(id)commitItemBuilderSetDiff:(id)arg1 addBlock:(/*^block*/id)arg2 deleteBlock:(/*^block*/id)arg3 ;
-(id)_commitSetDiff:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)commitSetDiff:(id)arg1 addBlock:(/*^block*/id)arg2 updateBlock:(/*^block*/id)arg3 deleteBlock:(/*^block*/id)arg4 ;
-(id)verifyProperty:(id)arg1 matchesCondition:(/*^block*/id)arg2 description:(id)arg3 ;
-(id)verifyPropertyIsSet:(id)arg1 ;
-(id)_failureFutureWithReason:(id)arg1 ;
-(id)verifyNameIsNotEmpty:(id)arg1 ;
@end

