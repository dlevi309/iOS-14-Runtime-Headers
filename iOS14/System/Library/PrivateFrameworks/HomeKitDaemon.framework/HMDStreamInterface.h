/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue, HMDCameraRemoteStreamProtocol;
@class HMDCameraNetworkConfig, HMDCameraStreamSessionID, NSObject, NSString;

@interface HMDStreamInterface : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	int _localRTPSocket;
	unsigned long long _streamInterfaceState;
	HMDCameraNetworkConfig* _localNetworkConfig;
	HMDCameraStreamSessionID* _sessionID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HMDCameraRemoteStreamProtocol> _sessionHandler;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) HMDCameraNetworkConfig * localNetworkConfig;                   //@synthesize localNetworkConfig=_localNetworkConfig - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) id<HMDCameraRemoteStreamProtocol> sessionHandler;              //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (assign,nonatomic) int localRTPSocket;                                              //@synthesize localRTPSocket=_localRTPSocket - In the implementation block
@property (assign,nonatomic) unsigned long long streamInterfaceState;                         //@synthesize streamInterfaceState=_streamInterfaceState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                    //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCameraStreamSessionID *)sessionID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id<HMDCameraRemoteStreamProtocol>)sessionHandler;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 localNetworkConfig:(id)arg4 sessionHandler:(id)arg5 ;
-(int)openSocket;
-(HMDCameraNetworkConfig *)localNetworkConfig;
-(void)setLocalRTPSocket:(int)arg1 ;
-(BOOL)loadMiscFields:(id)arg1 ;
-(void)setStreamInterfaceState:(unsigned long long)arg1 ;
-(int)localRTPSocket;
-(unsigned long long)streamInterfaceState;
-(id)extractNetworkConfig:(int)arg1 peerNameExtractor:(/*function pointer*/void*)arg2 ;
@end

