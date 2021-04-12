/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSMutableSet;

@interface HFSetDiff : NSObject <NSCopying, NSMutableCopying> {

	NSSet* _fromSet;
	NSMutableSet* _toSet;
	NSMutableSet* _additions;
	NSMutableSet* _deletions;
	NSMutableSet* _updates;

}

@property (nonatomic,readonly) NSSet * additions;              //@synthesize additions=_additions - In the implementation block
@property (nonatomic,readonly) NSSet * deletions;              //@synthesize deletions=_deletions - In the implementation block
@property (nonatomic,readonly) NSSet * updates;                //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) NSSet * fromSet;                //@synthesize fromSet=_fromSet - In the implementation block
@property (nonatomic,readonly) NSSet * toSet;                  //@synthesize toSet=_toSet - In the implementation block
+(id)diffFromSet:(id)arg1 toSet:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSSet *)updates;
-(NSSet *)deletions;
-(id)_initWithFromSet:(id)arg1 toSet:(id)arg2 additions:(id)arg3 deletions:(id)arg4 updates:(id)arg5 ;
-(NSSet *)fromSet;
-(NSSet *)toSet;
-(NSSet *)additions;
@end

