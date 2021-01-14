/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>
#import <libobjc.A.dylib/AVTResourceCache.h>

@protocol OS_dispatch_queue, AVTUILogger;
@class NSCache, NSMutableArray, NSObject, NSString;

@interface AVTInMemoryResourceCache : NSObject <NSCacheDelegate, AVTResourceCache> {

	NSCache* _storage;
	NSMutableArray* _orderedEntries;
	NSObject*<OS_dispatch_queue> _storageLock;
	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) NSCache * storage;                                     //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSMutableArray * orderedEntries;                       //@synthesize orderedEntries=_orderedEntries - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> storageLock;              //@synthesize storageLock=_storageLock - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyForItem:(id)arg1 scope:(id)arg2 ;
+(unsigned long long)costForItem:(id)arg1 scope:(id)arg2 ;
-(NSCache *)storage;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)clearCache;
-(NSObject*<OS_dispatch_queue>)storageLock;
-(void)performStorageWork:(/*^block*/id)arg1 ;
-(id)_resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(id)observeChangesForItem:(id)arg1 key:(id)arg2 ;
-(void)nts_evictObjectsToFreeUpCost:(unsigned long long)arg1 ;
-(NSMutableArray *)orderedEntries;
-(void)handleChangeForItemForKey:(id)arg1 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 ;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(BOOL)resourceExistsInCacheForItem:(id)arg1 scope:(id)arg2 ;
-(void)evictResourceFromCache:(id)arg1 scope:(id)arg2 ;
-(id)initWithLockProvider:(/*^block*/id)arg1 totalCostLimit:(unsigned long long)arg2 logger:(id)arg3 ;
-(id<AVTUILogger>)logger;
-(void)dealloc;
@end

