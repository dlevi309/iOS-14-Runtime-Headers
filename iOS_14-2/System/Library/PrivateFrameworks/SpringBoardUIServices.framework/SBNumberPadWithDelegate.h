/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPad.h>

@protocol SBNumberPadDelegate;
@interface SBNumberPadWithDelegate : TPNumberPad {

	id<SBNumberPadDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBNumberPadDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)buttonDown:(id)arg1 ;
-(id)buttonForPoint:(CGPoint)arg1 forEvent:(id)arg2 ;
-(BOOL)touchAtPoint:(CGPoint)arg1 isCloseToButton:(id)arg2 ;
-(void)buttonUp:(id)arg1 ;
-(void)buttonCancelled:(id)arg1 ;
-(void)setDelegate:(id<SBNumberPadDelegate>)arg1 ;
@end

