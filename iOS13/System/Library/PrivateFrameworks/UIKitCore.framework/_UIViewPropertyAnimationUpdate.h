/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSValue;

@interface _UIViewPropertyAnimationUpdate : NSObject {

	BOOL _additive;
	BOOL _implicit;
	NSString* _propertyName;
	NSValue* _fromValue;
	NSValue* _toValue;
	double _startTime;
	double _duration;
	double _delay;

}

@property (getter=isImplicit,nonatomic,readonly) BOOL implicit;              //@synthesize implicit=_implicit - In the implementation block
@property (nonatomic,readonly) NSString * propertyName;                      //@synthesize propertyName=_propertyName - In the implementation block
@property (getter=isAdditive,nonatomic,readonly) BOOL additive;              //@synthesize additive=_additive - In the implementation block
@property (nonatomic,retain) NSValue * fromValue;                            //@synthesize fromValue=_fromValue - In the implementation block
@property (nonatomic,retain) NSValue * toValue;                              //@synthesize toValue=_toValue - In the implementation block
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                   //@synthesize delay=_delay - In the implementation block
-(id)init;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)initWithPropertyName:(id)arg1 implicit:(BOOL)arg2 additive:(BOOL)arg3 ;
-(NSString *)propertyName;
-(BOOL)isAdditive;
-(NSValue *)fromValue;
-(void)setFromValue:(NSValue *)arg1 ;
-(NSValue *)toValue;
-(void)setToValue:(NSValue *)arg1 ;
-(BOOL)isImplicit;
@end

