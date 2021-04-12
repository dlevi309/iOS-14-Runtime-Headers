/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSMutableArray, NSString, UISegmentedControl, NSArray;

@interface HUMultiStateControlView : UIView <HUControlView> {

	NSMutableArray* _possibleValues;
	id<HUControlViewDelegate> _delegate;
	NSString* _identifier;
	UISegmentedControl* _segmentedControl;

}

@property (nonatomic,readonly) UISegmentedControl * segmentedControl;                //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,readonly) NSArray * possibleValues;                             //@synthesize possibleValues=_possibleValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
+(Class)valueClass;
-(id<HUControlViewDelegate>)delegate;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(NSString *)identifier;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isDisabled;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(NSArray *)possibleValues;
-(void)_selectedIndexChanged:(id)arg1 ;
-(void)addPossibleValue:(id)arg1 withTitle:(id)arg2 ;
-(void)addPossibleValue:(id)arg1 withImage:(id)arg2 ;
@end

