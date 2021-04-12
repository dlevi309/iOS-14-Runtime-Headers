/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface HMDCameraStreamTracker : HMFObject <HMFLogging> {

	NSMutableSet* _currentStreamIdentifiers;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSMutableSet * currentStreamIdentifiers;               //@synthesize currentStreamIdentifiers=_currentStreamIdentifiers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedTracker;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)startStream:(id)arg1 ;
-(void)endStream:(id)arg1 ;
-(NSMutableSet *)currentStreamIdentifiers;
-(void)setCurrentStreamIdentifiers:(NSMutableSet *)arg1 ;
@end

