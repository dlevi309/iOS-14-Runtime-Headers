/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface APFormatter : NSFormatter {

	NSCharacterSet* _characterSet;
	NSCharacterSet* _invertedCharacterSet;
	unsigned long long _maxLength;

}

@property (assign,nonatomic) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
+(id)formatterForBSFormatter:(int)arg1 withMaxLen:(long long)arg2 ;
+(id)hexFormatter:(unsigned long long)arg1 ;
+(id)numberOnlyFormatter:(unsigned long long)arg1 ;
+(id)sharedIPFormatter;
+(id)sharedIPv6Formatter;
+(id)ipOctetFormatter:(unsigned long long)arg1 ;
+(id)sharedIPv4PrefixFormatter;
+(id)sharedPhoneNumberFormatter;
+(id)portRangeFormatter:(unsigned long long)arg1 ;
+(id)romanSet;
+(id)ipv4AddressSet;
+(id)ipv6AddressSet;
+(id)ipv4AddressWithPrefixSet;
+(id)multipleIpAddressesSet;
+(id)portRangeSet;
+(id)phoneNumberSet;
+(id)asciiSet;
+(id)hexSet;
+(id)romanFormatter:(unsigned long long)arg1 ;
+(id)ipFormatter:(unsigned long long)arg1 ;
+(id)sharedMultipleIPFormatter;
+(id)multipleIPFormatter:(unsigned long long)arg1 ;
+(id)maxLengthFormatter:(unsigned long long)arg1 ;
+(id)nonZeroNumberOnly:(unsigned long long)arg1 ;
+(id)phoneNumberFormatter:(unsigned long long)arg1 ;
+(id)asciiFormatter:(unsigned long long)arg1 ;
+(id)pogoPasswordSet;
-(void)dealloc;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(id)characterSet;
-(void)setCharacterSet:(id)arg1 ;
-(id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned long long)arg2 ;
-(void)setInvertedCharacterSet:(id)arg1 ;
-(id)invertedCharacterSet;
-(id)initWithMaxLength:(unsigned long long)arg1 ;
-(id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(unsigned long long)arg2 ;
@end

