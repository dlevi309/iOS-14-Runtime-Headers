/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

@class NSURL, NSOperationQueue, NSString;


@protocol NSFileProvider <NSObject>
@property (copy,readonly) NSURL * _providedItemsURL; 
@property (readonly) NSOperationQueue * _providedItemsOperationQueue; 
@property (copy,readonly) NSString * _fileReactorID; 
@optional
-(NSString *)_fileReactorID;
-(void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
-(id)_physicalURLForURL:(id)arg1;
-(void)_getPhysicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
-(void)_movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(NSURL *)_providedItemsURL;
-(NSOperationQueue *)_providedItemsOperationQueue;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

