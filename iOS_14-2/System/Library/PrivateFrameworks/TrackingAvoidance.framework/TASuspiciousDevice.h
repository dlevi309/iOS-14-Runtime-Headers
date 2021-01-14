/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSDate, TASPAdvertisement, NSArray, TAMetricsDetection;

@interface TASuspiciousDevice : NSObject <NSCopying, NSSecureCoding> {

	NSData* _address;
	NSDictionary* _detectionSummary;
	NSDate* _date;
	TASPAdvertisement* _latestAdvertisement;
	NSArray* _locationHistory;
	TAMetricsDetection* _detectionMetrics;
	unsigned long long _detectionType;

}

@property (nonatomic,copy,readonly) NSData * address;                                     //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * detectionSummary;                      //@synthesize detectionSummary=_detectionSummary - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) TASPAdvertisement * latestAdvertisement;              //@synthesize latestAdvertisement=_latestAdvertisement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locationHistory;                            //@synthesize locationHistory=_locationHistory - In the implementation block
@property (nonatomic,readonly) TAMetricsDetection * detectionMetrics;                     //@synthesize detectionMetrics=_detectionMetrics - In the implementation block
@property (nonatomic,readonly) unsigned long long detectionType;                          //@synthesize detectionType=_detectionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)address;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)locationHistory;
-(id)initWithLatestAdv:(id)arg1 detectionSummary:(id)arg2 date:(id)arg3 locHistory:(id)arg4 detectionMetrics:(id)arg5 detectionType:(unsigned long long)arg6 ;
-(NSDictionary *)detectionSummary;
-(TASPAdvertisement *)latestAdvertisement;
-(TAMetricsDetection *)detectionMetrics;
-(unsigned long long)detectionType;
@end

