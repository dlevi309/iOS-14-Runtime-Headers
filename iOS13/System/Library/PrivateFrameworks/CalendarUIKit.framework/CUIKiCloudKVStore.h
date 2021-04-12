/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@protocol NSObjectNSCopyingNSCoding;
@class NSDate;

@interface CUIKiCloudKVStore : NSObject {

	BOOL _hasConnectedToCarBluetooth;
	NSDate* _lastCarConnectionDate;
	id<NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;

}

@property (retain) id<NSObject><NSCopying><NSCoding> ubiquityIdentityToken;              //@synthesize ubiquityIdentityToken=_ubiquityIdentityToken - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedToCarBluetooth;                            //@synthesize hasConnectedToCarBluetooth=_hasConnectedToCarBluetooth - In the implementation block
@property (nonatomic,retain) NSDate * lastCarConnectionDate;                             //@synthesize lastCarConnectionDate=_lastCarConnectionDate - In the implementation block
+(BOOL)_haveiCloudKVStoreEntitlement;
+(id)sharediCloudKVStore;
-(id)init;
-(void)dealloc;
-(id<NSObject><NSCopying><NSCoding>)ubiquityIdentityToken;
-(void)_storeDidChange:(id)arg1 ;
-(void)_identityChanged:(id)arg1 ;
-(void)setUbiquityIdentityToken:(id<NSObject><NSCopying><NSCoding>)arg1 ;
-(BOOL)_canAccessiCloudKVStore;
-(void)setHasConnectedToCarBluetooth:(BOOL)arg1 ;
-(void)setLastCarConnectionDate:(NSDate *)arg1 ;
-(BOOL)hasConnectedToCarBluetooth;
-(NSDate *)lastCarConnectionDate;
@end

