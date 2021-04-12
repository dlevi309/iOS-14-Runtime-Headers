/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaAccessory.h>
#import <libobjc.A.dylib/HMDAccessoryMinimumUserPrivilegeCapable.h>
#import <libobjc.A.dylib/HMDDevicePreferenceDataSource.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDAccessoryDisassociation.h>
#import <libobjc.A.dylib/HMDAccessoryUserManagement.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFPairingIdentity, NSString, HMFExponentialBackoffTimer;

@interface HMDAirPlayAccessory : HMDMediaAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HMDDevicePreferenceDataSource, HMFTimerDelegate, HMDAccessoryDisassociation, HMDAccessoryUserManagement, HMFLogging> {

	HMFPairingIdentity* _pairingIdentity;
	NSString* _password;
	long long _minimumUserPriviledge;
	HMFExponentialBackoffTimer* _configurationRetryTimer;

}

@property (nonatomic,readonly) HMFExponentialBackoffTimer * configurationRetryTimer;              //@synthesize configurationRetryTimer=_configurationRetryTimer - In the implementation block
@property (copy,readonly) NSString * password;                                                    //@synthesize password=_password - In the implementation block
@property (readonly) long long minimumUserPriviledge;                                             //@synthesize minimumUserPriviledge=_minimumUserPriviledge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL supportsDisassociation; 
@property (readonly) BOOL supportsUserManagement; 
@property (copy,readonly) HMFPairingIdentity * pairingIdentity;                                   //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(HMFPairingIdentity *)pairingIdentity;
-(void)setReachable:(BOOL)arg1 ;
-(id)advertisement;
-(void)setAdvertisement:(id)arg1 ;
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(BOOL)supportsDeviceWithCapabilities:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(void)disassociateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)supportsDisassociation;
-(BOOL)supportsUserManagement;
-(BOOL)supportsMinimumUserPrivilege;
-(void)handleUpdatedMinimumUserPrivilege:(long long)arg1 ;
-(void)handleUpdatedPassword:(id)arg1 ;
-(void)addUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleUpdatedName:(id)arg1 ;
-(void)populateModelObject:(id)arg1 version:(long long)arg2 ;
-(void)handleUpdatedAdvertisement:(id)arg1 ;
-(HMFExponentialBackoffTimer *)configurationRetryTimer;
-(long long)minimumUserPriviledge;
-(void)setMinimumUserPriviledge:(long long)arg1 ;
-(void)disassociateUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

