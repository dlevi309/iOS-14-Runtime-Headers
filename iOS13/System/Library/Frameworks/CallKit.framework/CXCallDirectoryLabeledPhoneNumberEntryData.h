/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXCallDirectoryEntryData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CXCallDirectoryLabeledPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding> {

	NSData* _phoneNumberData;
	NSData* _labelData;

}

@property (nonatomic,retain) NSData * phoneNumberData;                //@synthesize phoneNumberData=_phoneNumberData - In the implementation block
@property (nonatomic,retain) NSData * labelData;                      //@synthesize labelData=_labelData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)phoneNumberData;
-(NSData *)labelData;
-(long long)phoneNumberAtIndex:(unsigned long long)arg1 ;
-(const char*)utf8LabelAtIndex:(unsigned long long)arg1 length:(out unsigned short*)arg2 ;
-(void)setPhoneNumberData:(NSData *)arg1 ;
-(void)setLabelData:(NSData *)arg1 ;
@end

