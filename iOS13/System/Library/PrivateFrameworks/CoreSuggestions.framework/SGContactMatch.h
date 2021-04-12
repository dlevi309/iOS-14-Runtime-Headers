/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, SGContact, NSArray, SGMatchedDetails, SGObject;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding> {

	SGRecordId* _matchingFieldRecordId;
	long long _matchingFieldType;
	SGContact* _contact;
	NSArray* _matchTokens;
	SGMatchedDetails* _matchedDetails;

}

@property (nonatomic,readonly) SGContact * contact;                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) SGObject * matchingField; 
@property (nonatomic,readonly) long long matchingFieldType;                    //@synthesize matchingFieldType=_matchingFieldType - In the implementation block
@property (nonatomic,readonly) NSArray * matchTokens;                          //@synthesize matchTokens=_matchTokens - In the implementation block
@property (nonatomic,readonly) SGMatchedDetails * matchedDetails;              //@synthesize matchedDetails=_matchedDetails - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SGContact *)contact;
-(id)initWithContact:(id)arg1 matchTokens:(id)arg2 matchInfo:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 ;
-(id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 ;
-(id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(BOOL)isEqualToContactMatch:(id)arg1 ;
-(SGObject *)matchingField;
-(long long)matchingFieldType;
-(NSArray *)matchTokens;
-(SGMatchedDetails *)matchedDetails;
@end

