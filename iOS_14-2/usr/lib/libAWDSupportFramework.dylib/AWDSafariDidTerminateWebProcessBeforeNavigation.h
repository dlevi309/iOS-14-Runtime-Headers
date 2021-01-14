/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariDidTerminateWebProcessBeforeNavigation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _terminationReason;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTerminationReason; 
@property (assign,nonatomic) int terminationReason;                     //@synthesize terminationReason=_terminationReason - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(int)terminationReason;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTerminationReason:(BOOL)arg1 ;
-(BOOL)hasTerminationReason;
-(id)terminationReasonAsString:(int)arg1 ;
-(int)StringAsTerminationReason:(id)arg1 ;
-(id)description;
-(void)setTerminationReason:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

