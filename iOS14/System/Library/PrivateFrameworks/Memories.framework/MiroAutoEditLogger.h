/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSMutableString, NSRegularExpression;

@interface MiroAutoEditLogger : NSObject {

	BOOL _logsToConsole;
	NSMutableString* _log;
	long long _loggingLevel;
	long long _indentationLevel;
	NSRegularExpression* _framesRegex;
	long long _disableLoggingCount;

}

@property (nonatomic,retain) NSMutableString * log;                          //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) long long loggingLevel;                         //@synthesize loggingLevel=_loggingLevel - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                     //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,retain) NSRegularExpression * framesRegex;              //@synthesize framesRegex=_framesRegex - In the implementation block
@property (assign,nonatomic) long long disableLoggingCount;                  //@synthesize disableLoggingCount=_disableLoggingCount - In the implementation block
@property (assign,nonatomic) BOOL logsToConsole;                             //@synthesize logsToConsole=_logsToConsole - In the implementation block
-(void)commit;
-(id)init;
-(NSMutableString *)log;
-(void)enableLogging;
-(void)setLog:(NSMutableString *)arg1 ;
-(void)setLoggingLevel:(long long)arg1 ;
-(long long)loggingLevel;
-(long long)indentationLevel;
-(void)disableLogging;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)logAndDescribeFrameCounts:(BOOL)arg1 level:(long long)arg2 formatString:(id)arg3 ;
-(void)setFramesRegex:(NSRegularExpression *)arg1 ;
-(long long)disableLoggingCount;
-(NSRegularExpression *)framesRegex;
-(BOOL)logsToConsole;
-(void)setDisableLoggingCount:(long long)arg1 ;
-(void)incrementIndentationLevel;
-(void)decrementIndentationLevel;
-(void)setLogsToConsole:(BOOL)arg1 ;
@end

