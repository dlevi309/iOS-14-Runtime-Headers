/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIItemRequestDelegate.h>

@protocol SKUIMissingItemDelegate;
@class NSString, SKUIResourceLoader, NSMutableDictionary;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate> {

	long long _batchSize;
	id<SKUIMissingItemDelegate> _delegate;
	NSString* _imageProfile;
	NSString* _keyProfile;
	SKUIResourceLoader* _loader;
	NSMutableDictionary* _requests;

}

@property (assign,nonatomic) long long batchSize;                                      //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSString * imageProfile;                                    //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,copy) NSString * keyProfile;                                      //@synthesize keyProfile=_keyProfile - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIMissingItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)imageProfile;
-(void)setBatchSize:(long long)arg1 ;
-(long long)batchSize;
-(NSString *)keyProfile;
-(void)setKeyProfile:(NSString *)arg1 ;
-(id)init;
-(id<SKUIMissingItemDelegate>)delegate;
-(void)setDelegate:(id<SKUIMissingItemDelegate>)arg1 ;
-(void)setImageProfile:(NSString *)arg1 ;
-(void)loadItemsForPageComponent:(id)arg1 startIndex:(long long)arg2 reason:(long long)arg3 ;
-(id)initWithResourceLoader:(id)arg1 ;
-(void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)loadItemsWithIdentifiers:(id)arg1 reason:(long long)arg2 ;
-(id)_existingRequestIDForItemID:(id)arg1 ;
-(void)_requestItems:(id)arg1 withReason:(long long)arg2 ;
@end

