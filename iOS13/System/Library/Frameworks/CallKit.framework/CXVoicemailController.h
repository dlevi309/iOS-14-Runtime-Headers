/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol OS_dispatch_queue;
@class CXVoicemailObserver, NSObject;

@interface CXVoicemailController : NSObject {

	CXVoicemailObserver* _voicemailObserver;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,readonly) CXVoicemailObserver * voicemailObserver;                   //@synthesize voicemailObserver=_voicemailObserver - In the implementation block
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTransactionWithActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CXVoicemailObserver *)voicemailObserver;
-(void)requestTransactionWithAction:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

