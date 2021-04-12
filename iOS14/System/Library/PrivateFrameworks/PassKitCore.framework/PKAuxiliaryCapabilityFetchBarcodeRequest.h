/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAuxiliaryCapabilityWebServiceRequest.h>

@class NSString, NSArray, PKPaymentPass;

@interface PKAuxiliaryCapabilityFetchBarcodeRequest : PKAuxiliaryCapabilityWebServiceRequest {

	NSString* _dpanIdentifier;
	long long _barcodeCount;
	NSString* _lastUsedBarcodeIdentifier;
	NSArray* _encryptionCertificateChain;
	long long _fetchReason;
	PKPaymentPass* _pass;

}

@property (nonatomic,copy) NSString * dpanIdentifier;                         //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
@property (assign,nonatomic) long long barcodeCount;                          //@synthesize barcodeCount=_barcodeCount - In the implementation block
@property (nonatomic,copy) NSString * lastUsedBarcodeIdentifier;              //@synthesize lastUsedBarcodeIdentifier=_lastUsedBarcodeIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * encryptionCertificateChain;              //@synthesize encryptionCertificateChain=_encryptionCertificateChain - In the implementation block
@property (assign,nonatomic) long long fetchReason;                           //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                            //@synthesize pass=_pass - In the implementation block
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(/*^block*/id)arg5 ;
-(PKPaymentPass *)pass;
-(long long)fetchReason;
-(long long)barcodeCount;
-(NSString *)dpanIdentifier;
-(void)setDpanIdentifier:(NSString *)arg1 ;
-(void)setBarcodeCount:(long long)arg1 ;
-(NSString *)lastUsedBarcodeIdentifier;
-(void)setFetchReason:(long long)arg1 ;
-(void)setLastUsedBarcodeIdentifier:(NSString *)arg1 ;
-(NSArray *)encryptionCertificateChain;
-(void)setEncryptionCertificateChain:(NSArray *)arg1 ;
@end

