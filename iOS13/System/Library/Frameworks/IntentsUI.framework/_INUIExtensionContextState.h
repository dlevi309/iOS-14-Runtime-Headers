/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface _INUIExtensionContextState : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _hostedViewMinimumAllowedSizes;
	NSDictionary* _hostedViewMaximumAllowedSizes;
	NSArray* _interfaceSections;

}

@property (nonatomic,copy) NSDictionary * hostedViewMinimumAllowedSizes;              //@synthesize hostedViewMinimumAllowedSizes=_hostedViewMinimumAllowedSizes - In the implementation block
@property (nonatomic,copy) NSDictionary * hostedViewMaximumAllowedSizes;              //@synthesize hostedViewMaximumAllowedSizes=_hostedViewMaximumAllowedSizes - In the implementation block
@property (nonatomic,copy) NSArray * interfaceSections;                               //@synthesize interfaceSections=_interfaceSections - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)hostedViewMinimumAllowedSizes;
-(void)setHostedViewMinimumAllowedSizes:(NSDictionary *)arg1 ;
-(NSDictionary *)hostedViewMaximumAllowedSizes;
-(void)setHostedViewMaximumAllowedSizes:(NSDictionary *)arg1 ;
-(NSArray *)interfaceSections;
-(void)setInterfaceSections:(NSArray *)arg1 ;
@end

