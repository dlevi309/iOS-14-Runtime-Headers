/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(AWDNFCHCEVASSelectEvent *)metric;
-(void)setMetric:(AWDNFCHCEVASSelectEvent *)arg1 ;
-(void)setSwStatus:(unsigned)arg1 ;
-(unsigned)swStatus;
-(void)setMobileCapabilities:(unsigned)arg1 ;
-(unsigned)mobileCapabilities;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

