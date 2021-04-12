/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/TAMetricsProtocol.h>

@class TASPAdvertisement, NSData, NSDateInterval, NSNumber, NSString;

@interface TAMetricsVisit : NSObject <TAMetricsProtocol> {

	NSData* _address;
	unsigned long long _totalVisitCount;
	unsigned long long _totalDistinctVisitCount;
	unsigned long long _consecutiveVisitCount;
	unsigned long long _consecutiveAndDistinctFromPrevVisitCount;
	double _durationOfVisitEntryConsideration;
	double _durationOfVisitExitConsideration;
	NSDateInterval* _visitEntryDelay;
	NSDateInterval* _visitExitDelay;
	double _latitude;
	double _longitude;
	NSNumber* _distanceToPreviousSeenVisit;
	TASPAdvertisement* _latestAdvertisement;

}

@property (nonatomic,readonly) NSData * address;                                                         //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) unsigned long long totalVisitCount;                                       //@synthesize totalVisitCount=_totalVisitCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalDistinctVisitCount;                               //@synthesize totalDistinctVisitCount=_totalDistinctVisitCount - In the implementation block
@property (nonatomic,readonly) unsigned long long consecutiveVisitCount;                                 //@synthesize consecutiveVisitCount=_consecutiveVisitCount - In the implementation block
@property (nonatomic,readonly) unsigned long long consecutiveAndDistinctFromPrevVisitCount;              //@synthesize consecutiveAndDistinctFromPrevVisitCount=_consecutiveAndDistinctFromPrevVisitCount - In the implementation block
@property (nonatomic,readonly) double durationOfVisitEntryConsideration;                                 //@synthesize durationOfVisitEntryConsideration=_durationOfVisitEntryConsideration - In the implementation block
@property (nonatomic,readonly) double durationOfVisitExitConsideration;                                  //@synthesize durationOfVisitExitConsideration=_durationOfVisitExitConsideration - In the implementation block
@property (nonatomic,readonly) NSDateInterval * visitEntryDelay;                                         //@synthesize visitEntryDelay=_visitEntryDelay - In the implementation block
@property (nonatomic,readonly) NSDateInterval * visitExitDelay;                                          //@synthesize visitExitDelay=_visitExitDelay - In the implementation block
@property (nonatomic,readonly) double latitude;                                                          //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                                                         //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) NSNumber * distanceToPreviousSeenVisit;                                   //@synthesize distanceToPreviousSeenVisit=_distanceToPreviousSeenVisit - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement;                                  //@synthesize latestAdvertisement=_latestAdvertisement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSData *)address;
-(double)latitude;
-(double)longitude;
-(id)descriptionDictionary;
-(NSDateInterval *)visitEntryDelay;
-(NSDateInterval *)visitExitDelay;
-(NSNumber *)distanceToPreviousSeenVisit;
-(unsigned long long)totalVisitCount;
-(unsigned long long)totalDistinctVisitCount;
-(unsigned long long)consecutiveVisitCount;
-(unsigned long long)consecutiveAndDistinctFromPrevVisitCount;
-(double)durationOfVisitEntryConsideration;
-(double)durationOfVisitExitConsideration;
-(unsigned long long)getMetricsCollectionType;
-(TASPAdvertisement *)latestAdvertisement;
-(id)initWithSnapshotHistory:(id)arg1 andAddress:(id)arg2 andVisitFilterSettings:(id)arg3 ;
@end

