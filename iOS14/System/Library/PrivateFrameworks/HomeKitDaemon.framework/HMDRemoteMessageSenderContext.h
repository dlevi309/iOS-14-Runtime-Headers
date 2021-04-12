/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDDeviceHandle, HMDAccountIdentifier, HMDAccountHandle, HMDHomeKitVersion, NSString, NSArray;

@interface HMDRemoteMessageSenderContext : HMFObject <HMFObject, NSCopying> {

	HMDDeviceHandle* _deviceHandle;
	HMDAccountIdentifier* _accountIdentifier;
	HMDAccountHandle* _accountHandle;
	HMDHomeKitVersion* _deviceVersion;

}

@property (copy,readonly) HMDDeviceHandle * deviceHandle;                         //@synthesize deviceHandle=_deviceHandle - In the implementation block
@property (copy,readonly) HMDAccountIdentifier * accountIdentifier;               //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (copy,readonly) HMDAccountHandle * accountHandle;                       //@synthesize accountHandle=_accountHandle - In the implementation block
@property (copy,readonly) HMDHomeKitVersion * deviceVersion;                      //@synthesize deviceVersion=_deviceVersion - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMDHomeKitVersion *)deviceVersion;
-(HMDAccountIdentifier *)accountIdentifier;
-(NSString *)propertyDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDDeviceHandle *)deviceHandle;
-(HMDAccountHandle *)accountHandle;
-(id)initWithDeviceHandle:(id)arg1 accountHandle:(id)arg2 accountIdentifier:(id)arg3 deviceVersion:(id)arg4 ;
@end

