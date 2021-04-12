/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@class GEONavigationProxy, MNCompanionNavigationAdapter, NSString;

@interface MNNavigationProxyUpdater : NSObject <MNNavigationSessionObserver> {

	GEONavigationProxy* _navigationProxy;
	MNCompanionNavigationAdapter* _companionNavigationAdapter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(id)init;
-(void)setVoiceVolume:(unsigned long long)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 didUpdateStepNameInfo:(id)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5 ;
-(void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 ;
-(void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2 ;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4 ;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3 ;
-(void)navigationSession:(id)arg1 triggerHaptics:(int)arg2 ;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2 ;
-(void)enteredRoutePreviewWithTransportType:(int)arg1 ;
-(void)navigationSessionStopped:(id)arg1 ;
-(void)navigationSessionStarted:(id)arg1 navigationType:(int)arg2 ;
-(void)updateClusteredSectionSelectedRideForNavigationSession:(id)arg1 ;
-(int)_geoNavigationTypeForNavigationType:(int)arg1 ;
@end

