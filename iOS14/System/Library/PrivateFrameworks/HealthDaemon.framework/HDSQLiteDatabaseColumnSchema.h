/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString;

@interface HDSQLiteDatabaseColumnSchema : NSObject {

	BOOL _isAutoincrement;
	BOOL _isPrimaryKey;
	BOOL _isNullable;
	NSString* _name;
	NSString* _type;
	NSString* _defaultValue;
	NSString* _foreignKeyTargetTable;
	NSString* _foreignKeyTargetColumn;
	long long _deletionAction;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isAutoincrement;                         //@synthesize isAutoincrement=_isAutoincrement - In the implementation block
@property (assign,nonatomic) BOOL isPrimaryKey;                            //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (assign,nonatomic) BOOL isNullable;                              //@synthesize isNullable=_isNullable - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                        //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetTable;               //@synthesize foreignKeyTargetTable=_foreignKeyTargetTable - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetColumn;              //@synthesize foreignKeyTargetColumn=_foreignKeyTargetColumn - In the implementation block
@property (assign,nonatomic) long long deletionAction;                     //@synthesize deletionAction=_deletionAction - In the implementation block
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSString *)defaultValue;
-(void)setType:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isPrimaryKey;
-(id)description;
-(NSString *)type;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)foreignKeyTargetTable;
-(NSString *)foreignKeyTargetColumn;
-(BOOL)isNullable;
-(void)setIsNullable:(BOOL)arg1 ;
-(void)setIsPrimaryKey:(BOOL)arg1 ;
-(void)setForeignKeyTargetTable:(NSString *)arg1 ;
-(void)setForeignKeyTargetColumn:(NSString *)arg1 ;
-(void)setDeletionAction:(long long)arg1 ;
-(BOOL)isAutoincrement;
-(void)setIsAutoincrement:(BOOL)arg1 ;
-(long long)deletionAction;
@end

