/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface CLKSimpleTextProvider : CLKTextProvider {

	BOOL _useNoContentDashFormatting;
	BOOL _useAllSmallCaps;
	NSString* _text;
	NSString* _shortText;

}

@property (assign,nonatomic) BOOL useNoContentDashFormatting;              //@synthesize useNoContentDashFormatting=_useNoContentDashFormatting - In the implementation block
@property (assign,nonatomic) BOOL useAllSmallCaps;                         //@synthesize useAllSmallCaps=_useAllSmallCaps - In the implementation block
@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * shortText;                           //@synthesize shortText=_shortText - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithText:(id)arg1 shortText:(id)arg2 ;
+(id)textProviderWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3 ;
+(id)finalizedTextProviderWithText:(id)arg1 monospaceNumbers:(BOOL)arg2 ;
+(id)textProviderWithText:(id)arg1 ;
+(id)finalizedTextProviderWithText:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)_validate;
-(id)attributedString;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(void)setShortText:(NSString *)arg1 ;
-(NSString *)shortText;
-(BOOL)useNoContentDashFormatting;
-(void)setUseNoContentDashFormatting:(BOOL)arg1 ;
-(BOOL)useAllSmallCaps;
-(void)setUseAllSmallCaps:(BOOL)arg1 ;
@end

