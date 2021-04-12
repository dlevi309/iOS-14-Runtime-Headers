/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessHeartbeatStatistics : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _heartbeatActiveRequestCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _heartbeatTimerFiringCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _heartbeatValidLocationCount;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasHeartbeatTimerFiringCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * heartbeatTimerFiringCount;                //@synthesize heartbeatTimerFiringCount=_heartbeatTimerFiringCount - In the implementation block
@property (nonatomic,readonly) BOOL hasHeartbeatActiveRequestCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * heartbeatActiveRequestCount;              //@synthesize heartbeatActiveRequestCount=_heartbeatActiveRequestCount - In the implementation block
@property (nonatomic,readonly) BOOL hasHeartbeatValidLocationCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * heartbeatValidLocationCount;              //@synthesize heartbeatValidLocationCount=_heartbeatValidLocationCount - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHeartbeatTimerFiringCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setHeartbeatActiveRequestCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setHeartbeatValidLocationCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(BOOL)hasHeartbeatTimerFiringCount;
-(BOOL)hasHeartbeatActiveRequestCount;
-(BOOL)hasHeartbeatValidLocationCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)heartbeatTimerFiringCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)heartbeatActiveRequestCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)heartbeatValidLocationCount;
@end

