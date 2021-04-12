/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderPipeline.h>

@class NUScript, NSUUID;

@interface NUJSRenderPipeline : NURenderPipeline {

	NUScript* _script;
	NSUUID* _identifier;

}
+(id)newPhotosPipelineAtSourceURL:(id)arg1 error:(out id*)arg2 ;
+(id)newPhotosPipeline:(out id*)arg1 ;
+(id)extractFilterParams:(id)arg1 withPipelineState:(id)arg2 error:(out id*)arg3 ;
+(id)renderPipelineWithJavaScript:(id)arg1 ;
+(id)extractTransforms:(id)arg1 inputImages:(id)arg2 error:(out id*)arg3 ;
-(id)init;
-(id)initWithScript:(id)arg1 ;
-(id)_pipelineFunctionInContext:(id)arg1 error:(out id*)arg2 ;
-(id)_pipelineFunctionWithJavaScript:(id)arg1 sourceURL:(id)arg2 context:(id)arg3 ;
-(void)setUpContext:(id)arg1 ;
-(id)_processedRenderNodeForComposition:(id)arg1 input:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_processedRenderNodeForComposition:(id)arg1 input:(id)arg2 pipelineState:(id)arg3 context:(id)arg4 error:(out id*)arg5 ;
@end

