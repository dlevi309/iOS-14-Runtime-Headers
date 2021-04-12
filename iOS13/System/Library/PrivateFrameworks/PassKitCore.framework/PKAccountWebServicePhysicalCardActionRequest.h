/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <libobjc.A.dylib/PKAccountWebServiceApplePayTrustProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, PKApplePayTrustHashResponse, NSData, NSString, PKPhysicalCardAction, PKPaymentDeviceMetadata;

@interface PKAccountWebServicePhysicalCardActionRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol, NSSecureCoding> {

	NSURL* baseURL;
	PKApplePayTrustHashResponse* hashResponse;
	NSData* _publicKeyHash;
	NSString* _accountIdentifier;
	NSString* _physicalCardIdentifier;
	PKPhysicalCardAction* _action;
	PKPaymentDeviceMetadata* _deviceMetadata;

}

@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * physicalCardIdentifier;                         //@synthesize physicalCardIdentifier=_physicalCardIdentifier - In the implementation block
@property (nonatomic,retain) PKPhysicalCardAction * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) PKPaymentDeviceMetadata * deviceMetadata;                //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash;                                    //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(PKPhysicalCardAction *)action;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setAction:(PKPhysicalCardAction *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(PKPaymentDeviceMetadata *)deviceMetadata;
-(void)setDeviceMetadata:(PKPaymentDeviceMetadata *)arg1 ;
-(id)manifestHashWithReferenceIdentifier:(id)arg1 ;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setHashResponse:(PKApplePayTrustHashResponse *)arg1 ;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(NSString *)physicalCardIdentifier;
-(void)setPhysicalCardIdentifier:(NSString *)arg1 ;
@end

