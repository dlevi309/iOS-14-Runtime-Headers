/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWStillImageCaptureStatusDelegate <NSObject>
@required
-(void)stillImageCoordinator:(id)arg1 didResolveStillImagePTS:(SCD_Struct_BW8)arg2 forSettings:(id)arg3 resolvedCaptureSettings:(id)arg4 isPreBracketedEV0:(BOOL)arg5;
-(void)stillImageCoordinator:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW8)arg2 transform:(id)arg3 forSettings:(id)arg4;
-(void)stillImageCoordinator:(id)arg1 didCancelMomentCaptureForSettingsID:(long long)arg2 streamingDisruptionEndPTS:(SCD_Struct_BW8)arg3;
-(void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2;
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureBeforeResolvingSettingsForID:(long long)arg2;
-(void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(BOOL)arg3 error:(int)arg4;
-(void)stillImageCoordinator:(id)arg1 willPrepareStillImageCaptureWithSettings:(id)arg2 clientInitiated:(BOOL)arg3;
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2;

@end

