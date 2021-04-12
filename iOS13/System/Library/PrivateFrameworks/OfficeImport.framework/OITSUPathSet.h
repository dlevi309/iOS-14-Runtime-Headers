/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSMutableDictionary;

@interface OITSUPathSet : NSObject <NSCopying> {

	NSMutableSet* mPaths;
	NSMutableDictionary* mBasePathToNumberMap;
	OITSUPathSet* mUnderlyingSet;

}
+(void)processPath:(id)arg1 base:(id*)arg2 hasBaseNumber:(BOOL*)arg3 baseNumber:(unsigned*)arg4 extension:(id*)arg5 ;
+(id)parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL*)arg2 number:(unsigned*)arg3 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)addPath:(id)arg1 ;
-(id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2 ;
-(void)setUnderlyingPathSet:(id)arg1 ;
-(BOOL)isPathUsed:(id)arg1 ;
-(void)pathIsUsed:(id)arg1 ;
-(void)pathIsNoLongerUsed:(id)arg1 ;
-(void)unionPathSet:(id)arg1 ;
@end

