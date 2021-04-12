/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>

@class PBCodable, NSData, NTPBRecordBase, NSString;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {

	os_unfair_lock_s _recordLock;
	PBCodable* _record;
	NSData* _recordData;
	NTPBRecordBase* _recordBase;

}

@property (nonatomic,retain) NSData * recordData;                      //@synthesize recordData=_recordData - In the implementation block
@property (nonatomic,retain) NTPBRecordBase * recordBase;              //@synthesize recordBase=_recordBase - In the implementation block
@property (nonatomic,retain) PBCodable * record;                       //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s recordLock;              //@synthesize recordLock=_recordLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(id)faultableRecordWithRecord:(id)arg1 ;
+(id)faultableRecordWithRecordData:(id)arg1 ;
-(id)init;
-(PBCodable *)record;
-(void)setRecord:(PBCodable *)arg1 ;
-(void)writeToKeyValuePair:(id)arg1 ;
-(NTPBRecordBase *)recordBase;
-(void)setRecordData:(NSData *)arg1 ;
-(NSData *)recordData;
-(void)setRecordBase:(NTPBRecordBase *)arg1 ;
-(os_unfair_lock_s)recordLock;
-(void)setRecordLock:(os_unfair_lock_s)arg1 ;
@end

