/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, _CLPlaceInference;

@interface CLVisit : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _arrivalDate;
	NSDate* _departureDate;
	double _horizontalAccuracy;
	NSDate* _detectionDate;
	_CLPlaceInference* __placeInference;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) BOOL hasArrivalDate; 
@property (nonatomic,readonly) BOOL hasDepartureDate; 
@property (nonatomic,copy,readonly) NSDate * detectionDate;                      //@synthesize detectionDate=_detectionDate - In the implementation block
@property (nonatomic,readonly) _CLPlaceInference * _placeInference;              //@synthesize _placeInference=__placeInference - In the implementation block
@property (nonatomic,copy,readonly) NSDate * arrivalDate;                        //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * departureDate;                      //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;                //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                        //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
-(CLLocationCoordinate2D)coordinate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)arrivalDate;
-(_CLPlaceInference *)_placeInference;
-(BOOL)hasDepartureDate;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 placeInference:(id)arg6 ;
-(id)description;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(double)horizontalAccuracy;
-(NSDate *)departureDate;
-(NSDate *)detectionDate;
-(BOOL)hasArrivalDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

