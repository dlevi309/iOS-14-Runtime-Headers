/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface TPRingView : UIView {

	CALayer* _luminanceRingLayer;
	CALayer* _dodgeRingLayer;
	CALayer* _highlightDodgeLayer;
	CALayer* _highlightLuminanceLayer;
	CALayer* _selectionLayer;

}

@property (retain) CALayer * luminanceRingLayer;                   //@synthesize luminanceRingLayer=_luminanceRingLayer - In the implementation block
@property (retain) CALayer * dodgeRingLayer;                       //@synthesize dodgeRingLayer=_dodgeRingLayer - In the implementation block
@property (retain) CALayer * highlightDodgeLayer;                  //@synthesize highlightDodgeLayer=_highlightDodgeLayer - In the implementation block
@property (retain) CALayer * highlightLuminanceLayer;              //@synthesize highlightLuminanceLayer=_highlightLuminanceLayer - In the implementation block
@property (retain) CALayer * selectionLayer;                       //@synthesize selectionLayer=_selectionLayer - In the implementation block
+(CGSize)ringSize;
+(double)ringStroke;
+(id)colorForLuminance;
+(id)createRingImageWithSize:(CGSize)arg1 strokeWidth:(double)arg2 color:(id)arg3 ;
+(id)colorForDodge;
+(double)ringCornerRadius;
+(id)ringImageForLuminance;
+(id)ringImageForDodge;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CALayer *)selectionLayer;
-(void)setSelectionLayer:(CALayer *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CALayer *)luminanceRingLayer;
-(void)setLuminanceRingLayer:(CALayer *)arg1 ;
-(CALayer *)dodgeRingLayer;
-(void)setDodgeRingLayer:(CALayer *)arg1 ;
-(CALayer *)highlightDodgeLayer;
-(void)setHighlightDodgeLayer:(CALayer *)arg1 ;
-(CALayer *)highlightLuminanceLayer;
-(void)setHighlightLuminanceLayer:(CALayer *)arg1 ;
@end

