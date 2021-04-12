/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVRCTouchEvent : NSObject <NSSecureCoding> {

	double _timestamp;
	long long _finger;
	long long _phase;
	CGPoint _digitizerLocation;

}

@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long finger;                       //@synthesize finger=_finger - In the implementation block
@property (nonatomic,readonly) long long phase;                        //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) CGPoint digitizerLocation;              //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(long long)phase;
-(CGPoint)digitizerLocation;
-(long long)finger;
-(id)_initWithTimestamp:(double)arg1 finger:(long long)arg2 phase:(long long)arg3 digitizerLocation:(CGPoint)arg4 ;
@end

