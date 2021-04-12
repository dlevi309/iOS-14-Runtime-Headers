/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, NSObject, NSHashTable;

@interface PXPeopleSectionedDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {

	NSString* _localizedTitle;
	NSArray* _dataSources;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	id _pauseToken;
	NSHashTable* _changeObservers;

}

@property (nonatomic,copy,readonly) NSArray * dataSources;                                //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> reloadQueue;                  //@synthesize reloadQueue=_reloadQueue - In the implementation block
@property (nonatomic,retain) id pauseToken;                                               //@synthesize pauseToken=_pauseToken - In the implementation block
@property (nonatomic,retain) NSHashTable * changeObservers;                               //@synthesize changeObservers=_changeObservers - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                     //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) unsigned long long numberOfDisclosedSections; 
@property (nonatomic,readonly) unsigned long long totalPersonCount; 
@property (nonatomic,copy,readonly) NSArray * allPersons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSArray *)dataSources;
-(unsigned long long)_fetchTypeForPersonType:(long long)arg1 ;
-(NSString *)localizedTitle;
-(void)changePersonsAtIndexPaths:(id)arg1 toPersonType:(long long)arg2 ;
-(id)faceTileAtIndexPath:(id)arg1 ;
-(id)_dataSourceForIndexPath:(id)arg1 ;
-(void)addChangeObserver:(id)arg1 ;
-(void)reloadFromDatabase;
-(id)localizedDisclosedTitleForSection:(long long)arg1 ;
-(unsigned long long)numberOfSections;
-(id)titleAtIndexPath:(id)arg1 ;
-(void)resumeListeningForChanges;
-(id)indexPathOfPerson:(id)arg1 ;
-(unsigned long long)totalPersonCount;
-(NSArray *)allPersons;
-(BOOL)canReorderMembersInSection:(long long)arg1 ;
-(void)startListeningToLibraryNotifications;
-(void)removeChangeObserver:(id)arg1 ;
-(unsigned long long)numberOfDisclosedSections;
-(void)cancelImageLoadingForItem:(id)arg1 ;
-(void)addVisiblePerson:(id)arg1 ;
-(unsigned long long)numberOfPersonsWithStringName;
-(id)memberAtIndexPath:(id)arg1 ;
-(id)personAtIndexPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)reloadQueue;
-(unsigned long long)numberOfPersonsWithContactName;
-(unsigned long long)fetchTypeForSection:(long long)arg1 ;
-(void)setPauseToken:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(unsigned long long)photoQuantityAtIndexPath:(id)arg1 ;
-(id)pauseToken;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)removeVisiblePerson:(id)arg1 ;
-(id)localizedTitleForSection:(long long)arg1 ;
-(id)personsAtIndexPaths:(id)arg1 ;
-(unsigned long long)numberOfPersonsInSection:(long long)arg1 ;
-(void)stopListeningToLibraryNotifications;
-(void)setChangeObservers:(NSHashTable *)arg1 ;
-(void)pauseListeningForChangesWithTimeout:(double)arg1 ;
-(void)imageAtIndexPath:(id)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 fastDisplayBlock:(/*^block*/id)arg4 ;
-(id)personsForType:(long long)arg1 ;
-(id)_dataSourceForFetchType:(unsigned long long)arg1 ;
-(void)loadAndStartListeningToLibraryNotifications;
-(long long)_sectionForFetchType:(unsigned long long)arg1 ;
-(id)initWithSections:(id)arg1 ;
-(id)_dataSourceForSection:(long long)arg1 ;
-(void)movePersonAtIndexPath:(id)arg1 toIndexPath:(id)arg2 shouldUpdateImmediately:(BOOL)arg3 ;
-(NSHashTable *)changeObservers;
-(id)_generateChangeDetailsForChangeInstance:(id)arg1 ;
-(void)dealloc;
@end

