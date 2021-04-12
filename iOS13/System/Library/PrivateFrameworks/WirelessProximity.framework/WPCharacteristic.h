/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface WPCharacteristic : NSObject <NSSecureCoding> {

	NSUUID* _uuid;
	unsigned long long _properties;
	unsigned long long _permissions;
	NSData* _data;
	long long _writeType;

}

@property (retain) NSUUID * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long properties;               //@synthesize properties=_properties - In the implementation block
@property (assign) unsigned long long permissions;              //@synthesize permissions=_permissions - In the implementation block
@property (retain) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (assign) long long writeType;                         //@synthesize writeType=_writeType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)properties;
-(void)setProperties:(unsigned long long)arg1 ;
-(unsigned long long)permissions;
-(void)setPermissions:(unsigned long long)arg1 ;
-(long long)writeType;
-(void)setWriteType:(long long)arg1 ;
@end

