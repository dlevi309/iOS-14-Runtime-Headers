/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNowPlaying.framework/AccessoryNowPlaying
*/

#import <AccessoryNowPlaying/AccessoryNowPlayingXPCClientProtocol.h>

@protocol AccessoryNowPlayingClientProtocol, AccessoryNowPlayingXPCServerProtocol;
@class NSXPCConnection, NSSet, NSString;

@interface AccessoryNowPlayingClient : NSObject <AccessoryNowPlayingXPCClientProtocol> {

	BOOL _shouldSendArtwork;
	id<AccessoryNowPlayingClientProtocol> _delegate;
	NSXPCConnection* _serverConnection;
	id<AccessoryNowPlayingXPCServerProtocol> _remoteObject;
	NSSet* _subscriberList;

}

@property (assign,nonatomic) BOOL shouldSendArtwork;                                             //@synthesize shouldSendArtwork=_shouldSendArtwork - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                                 //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<AccessoryNowPlayingXPCServerProtocol> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSSet * subscriberList;                                             //@synthesize subscriberList=_subscriberList - In the implementation block
@property (assign,nonatomic,__weak) id<AccessoryNowPlayingClientProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendPlaybackQueueList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)serverConnection;
-(id<AccessoryNowPlayingClientProtocol>)delegate;
-(void)cancelRequestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 ;
-(void)setDelegate:(id<AccessoryNowPlayingClientProtocol>)arg1 ;
-(void)requestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 startIndex:(unsigned)arg3 upToCount:(unsigned)arg4 infoMask:(unsigned)arg5 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(id<AccessoryNowPlayingXPCServerProtocol>)remoteObject;
-(void)setRemoteObject:(id<AccessoryNowPlayingXPCServerProtocol>)arg1 ;
-(void)dealloc;
-(void)connectToServer;
-(void)playbackQueueListInfoResponse:(id)arg1 requestID:(id)arg2 info:(id)arg3 ;
-(void)updateSubscriberList:(id)arg1 WithReply:(/*^block*/id)arg2 ;
-(void)triggerMediaItemAttributesUpdateWithReply:(/*^block*/id)arg1 ;
-(void)triggerMediaItemArtworkUpdateWithReply:(/*^block*/id)arg1 ;
-(void)triggerPlaybackAttributesUpdateWithReply:(/*^block*/id)arg1 ;
-(void)setPlaybackElapsedTime:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setPlaybackQueueIndex:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(NSSet *)subscriberList;
-(BOOL)shouldSendArtwork;
-(BOOL)shouldSendPlaybackQueueList;
-(void)setSubscriberList:(NSSet *)arg1 ;
-(void)mediaItemAttributesDidChange:(id)arg1 ;
-(void)mediaItemArtworkDidChange;
-(void)playbackAttributesDidChange:(id)arg1 ;
-(void)playbackQueueListDidChange;
-(void)setShouldSendArtwork:(BOOL)arg1 ;
@end

