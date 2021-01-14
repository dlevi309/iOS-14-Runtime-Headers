/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPBTLECentralManagerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CUBLEAdvertiser, HMFTimer, HMDHAPAccessory, HAPBTLECentralManager, HMDAccessoryQueues, HMFUnfairLock, NSString, NSArray;

@interface HMDBTLEAdvertiser : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate> {

	NSObject*<OS_dispatch_queue> workQueue;
	CUBLEAdvertiser* leAdvertiser;
	HMFTimer* advertisementTimer;
	HMDHAPAccessory* accessory;
	HAPBTLECentralManager* centralManager;
	HMDAccessoryQueues* powerOnQueues;
	HMFUnfairLock* _lock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,retain) HMFUnfairLock * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) CUBLEAdvertiser * leAdvertiser; 
@property (nonatomic,retain) HMFTimer * advertisementTimer; 
@property (nonatomic,retain) HMDHAPAccessory * accessory; 
@property (nonatomic,retain) HAPBTLECentralManager * centralManager; 
@property (nonatomic,retain) HMDAccessoryQueues * powerOnQueues; 
@property (getter=isReady,readonly) BOOL isReady; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAdvertiser;
+(id)initializeAdvertiser;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)setCentralManager:(HAPBTLECentralManager *)arg1 ;
-(HMDHAPAccessory *)accessory;
-(HMFUnfairLock *)lock;
-(HAPBTLECentralManager *)centralManager;
-(void)setLock:(HMFUnfairLock *)arg1 ;
-(BOOL)isReady;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(void)powerOn:(id)arg1 ;
-(HMDAccessoryQueues *)powerOnQueues;
-(void)_completePendingPowerOnRequest:(id)arg1 ;
-(void)_flushQueue:(id)arg1 ;
-(void)stopAdvertisement:(id)arg1 ;
-(void)_flushQueues;
-(CUBLEAdvertiser *)leAdvertiser;
-(void)setLeAdvertiser:(CUBLEAdvertiser *)arg1 ;
-(void)_clearAdvertiser;
-(void)_stopAdvertisement:(id)arg1 ;
-(HMFTimer *)advertisementTimer;
-(void)setAdvertisementTimer:(HMFTimer *)arg1 ;
-(void)_startAdvertising;
-(void)_cancelOn:(id)arg1 ;
-(void)_advertisementTimeout;
-(void)didUpdateBTLEState:(long long)arg1 ;
-(void)cancelOn:(id)arg1 ;
-(BOOL)isAdvertisingForAccessory:(id)arg1 ;
-(void)setPowerOnQueues:(HMDAccessoryQueues *)arg1 ;
@end

