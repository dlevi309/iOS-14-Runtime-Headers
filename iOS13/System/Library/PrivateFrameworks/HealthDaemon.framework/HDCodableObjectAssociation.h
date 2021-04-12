/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableObjectAssociation : PBCodable <NSCopying> {

	NSData* _associationUuid;
	NSData* _objectUuids;

}

@property (nonatomic,readonly) BOOL hasAssociationUuid; 
@property (nonatomic,retain) NSData * associationUuid;               //@synthesize associationUuid=_associationUuid - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectUuids; 
@property (nonatomic,retain) NSData * objectUuids;                   //@synthesize objectUuids=_objectUuids - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithAssociationUUID:(id)arg1 ;
-(void)setObjectUuids:(NSData *)arg1 ;
-(id)decodedAssociationUUID;
-(NSData *)objectUuids;
-(void)setAssociationUuid:(NSData *)arg1 ;
-(BOOL)hasAssociationUuid;
-(BOOL)hasObjectUuids;
-(NSData *)associationUuid;
@end

