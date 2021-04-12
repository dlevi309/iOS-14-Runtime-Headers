/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@interface MiroVideoRangeFreezeInfo : MiroFreezeInfo {

	BOOL _added;
	BOOL _removed;
	BOOL _used;
	BOOL _trimmed;
	BOOL _userModified;
	float _normalGain;
	float _dimmedGain;
	unsigned long long _mute;
	double _start;
	double _duration;

}

@property (assign,nonatomic) BOOL added;                           //@synthesize added=_added - In the implementation block
@property (assign,nonatomic) BOOL removed;                         //@synthesize removed=_removed - In the implementation block
@property (assign,nonatomic) BOOL used;                            //@synthesize used=_used - In the implementation block
@property (assign,nonatomic) BOOL trimmed;                         //@synthesize trimmed=_trimmed - In the implementation block
@property (assign,nonatomic) unsigned long long mute;              //@synthesize mute=_mute - In the implementation block
@property (nonatomic,readonly) float gain; 
@property (assign,nonatomic) float normalGain;                     //@synthesize normalGain=_normalGain - In the implementation block
@property (assign,nonatomic) float dimmedGain;                     //@synthesize dimmedGain=_dimmedGain - In the implementation block
@property (assign,nonatomic) double start;                         //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL userModified;                    //@synthesize userModified=_userModified - In the implementation block
-(BOOL)used;
-(float)gain;
-(BOOL)added;
-(void)setUsed:(BOOL)arg1 ;
-(void)setRemoved:(BOOL)arg1 ;
-(id)dataRepresentation;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(double)start;
-(void)setMute:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)removed;
-(id)description;
-(BOOL)trimmed;
-(unsigned long long)mute;
-(void)setAdded:(BOOL)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStart:(double)arg1 ;
-(void)setTrimmed:(BOOL)arg1 ;
-(BOOL)userModified;
-(void)setNormalGain:(float)arg1 ;
-(void)setDimmedGain:(float)arg1 ;
-(void)setUserModified:(BOOL)arg1 ;
-(float)normalGain;
-(float)dimmedGain;
@end

