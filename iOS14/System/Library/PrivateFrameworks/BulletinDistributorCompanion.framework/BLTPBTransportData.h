/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBTransportData : PBCodable <NSCopying> {

	unsigned long long _sequenceNumber;
	NSData* _md5;
	NSData* _sessionIdentifier;
	unsigned _sessionState;
	BOOL _isInitialSequenceNumber;
	SCD_Struct_BL8 _has;

}

@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsInitialSequenceNumber; 
@property (assign,nonatomic) BOOL isInitialSequenceNumber;                   //@synthesize isInitialSequenceNumber=_isInitialSequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSData * sessionIdentifier;                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSessionState; 
@property (assign,nonatomic) unsigned sessionState;                          //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) BOOL hasMd5; 
@property (nonatomic,retain) NSData * md5;                                   //@synthesize md5=_md5 - In the implementation block
+(id)transportDataWithSequenceNumberManager:(id)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(NSData *)md5;
-(id)dictionaryRepresentation;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned)sessionState;
-(void)setSessionState:(unsigned)arg1 ;
-(id)sessionUUID;
-(BOOL)hasSessionState;
-(unsigned long long)sequenceNumber;
-(void)mergeFrom:(id)arg1 ;
-(void)setMd5:(NSData *)arg1 ;
-(void)setSessionIdentifier:(NSData *)arg1 ;
-(NSData *)sessionIdentifier;
-(id)description;
-(BOOL)hasMd5;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setHasSessionState:(BOOL)arg1 ;
-(void)setIsInitialSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasIsInitialSequenceNumber;
-(BOOL)isInitialSequenceNumber;
-(unsigned long long)backwardsCompatibleSessionState;
-(long long)setSequenceNumberOnManager:(id)arg1 ;
-(void)setHasIsInitialSequenceNumber:(BOOL)arg1 ;
@end

