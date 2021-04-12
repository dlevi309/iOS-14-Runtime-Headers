/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBuffer.h>

@interface MTLGPUDebugBuffer : MTLToolsBuffer {

	unsigned long long bufferIndex;
	unsigned long long _offset;
	unsigned long long _length;
	GPUDebugBufferDescriptorHeap* _descriptorHeap;

}

@property (nonatomic,readonly) unsigned long long offset; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
-(void*)contents;
-(unsigned long long)length;
-(unsigned long long)offset;
-(unsigned long long)gpuAddress;
-(void)dealloc;
-(unsigned long long)handleForOffset:(unsigned long long)arg1 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 track:(BOOL)arg5 ;
-(id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 track:(BOOL)arg6 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 ;
-(id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 ;
@end

