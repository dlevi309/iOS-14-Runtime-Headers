/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <libobjc.A.dylib/BRItemNotificationReceiving.h>

@protocol OS_dispatch_queue, BRItemNotificationSending, BRNotificationReceiverDelegate, OS_dispatch_source, NSObject;
@class NSObject, BRNotificationQueue, NSMutableDictionary, NSString;

@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _ipcQueue;
	BRNotificationQueue* _notifs;
	id<BRItemNotificationSending> _sender;
	Ai _gatherDones;
	id<BRNotificationReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _receivedChanges;
	unsigned long long _batchingChanges;
	double _batchingDelay;
	unsigned long long _lastBatchTime;
	NSMutableDictionary* _progressObserverByID;
	NSMutableDictionary* _itemInTransferByID;
	Ai _suspendCount;
	int _networkReachabilityToken;
	BOOL _isNetworkReachable;
	BOOL _isInvalidated;
	id<NSObject> _accountTokenDidChangeNotificationObserver;

}

@property (nonatomic,readonly) unsigned long long pendingCount; 
@property (assign,nonatomic) unsigned long long batchingChanges;                       //@synthesize batchingChanges=_batchingChanges - In the implementation block
@property (assign,nonatomic) double batchingDelay;                                     //@synthesize batchingDelay=_batchingDelay - In the implementation block
@property (nonatomic,retain) id<BRNotificationReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(oneway void)invalidate;
-(id<BRNotificationReceiverDelegate>)delegate;
-(void)setDelegate:(id<BRNotificationReceiverDelegate>)arg1 ;
-(void)resume;
-(void)suspend;
-(void)flush;
-(void)_signalSourceIfNeeded;
-(void)invalidateAndNotify:(BOOL)arg1 ;
-(void)dequeue:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)_obtainNotificationSenderFromDaemon;
-(void)networkDidChangeReachabilityStatusTo:(BOOL)arg1 ;
-(void)_watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3 ;
-(void)_invalidateAndNotify:(BOOL)arg1 ;
-(void)_receiveUpdates:(id)arg1 ;
-(void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)receiveProgressUpdates:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned long long)pendingCount;
-(void)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3 ;
-(oneway void)invalidateAndDontNotifyDelegate;
-(void)receiveStitchingUpdates:(id)arg1 ;
-(void)disableUpdatesFromIPCBeforeStitching;
-(void)enableUpdatesFromIPCAfterStitching;
-(unsigned long long)batchingChanges;
-(void)setBatchingChanges:(unsigned long long)arg1 ;
-(double)batchingDelay;
-(void)setBatchingDelay:(double)arg1 ;
@end

