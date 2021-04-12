/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETMessage.h>

@class SKNode, SKSpriteNode, SKEmitterNode, SKShader, SKUniform, SKTexture;

@interface ETHeartbeatMessage : ETMessage {

	SKNode* _heartNode;
	SKSpriteNode* _heartLines;
	SKSpriteNode* _heart;
	SKEmitterNode* _heartWisp;
	SKShader* _linesShader;
	SKShader* _heartShader;
	SKUniform* _speedUniform;
	SKUniform* _warpedTexAtlasUniform;
	SKUniform* _burTexUniform;
	SKUniform* _noiseTexUniform;
	SKUniform* _scaleUniform;
	SKUniform* _shaderTimeUniform;
	SKNode* _heartScale;
	float _hapticLoopPeriod;
	SKTexture* _heartbreakAtlas;
	BOOL _broken;
	float _beatsPerMinute;
	int _duration;
	float _scale;
	double _rotation;
	double _heartbreakTime;
	CGPoint _normalizedCenter;

}

@property (assign,nonatomic) float beatsPerMinute;                       //@synthesize beatsPerMinute=_beatsPerMinute - In the implementation block
@property (assign,nonatomic) int duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float scale;                                //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGPoint normalizedCenter;                   //@synthesize normalizedCenter=_normalizedCenter - In the implementation block
@property (assign,nonatomic) double rotation;                            //@synthesize rotation=_rotation - In the implementation block
@property (getter=isBroken,nonatomic,readonly) BOOL broken;              //@synthesize broken=_broken - In the implementation block
@property (nonatomic,readonly) double heartbreakTime;                    //@synthesize heartbreakTime=_heartbreakTime - In the implementation block
+(unsigned short)messageType;
-(id)description;
-(float)scale;
-(int)duration;
-(void)setScale:(float)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(void)setDuration:(int)arg1 ;
-(id)archiveData;
-(void)stopPlaying;
-(float)beatsPerMinute;
-(void)setBeatsPerMinute:(float)arg1 ;
-(CGPoint)normalizedCenter;
-(void)setNormalizedCenter:(CGPoint)arg1 ;
-(void)setMute:(BOOL)arg1 ;
-(double)heartbreakTime;
-(id)initWithArchiveData:(id)arg1 ;
-(id)messageTypeAsString;
-(double)messageDuration;
-(void)displayInScene:(id)arg1 ;
-(BOOL)isBroken;
-(void)breakHeart;
-(void)startHeartbeat:(id)arg1 ;
-(void)_stopAudioPlayback;
-(void)_startAudioPlayback;
-(void)_displayInScene:(id)arg1 useDuration:(BOOL)arg2 ;
-(void)_displayInScene:(id)arg1 useDuration:(BOOL)arg2 fastStart:(BOOL)arg3 ;
-(void)playBeatWithDuration:(double)arg1 ;
-(void)startHeartbeat:(id)arg1 fastStart:(BOOL)arg2 ;
-(void)moveHeartNodeByX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
@end

