/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) long long contentType; 
@property (nonatomic,copy,readonly) NSDictionary * matchDictionary; 
+(BOOL)supportsSecureCoding;
+(id)storeItemWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)contentType;
-(NSDictionary *)matchDictionary;
@end

