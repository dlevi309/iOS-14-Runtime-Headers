/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate, TASPAdvertisement, NSMutableArray;

@interface TASingleDeviceRecord : NSObject <NSSecureCoding> {

	BOOL _hasSurfacedNotification;
	NSData* _address;
	unsigned long long _state;
	unsigned long long _type;
	NSDate* _creationDate;
	TASPAdvertisement* _latestAdvertisement;
	double _keepAliveInterval;
	NSMutableArray* _stagedDetectionResults;

}

@property (assign,nonatomic) double keepAliveInterval;                                  //@synthesize keepAliveInterval=_keepAliveInterval - In the implementation block
@property (nonatomic,retain) NSMutableArray * stagedDetectionResults;                   //@synthesize stagedDetectionResults=_stagedDetectionResults - In the implementation block
@property (nonatomic,readonly) NSData * address;                                        //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement;                 //@synthesize latestAdvertisement=_latestAdvertisement - In the implementation block
@property (nonatomic,readonly) NSDate * keepStagedDetectionAliveUntilDate; 
@property (assign,nonatomic) BOOL hasSurfacedNotification;                              //@synthesize hasSurfacedNotification=_hasSurfacedNotification - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionDictionary;
-(void)setKeepAliveInterval:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(double)keepAliveInterval;
-(id)description;
-(NSDate *)creationDate;
-(NSData *)address;
-(unsigned long long)type;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(BOOL)isEqual:(id)arg1 ;
-(TASPAdvertisement *)latestAdvertisement;
-(void)updateLatestAdvertisement:(id)arg1 ;
-(BOOL)_shouldPushStagedDetection:(id)arg1 ;
-(NSDate *)keepStagedDetectionAliveUntilDate;
-(void)clearAllStagedDetections;
-(void)purgeStagedDetectionsWithClock:(id)arg1 ;
-(NSMutableArray *)stagedDetectionResults;
-(BOOL)hasSurfacedNotification;
-(id)initWithDeviceAddress:(id)arg1 state:(unsigned long long)arg2 type:(unsigned long long)arg3 date:(id)arg4 keepAliveInterval:(double)arg5 ;
-(void)stageDetection:(id)arg1 ;
-(id)getStagedDetections;
-(id)getDetectionsReadyToPush;
-(void)mergeWithAnotherSingleDeviceRecord:(id)arg1 ;
-(void)setHasSurfacedNotification:(BOOL)arg1 ;
-(void)setStagedDetectionResults:(NSMutableArray *)arg1 ;
@end

