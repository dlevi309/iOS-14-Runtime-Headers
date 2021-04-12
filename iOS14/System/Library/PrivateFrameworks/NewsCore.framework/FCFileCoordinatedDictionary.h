/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, FCAsyncSerialQueue, NSString;

@interface FCFileCoordinatedDictionary : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;
	NSURL* _fileURL;
	NSSet* _allowedClasses;
	NSOperationQueue* _accessQueue;
	FCAsyncSerialQueue* _accessSynchronizationQueue;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedClasses;                                  //@synthesize allowedClasses=_allowedClasses - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * accessQueue;                               //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * accessSynchronizationQueue;              //@synthesize accessSynchronizationQueue=_accessSynchronizationQueue - In the implementation block
@property (copy,readonly) NSURL * presentedItemURL;                                          //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;                  //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(NSSet *)allowedClasses;
-(id)init;
-(void)writeWithAccessor:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)fileURL;
-(NSOperationQueue *)accessQueue;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(FCAsyncSerialQueue *)accessSynchronizationQueue;
-(id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2 ;
@end

