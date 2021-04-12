/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol MiroBlueprintProtocol <NSObject>
@property (nonatomic,readonly) double videoMinDuration; 
@property (nonatomic,readonly) double videoIdealDuration; 
@property (nonatomic,readonly) double videoMaxDuration; 
@property (nonatomic,readonly) double photoMinDuration; 
@property (nonatomic,readonly) double photoIdealDuration; 
@property (nonatomic,readonly) double photoMaxDuration; 
@property (nonatomic,readonly) double titleMinDuration; 
@property (nonatomic,readonly) double titleIdealDuration; 
@property (nonatomic,readonly) double irisMinDuration; 
@property (nonatomic,readonly) double irisIdealDuration; 
@property (nonatomic,readonly) double irisMaxDuration; 
@property (nonatomic,readonly) double burstMinDuration; 
@property (nonatomic,readonly) double burstIdealDuration; 
@property (nonatomic,readonly) double sloMoMinDuration; 
@property (nonatomic,readonly) double sloMoIdealDuration; 
@property (nonatomic,readonly) double timelapseMinDuration; 
@property (nonatomic,readonly) double timelapseIdealDuration; 
@property (nonatomic,readonly) double halfBarDuration; 
@property (nonatomic,readonly) unsigned long long toneTreatment; 
@property (nonatomic,readonly) id<MiroBlueprintMusicInfoProtocol> musicInfo; 
@property (nonatomic,readonly) id<MiroBlueprintTitleStyleProtocol> titleStyle; 
@property (nonatomic,readonly) id<MiroBlueprintEditStyleProtocol> editStyle; 
@required
-(id<MiroBlueprintTitleStyleProtocol>)titleStyle;
-(id<MiroBlueprintEditStyleProtocol>)editStyle;
-(id<MiroBlueprintMusicInfoProtocol>)musicInfo;
-(double)idealDurationForAsset:(id)arg1;
-(double)videoMinDuration;
-(double)videoIdealDuration;
-(double)videoMaxDuration;
-(double)panoMinDurationWithMultiplier:(double)arg1;
-(double)panoMaxDurationWithMultiplier:(double)arg1;
-(double)panoIdealDurationWithMultiplier:(double)arg1;
-(double)photoIdealDuration;
-(double)photoMinDuration;
-(double)photoMaxDuration;
-(double)titleMinDuration;
-(double)titleIdealDuration;
-(double)minimumDurationForAsset:(id)arg1;
-(double)maximumDurationForAsset:(id)arg1;
-(double)halfBarDuration;
-(double)sloMoMinDuration;
-(double)sloMoIdealDuration;
-(double)timelapseMinDuration;
-(double)timelapseIdealDuration;
-(double)irisMinDuration;
-(double)irisIdealDuration;
-(double)irisMaxDuration;
-(double)burstMinDuration;
-(double)burstIdealDuration;
-(BOOL)durationIsNearVideoIdeal:(double)arg1;
-(unsigned long long)toneTreatment;

@end

