/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CNUICoreFamilyMemberContactsModel : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
@end

