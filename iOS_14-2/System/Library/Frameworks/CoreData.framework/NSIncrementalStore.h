/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStore.h>

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore {

	NSDictionary* _storeMetadata;
	unsigned long long _lastIdentifier;
	void* _reserveda;
	void* _reservedb;

}
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(id)identifierForNewStoreAtURL:(id)arg1 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)loadMetadata:(id*)arg1 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)load:(id*)arg1 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)_preflightCrossCheck;
-(void)_setMetadata:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(void)setMetadata:(id)arg1 ;
-(id)newObjectIDForEntity:(id)arg1 referenceObject:(id)arg2 ;
-(id)referenceObjectForObjectID:(id)arg1 ;
-(id)metadata;
-(id)_rawMetadata__;
-(void)dealloc;
@end

