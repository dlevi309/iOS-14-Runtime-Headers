/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASZoneSupport : NSObject
+(id)newMutableArrayInZone:(NSZone*)arg1 ;
+(id)newMutableArrayInZone:(NSZone*)arg1 capacity:(unsigned long long)arg2 ;
+(id)copyArray:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)mutableCopyArray:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)newMutableDictionaryInZone:(NSZone*)arg1 ;
+(id)newMutableDictionaryInZone:(NSZone*)arg1 capacity:(unsigned long long)arg2 ;
+(id)copyDictionary:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)mutableCopyDictionary:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)newMutableSetInZone:(NSZone*)arg1 ;
+(id)newMutableSetInZone:(NSZone*)arg1 capacity:(unsigned long long)arg2 ;
+(id)copySet:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)mutableCopySet:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)newMutableStringInZone:(NSZone*)arg1 ;
+(id)newMutableStringInZone:(NSZone*)arg1 capacity:(unsigned long long)arg2 ;
+(id)copyString:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)mutableCopyString:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)newMutableDataInZone:(NSZone*)arg1 ;
+(id)newMutableDataInZone:(NSZone*)arg1 capacity:(unsigned long long)arg2 ;
+(id)newMutableDataInZone:(NSZone*)arg1 length:(unsigned long long)arg2 ;
+(id)copyData:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)mutableCopyData:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)copyNumber:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)copyDate:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)copyUUID:(id)arg1 toZone:(NSZone*)arg2 ;
+(id)deepCopyObject:(id)arg1 toZone:(NSZone*)arg2 strategy:(SCD_Struct_PA6)arg3 ;
@end

