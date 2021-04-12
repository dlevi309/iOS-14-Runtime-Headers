/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPQueryRetrieveResponse, FCCKPRecordRetrieveResponse, FCCKPOperation, FCCKPResponseOperationResult;

@interface FCCKPResponseOperation : PBCodable <NSCopying> {

	unsigned _operationCost;
	FCCKPQueryRetrieveResponse* _queryRetrieveResponse;
	FCCKPRecordRetrieveResponse* _recordRetrieveResponse;
	FCCKPOperation* _response;
	FCCKPResponseOperationResult* _result;
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasRecordRetrieveResponse; 
@property (nonatomic,retain) FCCKPRecordRetrieveResponse * recordRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasQueryRetrieveResponse; 
@property (nonatomic,retain) FCCKPQueryRetrieveResponse * queryRetrieveResponse; 
@property (assign,nonatomic) BOOL hasOperationCost; 
@property (assign,nonatomic) unsigned operationCost;                                            //@synthesize operationCost=_operationCost - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) FCCKPOperation * response;                                         //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasResult; 
@property (nonatomic,retain) FCCKPResponseOperationResult * result;                             //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(FCCKPResponseOperationResult *)result;
-(void)setResult:(FCCKPResponseOperationResult *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(FCCKPOperation *)response;
-(void)setResponse:(FCCKPOperation *)arg1 ;
-(BOOL)hasResponse;
-(BOOL)hasResult;
-(void)setRecordRetrieveResponse:(FCCKPRecordRetrieveResponse *)arg1 ;
-(void)setQueryRetrieveResponse:(FCCKPQueryRetrieveResponse *)arg1 ;
-(void)setOperationCost:(unsigned)arg1 ;
-(void)setHasOperationCost:(BOOL)arg1 ;
-(BOOL)hasOperationCost;
-(unsigned)operationCost;
-(BOOL)hasRecordRetrieveResponse;
-(FCCKPRecordRetrieveResponse *)recordRetrieveResponse;
-(BOOL)hasQueryRetrieveResponse;
-(FCCKPQueryRetrieveResponse *)queryRetrieveResponse;
@end

