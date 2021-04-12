/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString, PFUbiquityLocation, NSPersistentStore, NSPersistentStoreCoordinator, NSMutableDictionary, NSRecursiveLock, NSMutableArray, PFUbiquityKnowledgeVector, PFUbiquityGlobalObjectIDCache, NSArray;

@interface PFUbiquityTransactionHistoryCache : NSObject {

	NSString* _localPeerID;
	PFUbiquityLocation* _rootLocation;
	NSString* _storeName;
	NSPersistentStore* _privateStore;
	NSPersistentStoreCoordinator* _privatePSC;
	NSMutableDictionary* _peerIDToHistoryArray;
	NSMutableDictionary* _globalIDToHistoryArray;
	NSRecursiveLock* _peerIDToHistoryArrayLock;
	NSMutableArray* _entriesToWrite;
	PFUbiquityKnowledgeVector* _cacheKV;
	PFUbiquityKnowledgeVector* _minCacheKV;
	PFUbiquityGlobalObjectIDCache* _globalIDCache;
	BOOL _hasScheduledWriteBlock;

}

@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                //@synthesize rootLocation=_rootLocation - In the implementation block
@property (nonatomic,retain) PFUbiquityGlobalObjectIDCache * globalIDCache;              //@synthesize globalIDCache=_globalIDCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * cacheKV;                      //@synthesize cacheKV=_cacheKV - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * minCacheKV;                   //@synthesize minCacheKV=_minCacheKV - In the implementation block
@property (nonatomic,readonly) NSArray * cachedGlobalIDs; 
-(id)init;
-(void)dealloc;
-(id)description;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(BOOL)cacheTransactionHistory:(id*)arg1 ;
-(PFUbiquityKnowledgeVector *)cacheKV;
-(PFUbiquityKnowledgeVector *)minCacheKV;
-(BOOL)purgeCacheAndWritePendingEntries:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)writePendingEntries:(id*)arg1 ;
-(id)cachedTransactionHistoryForGlobalID:(id)arg1 ;
-(BOOL)addTransactionEntryLight:(id)arg1 needsWrite:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)addTransactionEntryLights:(id)arg1 error:(id*)arg2 ;
-(PFUbiquityGlobalObjectIDCache *)globalIDCache;
-(id)describeCaches;
-(id)describeCachesVerbose;
-(BOOL)addTransactionEntry:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 privateStore:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(NSArray *)cachedGlobalIDs;
-(void)setGlobalIDCache:(PFUbiquityGlobalObjectIDCache *)arg1 ;
@end

