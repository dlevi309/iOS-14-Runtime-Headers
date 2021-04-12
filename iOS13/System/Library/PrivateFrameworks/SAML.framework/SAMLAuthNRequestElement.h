/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, SAMLNameIdPolicy, SAMLConditions, SAMLRequestedAuthNContext, SAMLScoping;

@interface SAMLAuthNRequestElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (assign,nonatomic) BOOL forceAuthN; 
@property (assign,nonatomic) BOOL isPassive; 
@property (nonatomic,retain) NSString * providerName; 
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,retain) SAMLNameIdPolicy * nameIdPolicy; 
@property (nonatomic,retain) SAMLConditions * conditions; 
@property (nonatomic,readonly) SAMLRequestedAuthNContext * context; 
@property (nonatomic,retain) SAMLScoping * scoping; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(SAMLRequestedAuthNContext *)context;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(SAMLSubject *)subject;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(SAMLSignature *)signature;
-(NSString *)issuer;
-(SAMLConditions *)conditions;
-(void)setConditions:(SAMLConditions *)arg1 ;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(NSString *)consent;
-(NSDate *)issueInstant;
-(BOOL)forceAuthN;
-(void)setForceAuthN:(BOOL)arg1 ;
-(BOOL)isPassive;
-(void)setIsPassive:(BOOL)arg1 ;
-(SAMLNameIdPolicy *)nameIdPolicy;
-(void)setNameIdPolicy:(SAMLNameIdPolicy *)arg1 ;
-(SAMLScoping *)scoping;
-(void)setScoping:(SAMLScoping *)arg1 ;
@end

