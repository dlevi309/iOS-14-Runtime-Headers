/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SUActivityItemProviderDelegate.h>

@class SUScriptFunction, NSString, SUActivityItemProvider, WebScriptObject;

@interface SUScriptActivityItemProvider : SUScriptObject <SUActivityItemProviderDelegate> {

	id _item;
	/*^block*/id _itemBlock;
	SUScriptFunction* _itemFunction;
	int _loadState;
	NSString* _mimeType;
	SUActivityItemProvider* _nativeProvider;
	int _previewLoadState;

}

@property (readonly) SUActivityItemProvider * nativeActivityItemProvider; 
@property (readonly) NSString * activityType; 
@property (retain) WebScriptObject * itemFunction; 
@property (readonly) NSString * MIMEType; 
@property (assign) double progress; 
@property (copy) NSString * status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)MIMEType;
-(double)progress;
-(NSString *)activityType;
-(id)attributeKeys;
-(void)setItem:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(id)_className;
-(NSString *)status;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(SUActivityItemProvider *)nativeActivityItemProvider;
-(id)_newPlaceholderWithMIMEType:(id)arg1 ;
-(void)_finishItemWithItem:(id)arg1 ;
-(void)_finishPreviewWithImage:(id)arg1 ;
-(id)activitySupportsMIMEType:(id)arg1 ;
-(void)setPreviewImageWithURLString:(id)arg1 ;
-(void)activityItemProvider:(id)arg1 provideItemUsingBlock:(/*^block*/id)arg2 ;
-(id)initWithMIMEType:(id)arg1 ;
-(WebScriptObject *)itemFunction;
-(void)setItemFunction:(WebScriptObject *)arg1 ;
@end

