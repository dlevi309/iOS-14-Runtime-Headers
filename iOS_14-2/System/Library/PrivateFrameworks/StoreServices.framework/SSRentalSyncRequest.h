/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSNumber, NSString;

@interface SSRentalSyncRequest : SSRequest <SSXPCCoding> {

	NSArray* _sinfs;
	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;

}

@property (readonly) NSArray * sinfs;                               //@synthesize sinfs=_sinfs - In the implementation block
@property (readonly) NSNumber * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (readonly) NSNumber * rentalKeyIdentifier;                //@synthesize rentalKeyIdentifier=_rentalKeyIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)sinfs;
-(NSNumber *)accountIdentifier;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
@end

