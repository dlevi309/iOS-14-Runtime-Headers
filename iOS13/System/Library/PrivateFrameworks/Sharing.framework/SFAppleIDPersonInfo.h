/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface SFAppleIDPersonInfo : NSObject <NSSecureCoding> {

	BOOL _didMatchEmail;
	BOOL _didMatchPhone;
	NSString* _accountIdentifier;
	NSString* _altDSID;
	long long _certificateStatus;
	NSString* _matchedValue;
	NSDate* _validUntilDate;

}

@property (nonatomic,readonly) NSDate * validUntilDate;                   //@synthesize validUntilDate=_validUntilDate - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;                        //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) long long certificateStatus;               //@synthesize certificateStatus=_certificateStatus - In the implementation block
@property (nonatomic,readonly) BOOL didMatchEmail;                        //@synthesize didMatchEmail=_didMatchEmail - In the implementation block
@property (nonatomic,readonly) BOOL didMatchPhone;                        //@synthesize didMatchPhone=_didMatchPhone - In the implementation block
@property (nonatomic,readonly) BOOL isStale; 
@property (nonatomic,readonly) NSString * matchedValue;                   //@synthesize matchedValue=_matchedValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)altDSID;
-(NSString *)accountIdentifier;
-(NSString *)matchedValue;
-(long long)certificateStatus;
-(BOOL)isEqualToPersonInfo:(id)arg1 ;
-(BOOL)didMatchEmail;
-(BOOL)didMatchPhone;
-(NSDate *)validUntilDate;
-(BOOL)isStale;
@end

