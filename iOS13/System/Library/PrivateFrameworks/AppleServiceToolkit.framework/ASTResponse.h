/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@class NSDictionary, NSNumber, NSString;

@interface ASTResponse : NSObject {

	long long _command;
	NSDictionary* _data;
	NSNumber* _progress;
	NSNumber* _testId;
	NSDictionary* _stringToCommand;
	NSString* _commandString;

}

@property (nonatomic,retain) NSDictionary * stringToCommand;              //@synthesize stringToCommand=_stringToCommand - In the implementation block
@property (nonatomic,retain) NSString * commandString;                    //@synthesize commandString=_commandString - In the implementation block
@property (nonatomic,readonly) long long command;                         //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSNumber * progress;                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSNumber * testId;                         //@synthesize testId=_testId - In the implementation block
+(id)stringFromCommand:(long long)arg1 ;
+(id)responseWithDictionary:(id)arg1 ;
+(id)_stringToCommand;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)data;
-(NSNumber *)progress;
-(long long)command;
-(void)setCommandString:(NSString *)arg1 ;
-(NSNumber *)testId;
-(BOOL)validateResponse:(id)arg1 key:(id)arg2 expectedClass:(Class)arg3 ;
-(id)validateData:(id)arg1 command:(long long)arg2 ;
-(BOOL)validateTestId:(id)arg1 command:(long long)arg2 ;
-(NSString *)commandString;
-(NSDictionary *)stringToCommand;
-(void)setStringToCommand:(NSDictionary *)arg1 ;
@end

