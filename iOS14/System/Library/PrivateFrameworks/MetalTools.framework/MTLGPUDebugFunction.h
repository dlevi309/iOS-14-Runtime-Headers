/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsFunction.h>

@interface MTLGPUDebugFunction : MTLToolsFunction {

	mutex argumentLayoutsMutex;
	unordered_map<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout> > > > >* argumentLayouts;

}
+(id)newFunctionWithFunction:(id)arg1 library:(id)arg2 ;
+(id)internalStructTypeFromUserStructType:(id)arg1 ;
+(id)internalArrayTypeFromUserArrayType:(id)arg1 ;
+(id)convertUserType:(id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2 ;
-(id)initWithFunction:(id)arg1 library:(id)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3 binaryArchives:(id)arg4 ;
@end

