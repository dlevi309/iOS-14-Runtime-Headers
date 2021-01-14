/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class ML3DatabaseConnection, NSThread;

@interface _ML3DatabaseConnectionWrapper : NSObject {

	ML3DatabaseConnection* _connection;
	NSThread* _owningThread;
	NSThread* _borrowingThread;
	unsigned long long _useCount;

}

@property (nonatomic,retain) ML3DatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSThread * owningThread;                         //@synthesize owningThread=_owningThread - In the implementation block
@property (nonatomic,retain) NSThread * borrowingThread;                      //@synthesize borrowingThread=_borrowingThread - In the implementation block
@property (assign,nonatomic) unsigned long long useCount;                     //@synthesize useCount=_useCount - In the implementation block
-(id)initWithConnection:(id)arg1 ;
-(void)setUseCount:(unsigned long long)arg1 ;
-(NSThread *)owningThread;
-(NSThread *)borrowingThread;
-(id)description;
-(ML3DatabaseConnection *)connection;
-(unsigned long long)useCount;
-(void)setConnection:(ML3DatabaseConnection *)arg1 ;
-(void)setOwningThread:(NSThread *)arg1 ;
-(void)setBorrowingThread:(NSThread *)arg1 ;
@end

