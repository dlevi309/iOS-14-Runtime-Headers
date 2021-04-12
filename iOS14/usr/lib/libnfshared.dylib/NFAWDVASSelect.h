/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCEVASSelectEvent, NSString;

@interface NFAWDVASSelect : NSObject <NFAWDEventProtocol> {

	unsigned _version;
	unsigned _mobileCapabilities;
	unsigned _swStatus;
	AWDNFCHCEVASSelectEvent* _metric;

}

@property (assign,nonatomic) unsigned version;                              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned mobileCapabilities;                   //@synthesize mobileCapabilities=_mobileCapabilities - In the implementation block
@property (assign,nonatomic) unsigned swStatus;                             //@synthesize swStatus=_swStatus - In the implementation block
@property (nonatomic,retain) AWDNFCHCEVASSelectEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCHCEVASSelectEvent *)metric;
-(id)getMetric;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCHCEVASSelectEvent *)arg1 ;
-(unsigned)version;
-(void)setSwStatus:(unsigned)arg1 ;
-(unsigned)swStatus;
-(void)setMobileCapabilities:(unsigned)arg1 ;
-(unsigned)mobileCapabilities;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

