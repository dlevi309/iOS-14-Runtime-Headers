/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol CNAutocompleteResultsTableViewControllerDelegate <NSObject>
@optional
-(void)autocompleteResultsController:(id)arg1 didAskToRemoveRecipient:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
-(id)autocompleteResultsController:(id)arg1 preferredRecipientForRecipients:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)autocompleteResultsController:(id)arg1 willOverrideImageDataForRecipient:(id)arg2 completion:(/*^block*/id)arg3;
-(void)autocompleteResultsController:(id)arg1 willExpandSelectedRecipient:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 didExpandSelectedRecipient:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 willCollapseSelectedRecipient:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 didCollapseSelectedRecipient:(id)arg2;

@end

