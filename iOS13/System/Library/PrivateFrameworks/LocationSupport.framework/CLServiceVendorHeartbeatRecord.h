/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@class CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject {

	int _synCount;
	int _ackCount;
	int _residentCount;
	CLSilo* _silo;
	Class _svcClass;

}

@property (nonatomic,readonly) CLSilo * silo;                //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) Class svcClass;               //@synthesize svcClass=_svcClass - In the implementation block
@property (assign,nonatomic) int residentCount;              //@synthesize residentCount=_residentCount - In the implementation block
@property (nonatomic,readonly) int synCount;                 //@synthesize synCount=_synCount - In the implementation block
@property (nonatomic,readonly) int ackCount;                 //@synthesize ackCount=_ackCount - In the implementation block
-(CLSilo *)silo;
-(id)initTrackingServiceClass:(Class)arg1 ;
-(void)syn;
-(void)ack;
-(Class)svcClass;
-(int)residentCount;
-(void)setResidentCount:(int)arg1 ;
-(int)synCount;
-(int)ackCount;
@end

