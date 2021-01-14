/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@class NSString, NSDictionary, NSURL;

@interface ICQLink : NSObject {

	NSString* _text;
	long long _options;
	long long _action;
	NSDictionary* _parameters;
	NSURL* _remoteUIURL;

}

@property (nonatomic,copy,readonly) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long action;                            //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSURL * remoteUIURL;                           //@synthesize remoteUIURL=_remoteUIURL - In the implementation block
+(id)linkWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4 ;
+(BOOL)performAction:(long long)arg1 parameters:(id)arg2 options:(long long)arg3 ;
+(id)linkWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3 ;
-(NSDictionary *)parameters;
-(id)init;
-(BOOL)performAction;
-(id)debugDescription;
-(long long)options;
-(long long)action;
-(NSString *)text;
-(id)initWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4 ;
-(id)initWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3 ;
-(BOOL)performActionWithOptions:(long long)arg1 ;
-(NSURL *)remoteUIURL;
-(void)setRemoteUIURL:(NSURL *)arg1 ;
@end

