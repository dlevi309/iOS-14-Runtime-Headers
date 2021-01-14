/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, PKStackedTextItemGroup;

@interface PKStackedTextItemGroupView : UIView {

	double _intrinsicHeight;
	CGSize _boundsSize;
	BOOL _initialLayout[2];
	NSMutableArray* _itemViews;
	NSMutableArray* _snapshotsToRemove;
	BOOL _animated;
	long long _slideMode;
	long long _style;
	PKStackedTextItemGroup* _content;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) long long style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PKStackedTextItemGroup * content;              //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                     //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) double headerPadding; 
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(PKStackedTextItemGroup *)content;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContent:(PKStackedTextItemGroup *)arg1 ;
-(UIEdgeInsets)contentInset;
-(id)initWithStyle:(long long)arg1 ;
-(void)_updateSubviewsAnimated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)headerPadding;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
-(long long)style;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
@end

