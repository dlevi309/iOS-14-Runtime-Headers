/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLRenderPipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARCoachingDotsRenderer : NSObject {

	unsigned long long _pixelFormat;
	id<MTLRenderPipelineState> _pipelineState;

}
-(id)init:(id)arg1 pixelFormat:(unsigned long long)arg2 metalLibrary:(id)arg3 sampleCount:(int)arg4 ;
-(void)encode:(id)arg1 renderCommandEncoder:(id)arg2 mvp:(SCD_Struct_AR0)arg3 visibility:(float)arg4 renderParams:(SCD_Struct_AR18)arg5 time:(double)arg6 ;
@end

