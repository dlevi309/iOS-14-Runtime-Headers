/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UICollectionViewController.h>

@protocol HFIconDescriptor, HUIconPickerViewControllerDelegate;
@class NSArray;

@interface HUIconPickerViewController : UICollectionViewController {

	NSArray* _iconDescriptors;
	id<HFIconDescriptor> _selectedIconDescriptor;
	id<HUIconPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) id<HFIconDescriptor> selectedIconDescriptor;                         //@synthesize selectedIconDescriptor=_selectedIconDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * iconDescriptors;                                         //@synthesize iconDescriptors=_iconDescriptors - In the implementation block
@property (assign,nonatomic,__weak) id<HUIconPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sceneIconDescriptors;
-(id<HUIconPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUIconPickerViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(NSArray *)iconDescriptors;
-(id)initWithIconDescriptors:(id)arg1 selectedIconDescriptor:(id)arg2 delegate:(id)arg3 ;
-(id<HFIconDescriptor>)selectedIconDescriptor;
-(void)setSelectedIconDescriptor:(id<HFIconDescriptor>)arg1 ;
@end

