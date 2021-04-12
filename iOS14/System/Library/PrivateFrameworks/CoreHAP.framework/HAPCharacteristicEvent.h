/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, NSDate;

@interface HAPCharacteristicEvent : HMFObject {

	NSString* _serverIdentifier;
	NSNumber* _accessoryInstanceID;
	NSNumber* _serviceInstanceID;
	NSNumber* _characteristicInstanceID;
	id _value;
	NSDate* _updateTime;
	NSNumber* _stateNumber;

}

@property (nonatomic,copy,readonly) NSString * serverIdentifier;                      //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * accessoryInstanceID;                   //@synthesize accessoryInstanceID=_accessoryInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * serviceInstanceID;                     //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * characteristicInstanceID;              //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (nonatomic,copy,readonly) id value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * updateTime;                                   //@synthesize updateTime=_updateTime - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                                //@synthesize stateNumber=_stateNumber - In the implementation block
+(id)eventWithCharacteristic:(id)arg1 ;
-(NSDate *)updateTime;
-(NSString *)serverIdentifier;
-(id)init;
-(id)initWithCharacteristic:(id)arg1 ;
-(id)value;
-(NSNumber *)stateNumber;
-(NSNumber *)characteristicInstanceID;
-(NSNumber *)accessoryInstanceID;
-(NSNumber *)serviceInstanceID;
@end

