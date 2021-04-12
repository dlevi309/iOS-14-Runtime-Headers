/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/_CATRemoteConnectionSendContext.h>

@class NSMutableData, NSData, NSInputStream, NSString;

@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject <_CATRemoteConnectionSendContext> {

	NSMutableData* mBuffer;
	NSData* mHeaderData;
	unsigned long long mBytesRead;
	NSInputStream* _stream;
	unsigned long long _dataLength;
	unsigned long long _bufferSize;
	id _userInfo;
	unsigned long long _bytesWritten;

}

@property (nonatomic,copy,readonly) NSInputStream * stream;                        //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLength;                      //@synthesize dataLength=_dataLength - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferSize;                      //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) id userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesRemaining; 
@property (assign,nonatomic) unsigned long long bytesWritten;                      //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (nonatomic,readonly) unsigned long long clientBytesWritten; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSInputStream *)stream;
-(id)userInfo;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(unsigned long long)dataLength;
-(unsigned long long)bufferSize;
-(void)dealloc;
-(id)initWithStream:(id)arg1 length:(unsigned long long)arg2 bufferSize:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(BOOL)hasBytesRemaining;
-(id)bufferedDataWithError:(id*)arg1 ;
-(unsigned long long)clientBytesWritten;
@end

