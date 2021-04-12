/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLPlace : NSObject <MKAnnotation, NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	NSURL* _pictureURL;
	NSString* _category;
	double _latitude;
	double _longitude;
	double _distance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (retain) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (retain) NSURL * pictureURL;                                         //@synthesize pictureURL=_pictureURL - In the implementation block
@property (retain) NSString * category;                                        //@synthesize category=_category - In the implementation block
@property (assign) double latitude;                                            //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longitude;                                           //@synthesize longitude=_longitude - In the implementation block
@property (assign) double distance;                                            //@synthesize distance=_distance - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(id)encodableProperties;
-(NSURL *)pictureURL;
-(void)setPictureURL:(NSURL *)arg1 ;
@end

