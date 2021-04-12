/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSHashTable, NSRecursiveLock;

@interface AVObjectRegistry : NSObject {

	NSHashTable* _registeredObjects;
	NSRecursiveLock* _lock;

}
+(id)defaultObjectRegistry;
-(void)registerObjectForSafeRetain:(id)arg1 ;
-(id)init;
-(void)safePostDelayedNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4 ;
-(void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
-(BOOL)safeRetainObject:(id)arg1 ;
-(void)safePostNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4 ;
-(void)safePostDelayedNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)registerObject:(id)arg1 ;
-(void)safePerformOnThread:(id)arg1 target:(id)arg2 selector:(SEL)arg3 object:(id)arg4 ;
-(void)safePerformTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
-(void)safePostNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)unregisterObject:(id)arg1 ;
-(void)safeInvokeWithDescription:(id)arg1 ;
-(void)safeInvokeWithDescriptionDelayed:(id)arg1 ;
-(void)dealloc;
@end

