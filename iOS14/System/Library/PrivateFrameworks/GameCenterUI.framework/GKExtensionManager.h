/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/GKExtensionHostViewControllerDelegate.h>

@protocol OS_dispatch_queue;
@class GKExtensionHostViewController, NSObject, NSString;

@interface GKExtensionManager : NSObject <GKExtensionHostViewControllerDelegate> {

	long long _extensionLoadState;
	GKExtensionHostViewController* _extensionHostViewController;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSString* _extensionIdentifier;

}

@property (nonatomic,retain) GKExtensionHostViewController * extensionHostViewController;              //@synthesize extensionHostViewController=_extensionHostViewController - In the implementation block
@property (assign,nonatomic) long long extensionLoadState;                                             //@synthesize extensionLoadState=_extensionLoadState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateQueue;                                  //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,copy) NSString * extensionIdentifier;                                             //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)setExtensionLoadState:(long long)arg1 ;
-(void)setExtensionHostViewController:(GKExtensionHostViewController *)arg1 ;
-(GKExtensionHostViewController *)extensionHostViewController;
-(long long)extensionLoadState;
-(id)initWithExtensionBundleIdentifer:(id)arg1 host:(id)arg2 ;
-(void)instantiateViewControllerWithHost:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)tournamentExtensionViewController;
-(BOOL)needToLoadExtension;
-(void)extensionDidTerminateWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(NSString *)extensionIdentifier;
@end

