/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/


@protocol OS_os_log;
#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
@class NSObject, NSString;

@interface UserRegistryDB : NSObject {

	sqlite3Ref _sqliteHandle;
	sqlite3_stmtRef _recordIDStatment;
	sqlite3_stmtRef _replaceStatment;
	sqlite3_stmtRef _deleteStatment;
	sqlite3_stmtRef _insertWatch;
	sqlite3_stmtRef _updateWatch;
	sqlite3_stmtRef _insertMirrorKey;
	sqlite3_stmtRef _updateMirrorKey;
	sqlite3_stmtRef _markMirrorKey;
	sqlite3_stmtRef _deleteMirrorKeys;
	sqlite3_stmtRef _resetCurrentMirrorKey;
	sqlite3_stmtRef _insertEscrowKey;
	sqlite3_stmtRef _updateEscrowKey;
	sqlite3_stmtRef _deleteEscrowKey;
	sqlite3_stmtRef _queryEscrowKey;
	sqlite3_stmtRef _queryEscrowKeysAll;
	sqlite3_stmtRef _insertWatchKey;
	sqlite3_stmtRef _queryMissingKeys;
	sqlite3_stmtRef _queryWatches;
	NSObject*<OS_os_log> _oslog;
	NSString* _dsid;

}

@property (assign) sqlite3Ref sqliteHandle;                            //@synthesize sqliteHandle=_sqliteHandle - In the implementation block
@property (assign) sqlite3_stmtRef recordIDStatment;                   //@synthesize recordIDStatment=_recordIDStatment - In the implementation block
@property (assign) sqlite3_stmtRef replaceStatment;                    //@synthesize replaceStatment=_replaceStatment - In the implementation block
@property (assign) sqlite3_stmtRef deleteStatment;                     //@synthesize deleteStatment=_deleteStatment - In the implementation block
@property (assign) sqlite3_stmtRef insertWatch;                        //@synthesize insertWatch=_insertWatch - In the implementation block
@property (assign) sqlite3_stmtRef updateWatch;                        //@synthesize updateWatch=_updateWatch - In the implementation block
@property (assign) sqlite3_stmtRef insertMirrorKey;                    //@synthesize insertMirrorKey=_insertMirrorKey - In the implementation block
@property (assign) sqlite3_stmtRef updateMirrorKey;                    //@synthesize updateMirrorKey=_updateMirrorKey - In the implementation block
@property (assign) sqlite3_stmtRef markMirrorKey;                      //@synthesize markMirrorKey=_markMirrorKey - In the implementation block
@property (assign) sqlite3_stmtRef deleteMirrorKeys;                   //@synthesize deleteMirrorKeys=_deleteMirrorKeys - In the implementation block
@property (assign) sqlite3_stmtRef resetCurrentMirrorKey;              //@synthesize resetCurrentMirrorKey=_resetCurrentMirrorKey - In the implementation block
@property (assign) sqlite3_stmtRef insertEscrowKey;                    //@synthesize insertEscrowKey=_insertEscrowKey - In the implementation block
@property (assign) sqlite3_stmtRef updateEscrowKey;                    //@synthesize updateEscrowKey=_updateEscrowKey - In the implementation block
@property (assign) sqlite3_stmtRef deleteEscrowKey;                    //@synthesize deleteEscrowKey=_deleteEscrowKey - In the implementation block
@property (assign) sqlite3_stmtRef queryEscrowKey;                     //@synthesize queryEscrowKey=_queryEscrowKey - In the implementation block
@property (assign) sqlite3_stmtRef queryEscrowKeysAll;                 //@synthesize queryEscrowKeysAll=_queryEscrowKeysAll - In the implementation block
@property (assign) sqlite3_stmtRef insertWatchKey;                     //@synthesize insertWatchKey=_insertWatchKey - In the implementation block
@property (assign) sqlite3_stmtRef queryMissingKeys;                   //@synthesize queryMissingKeys=_queryMissingKeys - In the implementation block
@property (assign) sqlite3_stmtRef queryWatches;                       //@synthesize queryWatches=_queryWatches - In the implementation block
@property (retain) NSObject*<OS_os_log> oslog;                         //@synthesize oslog=_oslog - In the implementation block
@property (retain) NSString * dsid;                                    //@synthesize dsid=_dsid - In the implementation block
-(void)setSqliteHandle:(sqlite3Ref)arg1 ;
-(sqlite3_stmtRef)insertEscrowKey;
-(NSString *)dsid;
-(sqlite3Ref)sqliteHandle;
-(void)setDsid:(NSString *)arg1 ;
-(BOOL)deleteEscrowKey:(id)arg1 ;
-(sqlite3_stmtRef)queryEscrowKeysAll;
-(id)getData:(id)arg1 type:(int)arg2 ;
-(BOOL)updateEscrowKey:(id)arg1 escrowBlob:(id)arg2 ;
-(id)queryEscrowKeys;
-(void)setInsertWatch:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)deleteMirrorKeys;
-(BOOL)beginExclusiveTransaction;
-(void)setUpdateWatch:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)markMirrorKey;
-(void)setReplaceStatment:(sqlite3_stmtRef)arg1 ;
-(void)setResetCurrentMirrorKey:(sqlite3_stmtRef)arg1 ;
-(void)setQueryWatches:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)insertWatch;
-(BOOL)updateMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 newType:(int)arg4 current:(BOOL)arg5 ;
-(BOOL)endTransaction:(BOOL)arg1 ;
-(sqlite3_stmtRef)queryMissingKeys;
-(void)setMarkMirrorKey:(sqlite3_stmtRef)arg1 ;
-(void)setDeleteEscrowKey:(sqlite3_stmtRef)arg1 ;
-(BOOL)updateSyncDevice:(id)arg1 seen:(id)arg2 version:(id)arg3 ;
-(id)missingKeysFromDevice:(id)arg1 type:(int)arg2 ;
-(sqlite3_stmtRef)replaceStatment;
-(sqlite3_stmtRef)updateMirrorKey;
-(BOOL)replaceRecord:(id)arg1 type:(int)arg2 data:(id)arg3 publicKey:(id)arg4 ;
-(void)setDeleteStatment:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)resetCurrentMirrorKey;
-(sqlite3_stmtRef)updateWatch;
-(BOOL)deleteRecordID:(id)arg1 ;
-(sqlite3_stmtRef)deleteEscrowKey;
-(BOOL)deleteRecordAll;
-(void)setDeleteMirrorKeys:(sqlite3_stmtRef)arg1 ;
-(void)setOslog:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithDSID:(id)arg1 ;
-(sqlite3_stmtRef)updateEscrowKey;
-(NSObject*<OS_os_log>)oslog;
-(BOOL)setEscrowKey:(id)arg1 escrowBlob:(id)arg2 ;
-(void)setQueryEscrowKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)queryWatches;
-(sqlite3_stmtRef)recordIDStatment;
-(BOOL)setupDatabase;
-(sqlite3_stmtRef)queryEscrowKey;
-(void)setQueryMissingKeys:(sqlite3_stmtRef)arg1 ;
-(BOOL)markMirrorKey:(int)arg1 type:(int)arg2 ;
-(BOOL)replaceRecordID:(id)arg1 data:(id)arg2 publicKey:(id)arg3 ;
-(void)setUpdateMirrorKey:(sqlite3_stmtRef)arg1 ;
-(BOOL)prepare:(const char*)arg1 statement:(sqlite3_stmt*)arg2 ;
-(void)setInsertMirrorKey:(sqlite3_stmtRef)arg1 ;
-(BOOL)syncedKeyToDevice:(id)arg1 type:(int)arg2 device:(id)arg3 ;
-(BOOL)setMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 publicIdentity:(id)arg4 ;
-(void)setInsertWatchKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)insertWatchKey;
-(id)queryEscrowKey:(id)arg1 ;
-(BOOL)deleteMirrorKeys:(int)arg1 ;
-(void)setInsertEscrowKey:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)insertMirrorKey;
-(id)getConfigData:(id)arg1 ;
-(void)setQueryEscrowKeysAll:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)deleteStatment;
-(BOOL)replaceConfigRecord:(id)arg1 data:(id)arg2 ;
-(void)setRecordIDStatment:(sqlite3_stmtRef)arg1 ;
-(void)dealloc;
-(id)getRecordIDData:(id)arg1 ;
-(id)syncDevices;
-(void)setUpdateEscrowKey:(sqlite3_stmtRef)arg1 ;
@end

