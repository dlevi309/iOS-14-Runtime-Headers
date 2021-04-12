/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, GEOComposedRouteSection, NSArray, GEOMapRequest;

@interface GEOSnappedRoutePath : NSObject {

	GEOComposedRoute* _route;
	GEOComposedRouteSection* _section;
	NSArray* _edges;
	GEOMapRequest* _edgeSearchRequest;
	CFSetRef _observers;
	unique_ptr<geo::RouteMapMatchingSection, std::__1::default_delete<geo::RouteMapMatchingSection> >* _mapMatchingSection;
	BOOL _hasCompletedMapMatching;
	unsigned _routeStartIndex;
	unsigned _routeEndIndex;
	unsigned _unsnappedPointCount;
	SCD_Struct_GE187* _unsnappedPoints;

}

@property (readonly) unsigned routeStartIndex;                                       //@synthesize routeStartIndex=_routeStartIndex - In the implementation block
@property (readonly) unsigned routeEndIndex;                                         //@synthesize routeEndIndex=_routeEndIndex - In the implementation block
@property (readonly) BOOL isMapMatching; 
@property (readonly) BOOL isMapMatched; 
@property (readonly) BOOL hasCompletedMapMatching; 
@property (readonly) NSArray * edges;                                                //@synthesize edges=_edges - In the implementation block
@property (__weak,readonly) GEOComposedRouteSection * section;                       //@synthesize section=_section - In the implementation block
@property (readonly) const RouteMapMatchingSection* mapMatchingSection; 
-(void)addObserver:(id)arg1 ;
-(GEOComposedRouteSection *)section;
-(unsigned)routeStartIndex;
-(unsigned)routeEndIndex;
-(const RouteMapMatchingSection*)mapMatchingSection;
-(BOOL)isMapMatching;
-(id)initWithRoute:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned)arg3 routeEndIndex:(unsigned)arg4 ;
-(BOOL)hasCompletedMapMatching;
-(void)matchWithDecoder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)edges;
-(id)description;
-(BOOL)removeObserver:(id)arg1 ;
-(BOOL)hasObserver:(id)arg1 ;
-(BOOL)isMapMatched;
-(float)_calculateEdgeLengthFrom:(const Matrix<float, 2, 1>*)arg1 to:(const Matrix<float, 2, 1>*)arg2 startCoord:(const PolylineCoordinate*)arg3 endCoord:(const PolylineCoordinate*)arg4 ;
-(void)_debugPrintEdge:(id)arg1 ;
-(void)dealloc;
@end

