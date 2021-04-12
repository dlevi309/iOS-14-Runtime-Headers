/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIIPadProductPageDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol SKUIProductPageOverlayDelegate;
@class SKUIClientContext, SKUIItem, SKUIOverlayContainerViewController, UIViewController, NSArray, UIView, NSString;

@interface SKUIProductPageOverlayController : NSObject <SKUIIPadProductPageDelegate, SKStoreProductViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIProductPageOverlayDelegate> _delegate;
	SKUIItem* _initialItem;
	SKUIOverlayContainerViewController* _overlayViewController;
	UIViewController* _parentViewController;

}

@property (nonatomic,__weak,readonly) UIViewController * parentViewController;                //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfVisibleOverlays; 
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUIProductPageOverlayDelegate>)delegate;
-(UIViewController *)parentViewController;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setDelegate:(id<SKUIProductPageOverlayDelegate>)arg1 ;
-(UIView *)view;
-(NSArray *)URLs;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)iPadProductPage:(id)arg1 openItem:(id)arg2 ;
-(void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(/*^block*/id)arg3 ;
-(void)iPadProductPageCannotOpen:(id)arg1 ;
-(id)initWithParentViewController:(id)arg1 ;
-(void)showWithInitialProductPage:(id)arg1 metricsPageEvent:(id)arg2 ;
-(void)showWithInitialURLs:(id)arg1 ;
-(void)showWithInitialItem:(id)arg1 ;
-(long long)numberOfVisibleOverlays;
-(void)_removeOverlayViewController;
-(void)_showWithInitialViewController:(id)arg1 ;
-(void)_showOverlayViewController;
-(void)_finishDismissAndNotifyDelegate:(BOOL)arg1 withViewController:(id)arg2 ;
-(void)_backstopViewAction:(id)arg1 ;
-(void)showWithInitialItemIdentifier:(long long)arg1 ;
-(void)showWithInitialURL:(id)arg1 ;
-(void)showWithInitialURLRequest:(id)arg1 ;
@end

