/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKShutterButton.h>
#import <libobjc.A.dylib/CKActionMenuItemView.h>

@class NSString;

@interface CAMShutterButton : CMKShutterButton <CKActionMenuItemView>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long mode; 
+(id)actionMenuShutterButton;
+(id)shutterButtonWithSpec:(CAMShutterButtonSpec)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)mode;
-(void)setMode:(long long)arg1 animated:(BOOL)arg2 ;
@end

