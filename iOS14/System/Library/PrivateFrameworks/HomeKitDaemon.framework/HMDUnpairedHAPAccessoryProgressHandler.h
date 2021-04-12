/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDUnpairedHAPAccessoryProgressHandler : HMFObject {

	NSUUID* _accessoryUUID;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSUUID * accessoryUUID;              //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,copy) id progressHandler;                    //@synthesize progressHandler=_progressHandler - In the implementation block
-(NSUUID *)accessoryUUID;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(void)setAccessoryUUID:(NSUUID *)arg1 ;
-(id)initWithAccessoryUUID:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
@end

