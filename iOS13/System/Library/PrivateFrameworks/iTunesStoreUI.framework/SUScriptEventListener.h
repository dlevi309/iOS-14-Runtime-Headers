/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class WebScriptObject, NSLock, NSString;

@interface SUScriptEventListener : NSObject {

	WebScriptObject* _callback;
	NSLock* _lock;
	NSString* _name;
	BOOL _useCapture;

}

@property (retain) WebScriptObject * callback;              //@synthesize callback=_callback - In the implementation block
@property (copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign) BOOL shouldUseCapture;                   //@synthesize useCapture=_useCapture - In the implementation block
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(WebScriptObject *)callback;
-(void)setCallback:(WebScriptObject *)arg1 ;
-(void)setShouldUseCapture:(BOOL)arg1 ;
-(BOOL)shouldUseCapture;
@end

