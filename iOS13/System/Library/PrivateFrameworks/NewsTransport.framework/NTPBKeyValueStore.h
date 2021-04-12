/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface NTPBKeyValueStore : PBCodable <NSCopying> {

	long long _clientVersion;
	long long _version;
	NSMutableArray* _keyValuePairs;
	NSData* _plistSidecar;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                           //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasClientVersion; 
@property (assign,nonatomic) long long clientVersion;                     //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (nonatomic,readonly) BOOL hasPlistSidecar; 
@property (nonatomic,retain) NSData * plistSidecar;                       //@synthesize plistSidecar=_plistSidecar - In the implementation block
+(Class)keyValuePairsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(long long)clientVersion;
-(void)setClientVersion:(long long)arg1 ;
-(NSMutableArray *)keyValuePairs;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(void)addKeyValuePairs:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(void)clearKeyValuePairs;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
-(NSData *)plistSidecar;
-(void)setPlistSidecar:(NSData *)arg1 ;
-(BOOL)hasClientVersion;
-(void)setHasClientVersion:(BOOL)arg1 ;
-(BOOL)hasPlistSidecar;
@end

