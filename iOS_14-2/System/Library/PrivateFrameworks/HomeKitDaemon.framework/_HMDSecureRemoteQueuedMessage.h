/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMDRemoteMessage, HMFTimer, NSString, NSArray;

@interface _HMDSecureRemoteQueuedMessage : HMFObject <HMFObject> {

	HMDRemoteMessage* _message;
	HMFTimer* _timer;

}

@property (nonatomic,readonly) HMDRemoteMessage * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) HMFTimer * timer;                                  //@synthesize timer=_timer - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMDRemoteMessage *)message;
-(HMFTimer *)timer;
-(id)init;
-(NSString *)shortDescription;
-(id)initWithMessage:(id)arg1 ;
-(NSString *)propertyDescription;
@end

