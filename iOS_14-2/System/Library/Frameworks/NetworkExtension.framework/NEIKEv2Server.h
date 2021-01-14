/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NSObject.h>

@protocol OS_dispatch_source;
@class NSString, NEIKEv2AddressList, NSArray, NSObject;

@interface NEIKEv2Server : NSObject <NSObject> {

	unsigned _redirects;
	NSString* _serverAddress;
	NEIKEv2AddressList* _resolvedAddressList;
	NSString* _redirectedFromAddress;
	NSArray* _additionalIPv4ServerAddresses;
	NSArray* _additionalIPv6ServerAddresses;
	NSObject*<OS_dispatch_source> _redirectTimer;

}

@property (assign) unsigned redirects;                                       //@synthesize redirects=_redirects - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> redirectTimer;              //@synthesize redirectTimer=_redirectTimer - In the implementation block
@property (retain) NSString * serverAddress;                                 //@synthesize serverAddress=_serverAddress - In the implementation block
@property (retain) NEIKEv2AddressList * resolvedAddressList;                 //@synthesize resolvedAddressList=_resolvedAddressList - In the implementation block
@property (retain) NSString * redirectedFromAddress;                         //@synthesize redirectedFromAddress=_redirectedFromAddress - In the implementation block
@property (retain) NSArray * additionalIPv4ServerAddresses;                  //@synthesize additionalIPv4ServerAddresses=_additionalIPv4ServerAddresses - In the implementation block
@property (retain) NSArray * additionalIPv6ServerAddresses;                  //@synthesize additionalIPv6ServerAddresses=_additionalIPv6ServerAddresses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serverAddress;
-(void)setServerAddress:(NSString *)arg1 ;
-(id)getViableServerAddressForPath:(id)arg1 ;
-(void)setServerResolvedAddress:(id)arg1 path:(id)arg2 ;
-(BOOL)startRedirectTimer;
-(BOOL)checkRedirectCount;
-(void)setRedirectedFromAddress:(NSString *)arg1 ;
-(void)setResolvedAddressList:(NEIKEv2AddressList *)arg1 ;
-(void)setAdditionalIPv4ServerAddresses:(NSArray *)arg1 ;
-(void)setAdditionalIPv6ServerAddresses:(NSArray *)arg1 ;
-(id)getNextViableServerAddressForPath:(id)arg1 ;
-(unsigned)redirects;
-(NEIKEv2AddressList *)resolvedAddressList;
-(void)stopRedirectTimer;
-(NSString *)redirectedFromAddress;
-(void)setRedirects:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_source>)redirectTimer;
-(NSArray *)additionalIPv4ServerAddresses;
-(NSArray *)additionalIPv6ServerAddresses;
-(void)setRedirectTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)dealloc;
@end

