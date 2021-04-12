/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSRestrictions.h>

@protocol SKUIJSRestrictions <JSExport>
@required
-(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1;
-(void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1;
-(void)isRestrictionsPasscodeSet:(id)arg1;
-(void)setAllowExplicitContent;
-(void)didDisplayExplicitRestrictionAlertOfType:(id)arg1;
-(BOOL)isRestrictedApp:(id)arg1;
-(void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1 :(id)arg2;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1 :(id)arg2;

@end


@class SKUIClientContext;

@interface SKUIJSRestrictions : IKJSObject <SKUIJSRestrictions> {

	SKUIClientContext* _clientContext;

}
-(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1 ;
-(void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1 ;
-(void)isRestrictionsPasscodeSet:(id)arg1 ;
-(void)setAllowExplicitContent;
-(void)didDisplayExplicitRestrictionAlertOfType:(id)arg1 ;
-(long long)_explicitRestrictionAlertTypeForTypeString:(id)arg1 ;
-(BOOL)isRestrictedApp:(id)arg1 ;
-(void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1 :(id)arg2 ;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1 :(id)arg2 ;
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 ;
@end

