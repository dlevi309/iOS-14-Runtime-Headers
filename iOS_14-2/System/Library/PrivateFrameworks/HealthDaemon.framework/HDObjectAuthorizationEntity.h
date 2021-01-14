/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDObjectAuthorizationEntity : HDHealthEntity
+(id)databaseTable;
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(BOOL)resetObjectAuthorizationRecordsForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)authorizationRecordsBySourceForSampleWithUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_insertCodableObjectAuthorizations:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)resetAuthorizationForObjects:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 skipErrors:(BOOL)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)propertyForSyncProvenance;
+(long long)protectionClass;
+(id)authorizationStatusForSamplesOfType:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)authorizationRecordsForSamples:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)resetAllObjectAuthorizationRecordsForProfile:(id)arg1 error:(id*)arg2 ;
@end

