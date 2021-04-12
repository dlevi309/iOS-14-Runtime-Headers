/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface SUMediaLibraryAdamIDCache : NSObject {

	NSMutableSet* _adamIDs;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isPopulated;

}
+(id)sharedCache;
-(id)init;
-(void)dealloc;
-(void)_populateCache;
-(void)getContainsAdamID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getIntersectionWithSet:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)populateCache;
@end

