/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitAchievement : PBCodable <NSCopying> {

	long long _completedDate;
	long long _value;
	int _achievementType;
	NSString* _definitionIdentifier;
	int _workoutActivityType;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasAchievementType; 
@property (assign,nonatomic) int achievementType;                          //@synthesize achievementType=_achievementType - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) long long completedDate;                      //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) long long value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasDefinitionIdentifier; 
@property (nonatomic,retain) NSString * definitionIdentifier;              //@synthesize definitionIdentifier=_definitionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutActivityType; 
@property (assign,nonatomic) int workoutActivityType;                      //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
-(int)workoutActivityType;
-(long long)completedDate;
-(void)setCompletedDate:(long long)arg1 ;
-(void)setWorkoutActivityType:(int)arg1 ;
-(void)setDefinitionIdentifier:(NSString *)arg1 ;
-(NSString *)definitionIdentifier;
-(void)setAchievementType:(int)arg1 ;
-(void)setHasAchievementType:(BOOL)arg1 ;
-(BOOL)hasAchievementType;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(BOOL)hasDefinitionIdentifier;
-(void)setHasWorkoutActivityType:(BOOL)arg1 ;
-(BOOL)hasWorkoutActivityType;
-(int)achievementType;
-(id)achievementTypeAsString:(int)arg1 ;
-(int)StringAsAchievementType:(id)arg1 ;
-(id)workoutActivityTypeAsString:(int)arg1 ;
-(int)StringAsWorkoutActivityType:(id)arg1 ;
@end

