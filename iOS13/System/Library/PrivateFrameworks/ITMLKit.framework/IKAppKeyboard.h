/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKAppKeyboardBridge.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppKeyboardDelegate;
@class NSString, IKAppContext, IKJSKeyboard;

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature> {

	NSString* _jsText;
	NSString* _jsSource;
	NSString* _featureName;
	IKAppContext* _appContext;
	id<IKAppKeyboardDelegate> _delegate;
	NSString* _text;
	IKJSKeyboard* _jsKeyboard;
	NSString* _source;

}

@property (assign,setter=setJSKeyboard:,nonatomic,__weak) IKJSKeyboard * jsKeyboard;              //@synthesize jsKeyboard=_jsKeyboard - In the implementation block
@property (setter=_setSource:,getter=_source,nonatomic,copy) NSString * source;                   //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppKeyboardDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                       //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=setJSText:,nonatomic,copy) NSString * jsText;                                   //@synthesize jsText=_jsText - In the implementation block
@property (setter=setJSSource:,nonatomic,copy) NSString * jsSource;                               //@synthesize jsSource=_jsSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                                       //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                                  //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(id<IKAppKeyboardDelegate>)delegate;
-(void)setDelegate:(id<IKAppKeyboardDelegate>)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)_source;
-(void)_setSource:(id)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)setJSText:(id)arg1 ;
-(NSString *)jsText;
-(NSString *)jsSource;
-(void)setJSKeyboard:(id)arg1 ;
-(IKJSKeyboard *)jsKeyboard;
-(void)setJSSource:(id)arg1 ;
@end

