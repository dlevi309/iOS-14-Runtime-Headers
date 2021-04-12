/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSData;

@interface _DPCMSSample : NSObject {

	unsigned long long _hashFunctionIndex;
	NSData* _bitString;

}

@property (nonatomic,readonly) unsigned long long hashFunctionIndex;              //@synthesize hashFunctionIndex=_hashFunctionIndex - In the implementation block
@property (nonatomic,readonly) NSData * bitString;                                //@synthesize bitString=_bitString - In the implementation block
+(id)jsonStringFromSequence:(id)arg1 sequenceHashIndex:(unsigned short)arg2 fragment:(id)arg3 fragmentHashIndex:(unsigned short)arg4 fragmentPosition:(unsigned short)arg5 ;
+(id)cmsSampleWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4 ;
+(id)jsonStringFrom:(id)arg1 hashIndex:(unsigned long long)arg2 ;
+(id)dataFor:(id)arg1 hashAtIndex:(unsigned long long)arg2 privacyParameter:(double)arg3 bitCount:(unsigned long long)arg4 ;
+(id)convertToHexString:(id)arg1 ;
-(id)init;
-(NSData *)bitString;
-(unsigned long long)hashFunctionIndex;
-(id)initWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4 ;
@end

