/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface __NSCFString : NSMutableString
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)isNSString__;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(const char*)cString;
-(const char*)UTF8String;
-(unsigned long long)cStringLength;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(const unsigned short*)_fastCharacterContents;
-(BOOL)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)hasPrefix:(id)arg1 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 ;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(Class)classForCoder;
-(BOOL)_isCString;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendString:(id)arg1 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
@end

