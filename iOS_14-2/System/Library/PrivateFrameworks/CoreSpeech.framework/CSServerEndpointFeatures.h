/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSArray, NSString;

@interface CSServerEndpointFeatures : NSObject {

	long long _wordCount;
	long long _trailingSilenceDuration;
	double _eosLikelihood;
	NSArray* _pauseCounts;
	double _silencePosterior;
	long long _processedAudioDurationInMilliseconds;
	NSString* _taskName;

}

@property (assign,nonatomic) long long wordCount;                                         //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) long long trailingSilenceDuration;                           //@synthesize trailingSilenceDuration=_trailingSilenceDuration - In the implementation block
@property (assign,nonatomic) double eosLikelihood;                                        //@synthesize eosLikelihood=_eosLikelihood - In the implementation block
@property (nonatomic,copy) NSArray * pauseCounts;                                         //@synthesize pauseCounts=_pauseCounts - In the implementation block
@property (assign,nonatomic) double silencePosterior;                                     //@synthesize silencePosterior=_silencePosterior - In the implementation block
@property (assign,nonatomic) long long processedAudioDurationInMilliseconds;              //@synthesize processedAudioDurationInMilliseconds=_processedAudioDurationInMilliseconds - In the implementation block
@property (nonatomic,copy) NSString * taskName;                                           //@synthesize taskName=_taskName - In the implementation block
-(id)description;
-(id)dictionary;
-(NSString *)taskName;
-(NSArray *)pauseCounts;
-(long long)wordCount;
-(void)setWordCount:(long long)arg1 ;
-(double)silencePosterior;
-(void)setSilencePosterior:(double)arg1 ;
-(void)setProcessedAudioDurationInMilliseconds:(long long)arg1 ;
-(long long)processedAudioDurationInMilliseconds;
-(double)eosLikelihood;
-(void)setEosLikelihood:(double)arg1 ;
-(void)setPauseCounts:(NSArray *)arg1 ;
-(void)setTaskName:(NSString *)arg1 ;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
-(id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7 ;
-(id)initWithWordCount:(long long)arg1 trailingSilenceFrames:(long long)arg2 endOfSilenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 ;
@end

