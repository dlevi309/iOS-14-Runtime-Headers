/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/TrackedFlowCounts.h>

@interface IntervalTrackedFlowCounts : TrackedFlowCounts {

	unsigned long long _timestampSeconds;
	unsigned long long _numBlemishedFlows;
	unsigned long long _numUnblemishedFlows;

}

@property (assign,nonatomic) unsigned long long timestampSeconds;                 //@synthesize timestampSeconds=_timestampSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long numBlemishedFlows;                //@synthesize numBlemishedFlows=_numBlemishedFlows - In the implementation block
@property (assign,nonatomic) unsigned long long numUnblemishedFlows;              //@synthesize numUnblemishedFlows=_numUnblemishedFlows - In the implementation block
-(id)description;
-(unsigned long long)timestampSeconds;
-(void)setTimestampSeconds:(unsigned long long)arg1 ;
-(void)addFlowCounts:(id)arg1 ;
-(void)subtractFlowCounts:(id)arg1 ;
-(unsigned long long)numBlemishedFlows;
-(unsigned long long)numUnblemishedFlows;
-(void)addIntervalFlowCounts:(id)arg1 ;
-(void)subtractIntervalFlowCounts:(id)arg1 ;
-(void)setNumBlemishedFlows:(unsigned long long)arg1 ;
-(void)setNumUnblemishedFlows:(unsigned long long)arg1 ;
@end

