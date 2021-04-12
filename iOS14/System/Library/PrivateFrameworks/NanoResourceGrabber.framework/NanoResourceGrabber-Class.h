/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface NanoResourceGrabber : NSObject {

	BOOL _connectionMayBeValid;
	NSXPCConnection* _nrgdConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _iconCacheQueue;

}

@property (nonatomic,retain) NSXPCConnection * nrgdConnection;                         //@synthesize nrgdConnection=_nrgdConnection - In the implementation block
@property (assign) BOOL connectionMayBeValid;                                          //@synthesize connectionMayBeValid=_connectionMayBeValid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> iconCacheQueue;              //@synthesize iconCacheQueue=_iconCacheQueue - In the implementation block
+(id)sharedInstance;
+(id)_iconVariant:(int)arg1 fromURL:(id)arg2 ;
+(id)liIconVariants;
+(id)nrgIconVariants;
+(id)iconDataForBundleID:(id)arg1 variant:(int)arg2 proxy:(id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 timeout:(double)arg4 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)connectToService;
-(BOOL)connectionMayBeValid;
-(void)setConnectionMayBeValid:(BOOL)arg1 ;
-(NSXPCConnection *)nrgdConnection;
-(void)setNrgdConnection:(NSXPCConnection *)arg1 ;
-(void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 queue:(id)arg4 updateBlock:(/*^block*/id)arg5 timeout:(double)arg6 ;
-(void)_getPhoneLocalIconForBundleID:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 ;
-(void)_getRemoteIconForBundleIDBypassingCache:(id)arg1 iconVariant:(int)arg2 block:(/*^block*/id)arg3 timeout:(double)arg4 ;
-(void)_setCachedIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 ;
-(id)_getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 ;
-(void)_getPhoneIconForBundleID:(id)arg1 iconVariant:(int)arg2 timeout:(double)arg3 block:(/*^block*/id)arg4 ;
-(void)getIconForBundleID:(id)arg1 iconVariant:(int)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 timeout:(double)arg5 ;
-(void)getCachedIconForBundleID:(id)arg1 iconVariant:(int)arg2 outIconImage:(id*)arg3 updateBlock:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)iconCacheQueue;
-(void)setIconCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

