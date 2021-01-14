/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
*/

#import <SymptomPresentationFeed/SymptomPresentationFeed-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NWNetworkAdviceUpdate, NSDate, NSArray, NSPredicate;

@interface NWNetworkOfInterest : NSObject <NSSecureCoding, NSCopying> {

	BOOL isThinnedOut;
	NSMutableArray* allInvitesHourly;
	NSMutableArray* bgInvitesHourly;
	int lastHour;
	BOOL _isTrafficEligible;
	BOOL _willGetDiscretionaryTrafficInvites;
	BOOL _discretionaryTrafficInvited;
	BOOL _isAny;
	BOOL _isBuiltin;
	long long _interfaceClass;
	long long _considerAlternate;
	NWNetworkAdviceUpdate* _considerAlternateUpdate;
	long long _linkQuality;
	long long _powerCostDL;
	long long _powerCostUL;
	NSDate* _predictionsGeneratedAt;
	NSArray* _predictions;
	long long _interface;
	NSPredicate* _customSignature;
	long long _version;
	long long _scopedToLOI;
	long long _flags;

}

@property (readonly) long long version;                                          //@synthesize version=_version - In the implementation block
@property (readonly) long long scopedToLOI;                                      //@synthesize scopedToLOI=_scopedToLOI - In the implementation block
@property (readonly) long long flags;                                            //@synthesize flags=_flags - In the implementation block
@property (assign) BOOL isTrafficEligible;                                       //@synthesize isTrafficEligible=_isTrafficEligible - In the implementation block
@property (assign) BOOL willGetDiscretionaryTrafficInvites;                      //@synthesize willGetDiscretionaryTrafficInvites=_willGetDiscretionaryTrafficInvites - In the implementation block
@property (assign) BOOL discretionaryTrafficInvited;                             //@synthesize discretionaryTrafficInvited=_discretionaryTrafficInvited - In the implementation block
@property (assign) long long interfaceClass;                                     //@synthesize interfaceClass=_interfaceClass - In the implementation block
@property (assign) long long considerAlternate;                                  //@synthesize considerAlternate=_considerAlternate - In the implementation block
@property (retain) NWNetworkAdviceUpdate * considerAlternateUpdate;              //@synthesize considerAlternateUpdate=_considerAlternateUpdate - In the implementation block
@property (assign) long long linkQuality;                                        //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign) long long powerCostDL;                                        //@synthesize powerCostDL=_powerCostDL - In the implementation block
@property (assign) long long powerCostUL;                                        //@synthesize powerCostUL=_powerCostUL - In the implementation block
@property (retain) NSDate * predictionsGeneratedAt;                              //@synthesize predictionsGeneratedAt=_predictionsGeneratedAt - In the implementation block
@property (retain) NSArray * predictions;                                        //@synthesize predictions=_predictions - In the implementation block
@property (readonly) long long interface;                                        //@synthesize interface=_interface - In the implementation block
@property (readonly) BOOL isAny;                                                 //@synthesize isAny=_isAny - In the implementation block
@property (readonly) BOOL isBuiltin;                                             //@synthesize isBuiltin=_isBuiltin - In the implementation block
@property (readonly) NSPredicate * customSignature;                              //@synthesize customSignature=_customSignature - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(long long)powerCostDL;
-(long long)linkQuality;
-(long long)powerCostUL;
-(void)setLinkQuality:(long long)arg1 ;
-(NSPredicate *)customSignature;
-(BOOL)isAny;
-(long long)flags;
-(NSArray *)predictions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(long long)interface;
-(void)setPowerCostDL:(long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredictions:(NSArray *)arg1 ;
-(void)setPowerCostUL:(long long)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)identityAttrsOnly;
-(void)removeObserverForAllKeyPaths:(id)arg1 ;
-(void)addObserverForAllKeyPaths:(id)arg1 ;
-(BOOL)isTrafficEligible;
-(void)setIsTrafficEligible:(BOOL)arg1 ;
-(BOOL)isBuiltin;
-(long long)scopedToLOI;
-(void)setWillGetDiscretionaryTrafficInvites:(BOOL)arg1 ;
-(BOOL)willGetDiscretionaryTrafficInvites;
-(void)setDiscretionaryTrafficInvited:(BOOL)arg1 ;
-(id)hasForegroundActivity;
-(void)setConsiderAlternate:(long long)arg1 ;
-(void)setConsiderAlternateUpdate:(NWNetworkAdviceUpdate *)arg1 ;
-(NWNetworkAdviceUpdate *)considerAlternateUpdate;
-(void)setPredictionsGeneratedAt:(NSDate *)arg1 ;
-(void)anchorPowerCostToLinkQuality;
-(void)setInterfaceClass:(long long)arg1 ;
-(long long)interfaceClass;
-(id)initWithSpec:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 flags:(long long)arg5 hasCustomSignature:(id)arg6 ;
-(BOOL)discretionaryTrafficInvited;
-(long long)considerAlternate;
-(NSDate *)predictionsGeneratedAt;
-(id)_descriptionFull:(BOOL)arg1 ;
-(BOOL)_isEqualToNOI:(id)arg1 ;
-(BOOL)_newDistroSlot;
-(id)typePrettyPrint;
-(BOOL)atHomeScopedNOI;
-(BOOL)atWorkScopedNOI;
-(id)instantQuality;
-(void)setInstantQuality:(id)arg1 ;
-(void)setHasForegroundActivity:(id)arg1 ;
-(id)predictionsError;
-(id)dayOfWeekGrouping;
-(id)trainingProgress;
-(id)invitesHourlyDistribution;
-(id)interfaceTimeline;
@end

