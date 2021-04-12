/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLRenderPipelineState.h>

@protocol MTLDevice;
@class NSString, MTLIndirectArgumentBufferEmulationData, MTLDebugInstrumentationData;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {

	NSString* _label;
	id<MTLDevice> _device;
	BOOL _threadgroupSizeMatchesTileSize;
	MTLIndirectArgumentBufferEmulationData* _vertexIABEmulationData;
	MTLIndirectArgumentBufferEmulationData* _fragmentIABEmulationData;
	MTLDebugInstrumentationData* _vertexDebugInstrumentationData;
	MTLDebugInstrumentationData* _fragmentDebugInstrumentationData;
	MTLDebugInstrumentationData* _tileDebugInstrumentationData;
	BOOL _supportIndirectCommandBuffers;
	long long _textureWriteRoundingMode;
	unsigned long long _resourceIndex;
	unsigned long long _gpuAddress;
	unsigned long long _imageBlockSampleLength;

}

@property (readonly) NSString * label;                                                                       //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                                   //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * vertexIABEmulationData;                //@synthesize vertexIABEmulationData=_vertexIABEmulationData - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * fragmentIABEmulationData;              //@synthesize fragmentIABEmulationData=_fragmentIABEmulationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * vertexDebugInstrumentationData;                   //@synthesize vertexDebugInstrumentationData=_vertexDebugInstrumentationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * fragmentDebugInstrumentationData;                 //@synthesize fragmentDebugInstrumentationData=_fragmentDebugInstrumentationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * tileDebugInstrumentationData;                     //@synthesize tileDebugInstrumentationData=_tileDebugInstrumentationData - In the implementation block
@property (readonly) long long textureWriteRoundingMode; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long resourceIndex;                                             //@synthesize resourceIndex=_resourceIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long gpuAddress;                                                //@synthesize gpuAddress=_gpuAddress - In the implementation block
@property (readonly) unsigned long long imageBlockSampleLength;                                              //@synthesize imageBlockSampleLength=_imageBlockSampleLength - In the implementation block
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) BOOL threadgroupSizeMatchesTileSize;                                                    //@synthesize threadgroupSizeMatchesTileSize=_threadgroupSizeMatchesTileSize - In the implementation block
@property (readonly) unsigned long long imageblockSampleLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supportIndirectCommandBuffers;
-(long long)textureWriteRoundingMode;
-(unsigned long long)resourceIndex;
-(MTLIndirectArgumentBufferEmulationData *)vertexIABEmulationData;
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(unsigned long long)uniqueIdentifier;
-(unsigned)getFragmentShaderTelemetryID;
-(unsigned long long)imageBlockSampleLength;
-(id<MTLDevice>)device;
-(unsigned long long)gpuAddress;
-(unsigned long long)imageblockSampleLength;
-(BOOL)threadgroupSizeMatchesTileSize;
-(long long)textureWriteFPRoundingMode;
-(void)setFragmentIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
-(unsigned)getVertexShaderTelemetryID;
-(void)setTileDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
-(MTLIndirectArgumentBufferEmulationData *)fragmentIABEmulationData;
-(void)setVertexDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
-(MTLDebugInstrumentationData *)tileDebugInstrumentationData;
-(id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2 ;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT31)arg1 ;
-(void)setFragmentDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
-(NSString *)label;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
-(void)dealloc;
-(void)setVertexIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
@end

