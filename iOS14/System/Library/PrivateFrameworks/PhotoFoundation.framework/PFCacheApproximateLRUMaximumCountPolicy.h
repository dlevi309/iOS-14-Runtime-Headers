/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFCachePolicy.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface PFCacheApproximateLRUMaximumCountPolicy : PFCachePolicy {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _maximumCount;
	unsigned _seed;
	unsigned long long _tick;
	unsigned long long _tickMaximum;
	unsigned long long _considerationCount;
	id* _considerationKeys;

}
+(id)policyWithMaximumCount:(unsigned long long)arg1 ;
-(id)cacheEntryWithKey:(id)arg1 value:(id)arg2 ;
-(void)didAddCacheEntry:(id)arg1 ;
-(void)didRemoveCacheEntry:(id)arg1 ;
-(id)willAddOrReplaceEntry:(id)arg1 add:(BOOL)arg2 contents:(id)arg3 ;
-(void)didGetCacheEntry:(id)arg1 ;
-(unsigned long long)capacityHint;
-(void)didRemoveAllCacheEntries;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(void)_rebuildConsiderationKeys:(id)arg1 ;
-(id)description;
-(void)dealloc;
@end

