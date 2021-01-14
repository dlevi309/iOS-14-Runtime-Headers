/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class PUAbstractNavigationBanner, _UINavigationControllerPalette, UIViewController, NSString;

@interface PUNavigationController : UINavigationController <PXForcedDismissableViewController, UINavigationControllerDelegate> {

	BOOL _pu_preventsAutorotation;
	BOOL _pu_alwaysForwardsPreferredStatusBarStyle;
	BOOL _pu_alwaysForwardsPrefersStatusBarHidden;
	/*^block*/id _ppt_onDidShowViewControllerBlock;
	PUAbstractNavigationBanner* __banner;
	_UINavigationControllerPalette* __palette;
	unsigned long long _pu_supportedInterfaceOrientations;
	long long __barStyle;
	UIViewController* __currentToolbarViewController;

}

@property (setter=_setBanner:,nonatomic,retain) PUAbstractNavigationBanner * _banner;                                                        //@synthesize _banner=__banner - In the implementation block
@property (setter=_setPalette:,nonatomic,retain) _UINavigationControllerPalette * _palette;                                                  //@synthesize _palette=__palette - In the implementation block
@property (nonatomic,readonly) unsigned long long pu_supportedInterfaceOrientations;                                                         //@synthesize pu_supportedInterfaceOrientations=_pu_supportedInterfaceOrientations - In the implementation block
@property (nonatomic,readonly) BOOL pu_preventsAutorotation;                                                                                 //@synthesize pu_preventsAutorotation=_pu_preventsAutorotation - In the implementation block
@property (assign,setter=_setBarStyle:,nonatomic) long long _barStyle;                                                                       //@synthesize _barStyle=__barStyle - In the implementation block
@property (assign,setter=_setCurrentToolbarViewController:,nonatomic,__weak) UIViewController * _currentToolbarViewController;               //@synthesize _currentToolbarViewController=__currentToolbarViewController - In the implementation block
@property (assign,setter=pu_setAlwaysForwardsPreferredStatusBarStyle:,nonatomic) BOOL pu_alwaysForwardsPreferredStatusBarStyle;              //@synthesize pu_alwaysForwardsPreferredStatusBarStyle=_pu_alwaysForwardsPreferredStatusBarStyle - In the implementation block
@property (assign,setter=pu_setAlwaysForwardsPreferredStatusBarHidden:,nonatomic) BOOL pu_alwaysForwardsPrefersStatusBarHidden;              //@synthesize pu_alwaysForwardsPrefersStatusBarHidden=_pu_alwaysForwardsPrefersStatusBarHidden - In the implementation block
@property (setter=ppt_setOnDidShowViewControllerBlock:,nonatomic,copy) id ppt_onDidShowViewControllerBlock;                                  //@synthesize ppt_onDidShowViewControllerBlock=_ppt_onDidShowViewControllerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setPalette:(id)arg1 ;
-(unsigned long long)pu_supportedInterfaceOrientations;
-(void)pu_setAlwaysForwardsPreferredStatusBarStyle:(BOOL)arg1 ;
-(PUAbstractNavigationBanner *)_banner;
-(BOOL)pu_preventsAutorotation;
-(BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)pu_setAlwaysForwardsPreferredStatusBarHidden:(BOOL)arg1 ;
-(UIViewController *)_currentToolbarViewController;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)pu_alwaysForwardsPrefersStatusBarHidden;
-(void)pu_setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(long long)_barStyle;
-(BOOL)shouldAutorotate;
-(void)_updateBarStyle;
-(BOOL)pu_alwaysForwardsPreferredStatusBarStyle;
-(BOOL)_canShowWhileLocked;
-(void)_commonPUNavigationControllerInitialization;
-(id)ppt_onDidShowViewControllerBlock;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setCurrentToolbarViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)_setBanner:(id)arg1 ;
-(void)_setBarStyle:(long long)arg1 ;
-(_UINavigationControllerPalette *)_palette;
-(id)childViewControllerForStatusBarHidden;
-(void)ppt_setOnDidShowViewControllerBlock:(/*^block*/id)arg1 ;
-(void)_updateStatusBarOverrides;
-(void)pu_setPreventsAutorotation:(BOOL)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(void)viewController:(id)arg1 willSetupInitialBarsVisibilityOnViewWillAppearAnimated:(BOOL)arg2 ;
-(id)_extendedToolbar;
-(void)pu_navigationTransitionDidEnd:(id)arg1 ;
-(void)_setCurrentToolbarViewController:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

