/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class AVVoiceTriggerClient, NSObject, NSString;

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate> {

	BOOL _isSpeakerMuted;
	AVVoiceTriggerClient* _alwaysOnProcessorController;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _builtInSpeakerState;

}

@property (nonatomic,retain) AVVoiceTriggerClient * alwaysOnProcessorController;              //@synthesize alwaysOnProcessorController=_alwaysOnProcessorController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long builtInSpeakerState;                          //@synthesize builtInSpeakerState=_builtInSpeakerState - In the implementation block
@property (assign,nonatomic) BOOL isSpeakerMuted;                                             //@synthesize isSpeakerMuted=_isSpeakerMuted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)setAlwaysOnProcessorController:(AVVoiceTriggerClient *)arg1 ;
-(AVVoiceTriggerClient *)alwaysOnProcessorController;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(unsigned long long)currentBuiltinSpeakerState;
-(void)_fetchSpeakerStateMutedInfo;
-(void)_fetchSpeakerStateActiveInfo;
-(void)_didReceiveSpeakerMuteStateChangeNotification:(BOOL)arg1 ;
-(void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)arg1 ;
-(void)_notifyObserver:(id)arg1 withBuiltinSpeakerState:(unsigned long long)arg2 ;
-(void)_notifyObserver:(id)arg1 isSpeakerMuted:(BOOL)arg2 ;
-(BOOL)isBuiltinSpeakerMuted;
-(void)setBuiltInSpeakerState:(unsigned long long)arg1 ;
-(unsigned long long)builtInSpeakerState;
-(BOOL)isSpeakerMuted;
-(void)setIsSpeakerMuted:(BOOL)arg1 ;
@end

