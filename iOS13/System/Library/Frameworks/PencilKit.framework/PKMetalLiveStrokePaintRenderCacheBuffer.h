/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol MTLBuffer;
#import <PencilKit/PencilKit-Structs.h>
@interface PKMetalLiveStrokePaintRenderCacheBuffer : NSObject {

	id<MTLBuffer> _strokePointBuffer;
	unsigned long long _strokePointBufferOffset;
	id<MTLBuffer> _liveStrokePointBuffer;
	unsigned long long _liveStrokePointBufferOffset;
	unsigned long long _numVertices;
	unsigned long long _numPoints;

}

@property (nonatomic,readonly) id<MTLBuffer> strokePointBuffer;                             //@synthesize strokePointBuffer=_strokePointBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long strokePointBufferOffset;                  //@synthesize strokePointBufferOffset=_strokePointBufferOffset - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> liveStrokePointBuffer;                         //@synthesize liveStrokePointBuffer=_liveStrokePointBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long liveStrokePointBufferOffset;              //@synthesize liveStrokePointBufferOffset=_liveStrokePointBufferOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long numVertices;                              //@synthesize numVertices=_numVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long numPoints;                                //@synthesize numPoints=_numPoints - In the implementation block
-(id)init;
-(unsigned long long)numVertices;
-(id<MTLBuffer>)strokePointBuffer;
-(unsigned long long)strokePointBufferOffset;
-(unsigned long long)numPoints;
-(id<MTLBuffer>)liveStrokePointBuffer;
-(unsigned long long)liveStrokePointBufferOffset;
-(id)initWithPoints:(const PKMetalPaintStrokePoint*)arg1 liveStrokePoints:(const PKMetalLiveStrokePaintStrokePoint*)arg2 numPoints:(unsigned long long)arg3 numVertices:(unsigned long long)arg4 resourceHandler:(id)arg5 ;
@end

