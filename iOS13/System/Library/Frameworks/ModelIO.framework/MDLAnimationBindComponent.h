/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLComponent.h>

@protocol MDLJointAnimation;
@class MDLSkeleton, NSArray, NSString;

@interface MDLAnimationBindComponent : NSObject <NSCopying, MDLComponent> {

	MDLSkeleton* _skeleton;
	id<MDLJointAnimation> _jointAnimation;
	NSArray* _jointPaths;
	SCD_Struct_MD1 _geometryBindTransform;

}

@property (nonatomic,retain) MDLSkeleton * skeleton;                            //@synthesize skeleton=_skeleton - In the implementation block
@property (nonatomic,retain) id<MDLJointAnimation> jointAnimation;              //@synthesize jointAnimation=_jointAnimation - In the implementation block
@property (nonatomic,retain) NSArray * jointPaths;                              //@synthesize jointPaths=_jointPaths - In the implementation block
@property (assign,nonatomic) SCD_Struct_MD1 geometryBindTransform;              //@synthesize geometryBindTransform=_geometryBindTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)jointPaths;
-(void)setSkeleton:(MDLSkeleton *)arg1 ;
-(void)setJointAnimation:(id<MDLJointAnimation>)arg1 ;
-(void)setGeometryBindTransform:(SCD_Struct_MD1)arg1 ;
-(void)setJointPaths:(NSArray *)arg1 ;
-(MDLSkeleton *)skeleton;
-(id<MDLJointAnimation>)jointAnimation;
-(SCD_Struct_MD1)geometryBindTransform;
@end

