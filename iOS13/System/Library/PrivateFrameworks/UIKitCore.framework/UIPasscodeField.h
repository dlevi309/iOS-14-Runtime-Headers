/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableString, NSMutableArray, UIButton, NSString;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {

	NSMutableString* _value;
	NSMutableArray* _entryFields;
	NSMutableArray* _entryBackgrounds;
	UIButton* _okButton;
	BOOL _opaqueBackground;
	BOOL _centerHorizontally;
	long long _keyboardType;
	long long _keyboardAppearance;
	int _emptyContentReturnKeyType;
	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
+(Class)textFieldClass;
-(void)dealloc;
-(void)appendString:(id)arg1 ;
-(id)stringValue;
-(void)setDelegate:(id)arg1 ;
-(void)setStringValue:(id)arg1 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)_textDidChange;
-(int)numberOfEntryFields;
-(void)setNumberOfEntryFields:(int)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(BOOL)textFieldShouldStartEditing:(id)arg1 ;
-(void)setTextCentersHorizontally:(BOOL)arg1 ;
-(void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 ;
-(void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 emptyContentReturnKeyType:(int)arg3 ;
-(void)okButtonClicked:(id)arg1 ;
-(void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(BOOL)arg2 ;
-(void)_updateFields;
-(BOOL)showsOKButton;
-(void)setShowsOKButton:(BOOL)arg1 ;
-(void)deleteLastCharacter;
-(BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
@end

