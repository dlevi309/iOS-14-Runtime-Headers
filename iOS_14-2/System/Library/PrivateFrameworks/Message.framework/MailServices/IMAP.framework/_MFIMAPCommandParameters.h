/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/


@class NSArray, NSMutableArray, MFIMAPResponseConsumer;

@interface _MFIMAPCommandParameters : NSObject {

	int _command;
	NSArray* _arguments;
	NSMutableArray* _untaggedResponses;
	unsigned long long _sequenceNumber;
	MFIMAPResponseConsumer* _responseConsumer;

}

@property (assign,nonatomic) int command;                                            //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSArray * arguments;                                    //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,retain) NSMutableArray * untaggedResponses;                     //@synthesize untaggedResponses=_untaggedResponses - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) MFIMAPResponseConsumer * responseConsumer;              //@synthesize responseConsumer=_responseConsumer - In the implementation block
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(void)setArguments:(NSArray *)arg1 ;
-(id)initWithCommand:(int)arg1 ;
-(unsigned long long)sequenceNumber;
-(NSArray *)arguments;
-(int)command;
-(void)setCommand:(int)arg1 ;
-(id)initWithCommand:(int)arg1 arguments:(id)arg2 ;
-(NSMutableArray *)untaggedResponses;
-(id)initWithCommand:(int)arg1 sequenceNumber:(unsigned long long)arg2 ;
-(void)setUntaggedResponses:(NSMutableArray *)arg1 ;
-(MFIMAPResponseConsumer *)responseConsumer;
-(void)setResponseConsumer:(MFIMAPResponseConsumer *)arg1 ;
@end

