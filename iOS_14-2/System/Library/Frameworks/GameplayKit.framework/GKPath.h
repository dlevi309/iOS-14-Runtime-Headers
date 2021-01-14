/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKPath : NSObject {

	PolylinePathway* _pathway;

}

@property (assign,nonatomic) float radius; 
@property (readonly) unsigned long long numPoints; 
@property (assign,getter=isCyclical,nonatomic) BOOL cyclical; 
+(id)pathWithPoints:(1*)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4 ;
+(id)pathWithGraphNodes:(id)arg1 radius:(float)arg2 ;
+(id)pathWithFloat3Points:(1*)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4 ;
-(void)setRadius:(float)arg1 ;
-(2)pointAtIndex:(unsigned long long)arg1 ;
-(float)radius;
-(unsigned long long)numPoints;
-(PolylinePathway*)pathway;
-(void)set_cyclical:(BOOL)arg1 ;
-(BOOL)_cyclical;
-(BOOL)isCyclical;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4 ;
-(id)initWithGraphNodes:(id)arg1 radius:(float)arg2 ;
-(id)initWithFloat3Points:(1*)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4 ;
-(void)setCyclical:(BOOL)arg1 ;
-(2)float2AtIndex:(unsigned long long)arg1 ;
-(2)float3AtIndex:(unsigned long long)arg1 ;
@end

