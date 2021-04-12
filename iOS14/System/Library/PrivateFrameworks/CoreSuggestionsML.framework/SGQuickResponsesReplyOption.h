/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSNumber;

@interface SGQuickResponsesReplyOption : NSObject {

	NSNumber* _position;
	NSNumber* _ucb;

}

@property (nonatomic,readonly) NSNumber * position;              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) NSNumber * ucb;                   //@synthesize ucb=_ucb - In the implementation block
+(double)ucbCombinedForSelected:(double)arg1 displayed:(double)arg2 actualOptionsDisplayed:(double)arg3 matched:(double)arg4 imputedDisplayed:(double)arg5 imputedOptionsDisplayed:(double)arg6 explorationFactor:(double)arg7 ;
+(double)ucbTunedVarianceForMean:(double)arg1 displayed:(double)arg2 totalDisplayed:(double)arg3 ;
+(double)ucbWithMean:(double)arg1 varianceOfMean:(double)arg2 explorationFactor:(double)arg3 ;
+(double)ucbCombinedWithMeanA:(double)arg1 meanB:(double)arg2 varianceA:(double)arg3 varianceB:(double)arg4 explorationFactor:(double)arg5 ;
+(id)sortedReplyOptionsForRecords:(id)arg1 config:(id)arg2 ;
+(double)totalDisplayedCountForRecords:(id)arg1 ;
+(id)imputedDisplayedForRecords:(id)arg1 config:(id)arg2 ;
-(NSNumber *)position;
-(long long)compare:(id)arg1 ;
-(NSNumber *)ucb;
-(id)initWithPosition:(unsigned long long)arg1 records:(id)arg2 actualOptionsDisplayedCount:(double)arg3 imputedOptionsDisplayedCount:(double)arg4 imputedOptionsDisplayed:(id)arg5 config:(id)arg6 ;
@end

