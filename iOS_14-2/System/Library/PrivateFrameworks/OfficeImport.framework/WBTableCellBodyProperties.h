/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableCellBodyProperties : NSObject
+(void)readFrom:(WrdTableProperties*)arg1 tracked:(WrdTableProperties*)arg2 properties:(id)arg3 index:(unsigned long long)arg4 ;
+(void)mapWordProperties:(WrdTableProperties*)arg1 toProperties:(id)arg2 index:(unsigned long long)arg3 ;
+(void)mapProperties:(id)arg1 toWordProperties:(WrdTableProperties*)arg2 index:(unsigned long long)arg3 ;
+(id)formattingChangeDate:(const WrdDateTimeRef)arg1 ;
+(void)write:(id)arg1 wrdProperties:(WrdTableProperties*)arg2 tracked:(WrdTableProperties*)arg3 index:(unsigned long long)arg4 ;
@end

