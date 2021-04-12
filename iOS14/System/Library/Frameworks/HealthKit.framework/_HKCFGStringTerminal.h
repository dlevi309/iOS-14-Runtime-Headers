/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal {

	BOOL _caseSensitive;
	NSString* _string;

}

@property (nonatomic,copy) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL caseSensitive;              //@synthesize caseSensitive=_caseSensitive - In the implementation block
-(id)_label;
-(unsigned long long)_minimumLength;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)caseSensitive;
-(id)characterSet;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
@end

