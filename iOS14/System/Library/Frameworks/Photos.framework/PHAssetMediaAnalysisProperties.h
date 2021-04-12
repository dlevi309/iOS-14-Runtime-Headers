/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetPropertySet.h>

@class NSDate;

@interface PHAssetMediaAnalysisProperties : PHAssetPropertySet {

	short _audioClassification;
	float _blurrinessScore;
	float _exposureScore;
	float _autoplaySuggestionScore;
	float _videoScore;
	float _activityScore;
	NSDate* _mediaAnalysisTimeStamp;
	unsigned long long _mediaAnalysisVersion;
	unsigned long long _faceCount;
	SCD_Struct_PH9 _bestKeyFrameTime;
	CGRect _bestPlaybackRect;
	SCD_Struct_PH12 _bestVideoTimeRange;

}

@property (nonatomic,readonly) SCD_Struct_PH9 bestKeyFrameTime;                      //@synthesize bestKeyFrameTime=_bestKeyFrameTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH12 bestVideoTimeRange;                   //@synthesize bestVideoTimeRange=_bestVideoTimeRange - In the implementation block
@property (nonatomic,readonly) CGRect bestPlaybackRect;                              //@synthesize bestPlaybackRect=_bestPlaybackRect - In the implementation block
@property (nonatomic,readonly) NSDate * mediaAnalysisTimeStamp;                      //@synthesize mediaAnalysisTimeStamp=_mediaAnalysisTimeStamp - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaAnalysisVersion;              //@synthesize mediaAnalysisVersion=_mediaAnalysisVersion - In the implementation block
@property (nonatomic,readonly) float blurrinessScore;                                //@synthesize blurrinessScore=_blurrinessScore - In the implementation block
@property (nonatomic,readonly) float exposureScore;                                  //@synthesize exposureScore=_exposureScore - In the implementation block
@property (nonatomic,readonly) float autoplaySuggestionScore;                        //@synthesize autoplaySuggestionScore=_autoplaySuggestionScore - In the implementation block
@property (nonatomic,readonly) float videoScore;                                     //@synthesize videoScore=_videoScore - In the implementation block
@property (nonatomic,readonly) float activityScore;                                  //@synthesize activityScore=_activityScore - In the implementation block
@property (nonatomic,readonly) unsigned long long faceCount;                         //@synthesize faceCount=_faceCount - In the implementation block
@property (nonatomic,readonly) short audioClassification;                            //@synthesize audioClassification=_audioClassification - In the implementation block
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)additionalPropertiesToFetchOnPrimaryObject;
+(id)propertiesToFetch;
+(id)keyPathToPrimaryObject;
-(float)blurrinessScore;
-(float)autoplaySuggestionScore;
-(float)videoScore;
-(float)activityScore;
-(unsigned long long)faceCount;
-(short)audioClassification;
-(SCD_Struct_PH12)bestVideoTimeRange;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(float)exposureScore;
-(unsigned long long)mediaAnalysisVersion;
-(NSDate *)mediaAnalysisTimeStamp;
-(void)initWithDefaultValues;
-(CGRect)bestPlaybackRect;
-(SCD_Struct_PH9)bestKeyFrameTime;
@end

