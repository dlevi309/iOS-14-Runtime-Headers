/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKNavigationMonitor : _DKMonitor {

	BOOL _enabled;
	BOOL _navigating;
	int _startedToken;
	int _stoppedToken;

}

@property (assign,nonatomic) BOOL enabled;                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL navigating;               //@synthesize navigating=_navigating - In the implementation block
@property (assign,nonatomic) int startedToken;              //@synthesize startedToken=_startedToken - In the implementation block
@property (assign,nonatomic) int stoppedToken;              //@synthesize stoppedToken=_stoppedToken - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(void)setIsNavigating:(BOOL)arg1 ;
-(id)loadState;
-(void)saveState;
-(BOOL)enabled;
-(void)synchronouslyReflectCurrentValue;
-(void)setStartedToken:(int)arg1 ;
-(void)start;
-(void)setNavigationStatus:(BOOL)arg1 ;
-(void)setStoppedToken:(int)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)stop;
-(void)deactivate;
-(void)setNavigating:(BOOL)arg1 ;
-(int)stoppedToken;
-(BOOL)navigating;
-(int)startedToken;
-(void)dealloc;
@end

