/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBAttribute.h>

@class CBService, NSData, NSArray, CBPeripheral, NSNumber;

@interface CBCharacteristic : CBAttribute {

	BOOL _isBroadcasted;
	BOOL _isNotifying;
	CBService* _service;
	unsigned long long _properties;
	NSData* _value;
	NSArray* _descriptors;
	unsigned long long _valueTimestamp;
	CBPeripheral* _peripheral;
	NSNumber* _handle;
	NSNumber* _valueHandle;

}

@property (assign,nonatomic) CBService * service;                              //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                    //@synthesize properties=_properties - In the implementation block
@property (retain) NSData * value;                                             //@synthesize value=_value - In the implementation block
@property (retain) NSArray * descriptors;                                      //@synthesize descriptors=_descriptors - In the implementation block
@property (assign) BOOL isNotifying;                                           //@synthesize isNotifying=_isNotifying - In the implementation block
@property (nonatomic,readonly) unsigned long long valueTimestamp;              //@synthesize valueTimestamp=_valueTimestamp - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                      //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSNumber * valueHandle;                         //@synthesize valueHandle=_valueHandle - In the implementation block
@property (readonly) BOOL isBroadcasted;                                       //@synthesize isBroadcasted=_isBroadcasted - In the implementation block
-(void)setDescriptors:(NSArray *)arg1 ;
-(unsigned long long)properties;
-(NSArray *)descriptors;
-(NSNumber *)handle;
-(id)initWithService:(id)arg1 dictionary:(id)arg2 ;
-(void)setValue:(NSData *)arg1 ;
-(id)description;
-(void)setService:(CBService *)arg1 ;
-(void)setIsNotifying:(BOOL)arg1 ;
-(NSNumber *)valueHandle;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(id)handleValueBroadcasted:(id)arg1 ;
-(id)handleValueNotifying:(id)arg1 ;
-(id)handleDescriptorsDiscovered:(id)arg1 ;
-(BOOL)isBroadcasted;
-(BOOL)isNotifying;
-(unsigned long long)valueTimestamp;
-(CBPeripheral *)peripheral;
-(void)invalidate;
-(void)setProperties:(unsigned long long)arg1 ;
-(NSData *)value;
-(CBService *)service;
@end

