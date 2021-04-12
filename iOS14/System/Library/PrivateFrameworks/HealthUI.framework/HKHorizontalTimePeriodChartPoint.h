/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSDate, NSNumber, NSString;

@interface HKHorizontalTimePeriodChartPoint : NSObject <HKChartPoint> {

	NSDate* _xStart;
	NSDate* _xEnd;
	NSNumber* _yValue;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,retain) NSDate * xStart;                                            //@synthesize xStart=_xStart - In the implementation block
@property (nonatomic,retain) NSDate * xEnd;                                              //@synthesize xEnd=_xEnd - In the implementation block
@property (nonatomic,retain) NSNumber * yValue;                                          //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(NSDate *)xEnd;
-(NSNumber *)yValue;
-(NSDate *)xStart;
-(NSString *)description;
-(id)allYValues;
-(void)setXEnd:(NSDate *)arg1 ;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(void)setYValue:(NSNumber *)arg1 ;
-(void)setXStart:(NSDate *)arg1 ;
@end

