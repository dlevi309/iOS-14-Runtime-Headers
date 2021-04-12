/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _categoryIndexs;
	unsigned _dayOfWeek;
	unsigned _hourOfDay;
	struct {
		unsigned has_dayOfWeek : 1;
		unsigned has_hourOfDay : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek; 
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay; 
@property (nonatomic,readonly) unsigned long long categoryIndexsCount; 
@property (nonatomic,readonly) unsigned* categoryIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)dayOfWeek;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned)hourOfDay;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHourOfDay:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasHourOfDay;
-(unsigned*)categoryIndexs;
-(void)addCategoryIndex:(unsigned)arg1 ;
-(unsigned long long)categoryIndexsCount;
-(void)clearCategoryIndexs;
-(unsigned)categoryIndexAtIndex:(unsigned long long)arg1 ;
-(void)setCategoryIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasDayOfWeek;
@end

