/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPCollectionDataSource.h>
#import <libobjc.A.dylib/FPItemCollectionItemIDBasedDelegate.h>

@protocol FPCollectionDataSourceDelegate;
@class NSArray, NSString;

@interface _FPUnionDataSource : NSObject <FPCollectionDataSource, FPItemCollectionItemIDBasedDelegate> {

	NSArray* _collections;
	BOOL _isRunning;
	id<FPCollectionDataSourceDelegate> delegate;

}

@property (nonatomic,readonly) BOOL hasMoreIncoming; 
@property (assign,nonatomic,__weak) id<FPCollectionDataSourceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FPCollectionDataSourceDelegate>)delegate;
-(void)start;
-(void)setDelegate:(id<FPCollectionDataSourceDelegate>)arg1 ;
-(BOOL)hasMoreIncoming;
-(void)enumerationMightHaveResumed;
-(id)initWithCollections:(id)arg1 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg1 ;
-(void)collection:(id)arg1 didEncounterError:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateObservedItem:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4 ;
-(void)invalidate;
@end

