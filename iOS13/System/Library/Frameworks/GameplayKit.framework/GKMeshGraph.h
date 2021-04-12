/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraph.h>

@class NSMutableArray, NSArray;

@interface GKMeshGraph : GKGraph {

	NSMutableArray* _sourceObstacles;
	GKCMeshGraph* _cMeshGraph;
	Class _nodeClass;

}

@property (nonatomic,readonly) NSArray * obstacles; 
@property (nonatomic,readonly) float bufferRadius; 
@property (assign,nonatomic) unsigned long long triangulationMode; 
@property (nonatomic,readonly) unsigned long long triangleCount; 
+(BOOL)supportsSecureCoding;
+(id)graphWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 ;
+(id)graphWithBufferRadius:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)triangulate;
-(unsigned long long)triangleCount;
-(id)initWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 ;
-(float)bufferRadius;
-(Class)nodeClass;
-(GKCGraph*)makeCGraph;
-(GKCMeshGraph*)cMeshGraph;
-(NSArray *)obstacles;
-(void)setTriangulationMode:(unsigned long long)arg1 ;
-(unsigned long long)triangulationMode;
-(void)setMakeNodesFromTriangleCenters:(BOOL)arg1 ;
-(BOOL)makeNodesFromTriangleCenters;
-(void)setMakeNodesFromTriangleVertices:(BOOL)arg1 ;
-(BOOL)makeNodesFromTriangleVertices;
-(void)setMakeNodesFromTriangleEdgeMidpoints:(BOOL)arg1 ;
-(BOOL)makeNodesFromTriangleEdgeMidpoints;
-(id)initWithBufferRadius:(float)arg1 ;
-(void)addObstacles:(id)arg1 ;
-(void)removeObstacles:(id)arg1 ;
-(void)connectNodeUsingObstacles:(id)arg1 ;
-(GKTriangle)triangleAtIndex:(unsigned long long)arg1 ;
-(Class)classForGenericArgumentAtIndex:(unsigned long long)arg1 ;
@end

