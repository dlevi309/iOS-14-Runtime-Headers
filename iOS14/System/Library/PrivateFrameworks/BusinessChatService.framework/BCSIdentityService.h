/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSIdentityServiceProtocol.h>

@protocol OS_dispatch_queue;
@class IDSAccount, NSObject, NSMutableDictionary, NSString;

@interface BCSIdentityService : NSObject <BCSIdentityServiceProtocol> {

	IDSAccount* _businessChatAccount;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	NSMutableDictionary* _idStatusCompletionBlocks;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialDispatchQueue;              //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * idStatusCompletionBlocks;                //@synthesize idStatusCompletionBlocks=_idStatusCompletionBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)loginID;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(void)setSerialDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)refreshIDStatusForBizID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)businessChatAccount;
-(void)addIDSIDQueryControllerDelegate;
-(NSMutableDictionary *)idStatusCompletionBlocks;
-(void)setIdStatusCompletionBlocks:(NSMutableDictionary *)arg1 ;
-(void)handleIDStatusCompletionBlocksForBizID:(id)arg1 idStatus:(long long)arg2 ;
-(void)warmBusinessChatAccountCache;
@end

