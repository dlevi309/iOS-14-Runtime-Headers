/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIView, UIImageView, UIColor, UILabel, NSString;

@interface SKUICountdownFlapView : UIImageView {

	UIView* _backgroundViewBot;
	UIView* _backgroundViewTop;
	UIImageView* _backgroundViewTransitionBot;
	UIImageView* _backgroundViewTransitionTop;
	double _factor;
	UIColor* _flapTopColor;
	UIColor* _flapBottomColor;
	UILabel* _labelBot;
	UILabel* _labelTop;
	UILabel* _labelTransitionBot;
	UILabel* _labelTransitionTop;
	long long _position;
	NSString* _string;
	UIColor* _textColor;

}

@property (nonatomic,readonly) long long position;                     //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) UIColor * flapTopColor;                 //@synthesize flapTopColor=_flapTopColor - In the implementation block
@property (nonatomic,readonly) UIColor * flapBottomColor;              //@synthesize flapBottomColor=_flapBottomColor - In the implementation block
@property (nonatomic,retain) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
-(long long)position;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIColor *)textColor;
-(id)_newLabel;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(UIColor *)flapTopColor;
-(UIColor *)flapBottomColor;
-(id)initWithPosition:(long long)arg1 flapTopColor:(id)arg2 flapBottomColor:(id)arg3 ;
-(id)_newBackgroundImageForTop:(int)arg1 ;
-(CATransform3D)_transformForAngle:(double)arg1 isTop:(BOOL)arg2 ;
@end

