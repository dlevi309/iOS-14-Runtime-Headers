/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VCCaptionsTranscriptionBlob : PBCodable <NSCopying> {

	NSMutableArray* _segments;
	unsigned _updateNumber;
	unsigned _utteranceNumber;
	BOOL _isFinal;
	BOOL _isLocal;
	SCD_Struct_VC93 _has;

}

@property (assign,nonatomic) unsigned utteranceNumber;               //@synthesize utteranceNumber=_utteranceNumber - In the implementation block
@property (assign,nonatomic) unsigned updateNumber;                  //@synthesize updateNumber=_updateNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsLocal; 
@property (assign,nonatomic) BOOL isLocal;                           //@synthesize isLocal=_isLocal - In the implementation block
@property (assign,nonatomic) BOOL hasIsFinal; 
@property (assign,nonatomic) BOOL isFinal;                           //@synthesize isFinal=_isFinal - In the implementation block
@property (nonatomic,retain) NSMutableArray * segments;              //@synthesize segments=_segments - In the implementation block
+(Class)segmentsType;
-(BOOL)isLocal;
-(id)dictionaryRepresentation;
-(void)addSegments:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isFinal;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(id)description;
-(NSMutableArray *)segments;
-(void)setIsFinal:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setIsLocal:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)segmentsCount;
-(void)clearSegments;
-(id)segmentsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsLocal:(BOOL)arg1 ;
-(BOOL)hasIsLocal;
-(void)setHasIsFinal:(BOOL)arg1 ;
-(BOOL)hasIsFinal;
-(unsigned)utteranceNumber;
-(void)setUtteranceNumber:(unsigned)arg1 ;
-(unsigned)updateNumber;
-(void)setUpdateNumber:(unsigned)arg1 ;
@end

