/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSSet;

@interface _HKSourceFilter : _HKFilter {

	BOOL _includesLocalDevice;
	NSSet* _sources;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) NSSet * sources;                              //@synthesize sources=_sources - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)_filterForComparisonWithKeyPath:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 ;
+(id)_filterForInOperatorWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3 ;
+(id)filterWithSources:(id)arg1 operatorType:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(NSSet *)sources;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end

