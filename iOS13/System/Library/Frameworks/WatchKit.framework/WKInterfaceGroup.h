/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>
#import <libobjc.A.dylib/WKImageAnimatable.h>

@class NSString;

@interface WKInterfaceGroup : WKInterfaceObject <WKImageAnimatable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackgroundImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)startAnimatingWithImagesInRange:(NSRange)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(void)setBackgroundImageData:(id)arg1 ;
-(void)setBackgroundImageNamed:(id)arg1 ;
@end

