/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVCaptureBracketedStillImageSettings;

@interface AVCaptureStillImageRequest : NSObject {

	/*^block*/id _sbufCompletionBlock;
	/*^block*/id _iosurfaceCompletionBlock;
	/*^block*/id _bracketedCaptureCompletionBlock;
	long long _settingsID;
	unsigned _shutterSoundID;
	AVCaptureBracketedStillImageSettings* _bracketedSettings;

}

@property (copy) id sbufCompletionBlock;                                                  //@synthesize sbufCompletionBlock=_sbufCompletionBlock - In the implementation block
@property (copy) id iosurfaceCompletionBlock;                                             //@synthesize iosurfaceCompletionBlock=_iosurfaceCompletionBlock - In the implementation block
@property (copy) id bracketedCaptureCompletionBlock;                                      //@synthesize bracketedCaptureCompletionBlock=_bracketedCaptureCompletionBlock - In the implementation block
@property (assign) long long settingsID;                                                  //@synthesize settingsID=_settingsID - In the implementation block
@property (assign) unsigned shutterSoundID;                                               //@synthesize shutterSoundID=_shutterSoundID - In the implementation block
@property (retain) AVCaptureBracketedStillImageSettings * bracketedSettings;              //@synthesize bracketedSettings=_bracketedSettings - In the implementation block
+(id)request;
-(void)dealloc;
-(AVCaptureBracketedStillImageSettings *)bracketedSettings;
-(long long)settingsID;
-(void)setSettingsID:(long long)arg1 ;
-(id)sbufCompletionBlock;
-(void)setSbufCompletionBlock:(id)arg1 ;
-(id)iosurfaceCompletionBlock;
-(void)setIosurfaceCompletionBlock:(id)arg1 ;
-(id)bracketedCaptureCompletionBlock;
-(void)setBracketedCaptureCompletionBlock:(id)arg1 ;
-(unsigned)shutterSoundID;
-(void)setShutterSoundID:(unsigned)arg1 ;
-(void)setBracketedSettings:(AVCaptureBracketedStillImageSettings *)arg1 ;
@end

