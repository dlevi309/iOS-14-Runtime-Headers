/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <DigitalAccess/DASession.h>
#import <libobjc.A.dylib/KmlSessionCallbacks.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DAKeyBindingAttestationUpdate.h>

@class NSString;

@interface DAKeySharingSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyBindingAttestationUpdate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)cancelSharingInvitation:(id)arg1 ;
-(void)didEnd:(id)arg1 ;
-(void)sendSharingInvitationForKeyIdentifier:(id)arg1 toIdsIdentifier:(id)arg2 auth:(id)arg3 config:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)sendSilentSharingInvitationWithKeyIdentifier:(id)arg1 config:(id)arg2 groupIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)acceptSharingInvitationWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestBindingAttestationDataForKeyWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setBindingAttestation:(id)arg1 forKeyWithIdentifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)requestInviteWithConfig:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didStart:(BOOL)arg1 ;
-(void)authorizeSharingInvitationIdentifier:(id)arg1 auth:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startKeyExchangeWithInvitationIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendSharingInvitationForKeyIdentifier:(id)arg1 permissions:(id)arg2 toIdsIdentifier:(id)arg3 keyDisplayName:(id)arg4 metaData:(id)arg5 auth:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
@end

