/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNGeminiChannel, NSArray;

@interface CNGeminiResult : NSObject <NSSecureCoding> {

	CNGeminiChannel* _channel;
	long long _usage;
	NSArray* _availableChannels;

}

@property (nonatomic,readonly) CNGeminiChannel * channel;                //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) long long usage;                          //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) NSArray * availableChannels;              //@synthesize availableChannels=_availableChannels - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)usage;
-(CNGeminiChannel *)channel;
-(id)initWithChannel:(id)arg1 usage:(long long)arg2 availableChannels:(id)arg3 ;
-(NSArray *)availableChannels;
@end

