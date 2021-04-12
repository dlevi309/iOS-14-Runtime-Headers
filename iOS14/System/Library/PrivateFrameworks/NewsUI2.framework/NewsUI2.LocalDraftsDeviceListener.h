/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/MCNearbyServiceBrowserDelegate.h>
#import <libobjc.A.dylib/MCSessionDelegate.h>
#import <libobjc.A.dylib/MCSessionDelegate.h>
#import <libobjc.A.dylib/MCNearbyServiceBrowserDelegate.h>

@interface NewsUI2.LocalDraftsDeviceListener : NSObject <MCNearbyServiceBrowserDelegate, MCSessionDelegate, MCSessionDelegate, MCNearbyServiceBrowserDelegate> {

	 localFiles;
	 deviceInfo;
	 delegate;
	 previewServiceType;
	 myPeerId;
	 serviceBrowser;
	 $__lazy_storage_$_session;

}
-(void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2 ;
-(void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3 ;
-(void)browser:(id)arg1 lostPeer:(id)arg2 ;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 ;
-(void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 ;
-(void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 ;
-(void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 ;
-(void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 ;
-(void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
@end

