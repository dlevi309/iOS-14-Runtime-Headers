/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, MTLToolsFunction, MTLGPUDebugBuffer;

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState {

	MTLComputePipelineDescriptor* _descriptor;
	MTLComputePipelineReflection* _internalReflection;
	MTLComputePipelineReflection* _userReflection;
	KeyBufferPair _globalConstants;

}

@property (nonatomic,readonly) MTLToolsFunction * computeFunction; 
@property (nonatomic,readonly) MTLComputePipelineReflection * internalReflection; 
@property (nonatomic,readonly) MTLComputePipelineReflection * userReflection; 
@property (nonatomic,readonly) MTLGPUDebugBuffer * globalConstantsBuffer; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
-(MTLToolsFunction *)computeFunction;
-(unsigned long long)staticThreadgroupMemoryLength;
-(void)dealloc;
-(MTLGPUDebugBuffer *)globalConstantsBuffer;
-(MTLComputePipelineReflection *)userReflection;
-(void)releaseReflection;
-(id)initWithComputePipelineState:(id)arg1 descriptor:(id)arg2 unwrappedDescriptor:(id)arg3 reflection:(id)arg4 device:(id)arg5 ;
-(MTLComputePipelineReflection *)internalReflection;
@end

