/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface SiriUIKeyline : UIView {

	UIView* _keyLineView;
	BOOL _veritical;
	long long _keylineType;
	double _customLeftPadding;
	double _customRightPadding;
	UIColor* _customBackgroundColor;

}

@property (assign,setter=_setVertical:,getter=_isVeritical,nonatomic) BOOL veritical;              //@synthesize veritical=_veritical - In the implementation block
@property (assign,nonatomic) long long keylineType;                                                //@synthesize keylineType=_keylineType - In the implementation block
@property (assign,nonatomic) double customLeftPadding;                                             //@synthesize customLeftPadding=_customLeftPadding - In the implementation block
@property (assign,nonatomic) double customRightPadding;                                            //@synthesize customRightPadding=_customRightPadding - In the implementation block
@property (nonatomic,retain) UIColor * customBackgroundColor;                                      //@synthesize customBackgroundColor=_customBackgroundColor - In the implementation block
+(id)keyline;
+(id)keylineWithKeylineType:(long long)arg1 ;
+(id)verticalKeyline;
+(id)keylineWithKeylineType:(long long)arg1 platterStyling:(BOOL)arg2 ;
+(id)keylineWithDefaultInsets;
+(id)keylineForSelectableRow;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)customBackgroundColor;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setKeylineType:(long long)arg1 ;
-(long long)keylineType;
-(id)initWithKeylineType:(long long)arg1 ;
-(id)initWithKeylineType:(long long)arg1 platterStyling:(BOOL)arg2 ;
-(id)_keylineColorForType:(long long)arg1 platterStyling:(BOOL)arg2 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 useAutolayout:(BOOL)arg2 ;
-(double)_keylineThicknessForType:(long long)arg1 ;
-(double)customLeftPadding;
-(double)customRightPadding;
-(void)setCustomLeftPadding:(double)arg1 ;
-(void)setCustomRightPadding:(double)arg1 ;
-(BOOL)_isVeritical;
-(void)_setVertical:(BOOL)arg1 ;
@end

