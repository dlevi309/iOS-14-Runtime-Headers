/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <DuetExpertCenter/_DECItem.h>

@class NSString;

@interface _DECAppItem : _DECItem {

	NSString* _bundleIdentifier;
	long long _sources;
	long long _reason;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long sources;                        //@synthesize sources=_sources - In the implementation block
@property (assign,nonatomic) long long reason;                           //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)category;
+(id)appWithBundleIdentifier:(id)arg1 sources:(long long)arg2 ;
+(id)appWithBundleIdentifier:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(long long)sources;
-(id)description;
-(long long)reason;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setReason:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 sources:(long long)arg2 ;
-(BOOL)_isEqualToDECAppItem:(id)arg1 ;
@end

