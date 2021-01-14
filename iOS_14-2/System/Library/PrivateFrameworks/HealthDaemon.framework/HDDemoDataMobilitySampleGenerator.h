/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataMobilitySampleGenerator : HDDemoDataBaseSampleGenerator {

	double _nextStepLengthSampleTime;
	double _nextWalkingSpeedSampleTime;
	double _nextAsymmetryPercentageSampleTime;
	double _nextDoubleSupportPercentageSampleTime;
	double _nextSixMinuteWalkTestDistanceSampleTime;
	double _nextStairAscentSpeedSampleTime;
	double _nextStairDescentSpeedSampleTime;

}

@property (assign,nonatomic) double nextStepLengthSampleTime;                             //@synthesize nextStepLengthSampleTime=_nextStepLengthSampleTime - In the implementation block
@property (assign,nonatomic) double nextWalkingSpeedSampleTime;                           //@synthesize nextWalkingSpeedSampleTime=_nextWalkingSpeedSampleTime - In the implementation block
@property (assign,nonatomic) double nextAsymmetryPercentageSampleTime;                    //@synthesize nextAsymmetryPercentageSampleTime=_nextAsymmetryPercentageSampleTime - In the implementation block
@property (assign,nonatomic) double nextDoubleSupportPercentageSampleTime;                //@synthesize nextDoubleSupportPercentageSampleTime=_nextDoubleSupportPercentageSampleTime - In the implementation block
@property (assign,nonatomic) double nextSixMinuteWalkTestDistanceSampleTime;              //@synthesize nextSixMinuteWalkTestDistanceSampleTime=_nextSixMinuteWalkTestDistanceSampleTime - In the implementation block
@property (assign,nonatomic) double nextStairAscentSpeedSampleTime;                       //@synthesize nextStairAscentSpeedSampleTime=_nextStairAscentSpeedSampleTime - In the implementation block
@property (assign,nonatomic) double nextStairDescentSpeedSampleTime;                      //@synthesize nextStairDescentSpeedSampleTime=_nextStairDescentSpeedSampleTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(double)nextStepLengthSampleTime;
-(double)nextWalkingSpeedSampleTime;
-(double)nextAsymmetryPercentageSampleTime;
-(double)nextDoubleSupportPercentageSampleTime;
-(double)nextSixMinuteWalkTestDistanceSampleTime;
-(double)nextStairAscentSpeedSampleTime;
-(double)nextStairDescentSpeedSampleTime;
-(void)_generateStepLengthSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_generateWalkingSpeedSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_generateAsymmetryPercentageSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_generateDoubleSupportPercentageSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_generateSixMinuteWalkTestDistanceSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_generateStairAscentSpeedSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)_generateStairDescentSpeedSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(BOOL)_isDemoPersonWalkingAboveAverage;
-(double)_generateWalkingDataSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 addFromWatch:(BOOL)arg4 shouldDecreaseDuringRehab:(BOOL)arg5 objectCollection:(id)arg6 nextSampleTime:(double)arg7 typeIdentifier:(id)arg8 unit:(id)arg9 sampleMean:(double)arg10 sampleMeanStdDev:(double)arg11 sampleFrequency:(double)arg12 sampleFrequencyStdDev:(double)arg13 ;
-(void)setNextStepLengthSampleTime:(double)arg1 ;
-(void)setNextWalkingSpeedSampleTime:(double)arg1 ;
-(void)setNextAsymmetryPercentageSampleTime:(double)arg1 ;
-(void)setNextDoubleSupportPercentageSampleTime:(double)arg1 ;
-(void)setNextSixMinuteWalkTestDistanceSampleTime:(double)arg1 ;
-(void)setNextStairAscentSpeedSampleTime:(double)arg1 ;
-(void)setNextStairDescentSpeedSampleTime:(double)arg1 ;
@end

