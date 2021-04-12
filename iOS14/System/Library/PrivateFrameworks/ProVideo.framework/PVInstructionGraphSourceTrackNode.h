/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>

@protocol PVStabilizationDelegate;
@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode {

	atomic<int> _sourceTrackloaded;
	BOOL _stabilizationDelegateRespondsToDidStabilize;
	int _trackID;
	int _dataTrackID;
	int _fillMode;
	id<PVStabilizationDelegate> _stabilizationDelegate;
	id _userContext;
	CGSize _clipNaturalSize;
	CGRect _cropRect;

}

@property (assign,nonatomic) BOOL stabilizationDelegateRespondsToDidStabilize;               //@synthesize stabilizationDelegateRespondsToDidStabilize=_stabilizationDelegateRespondsToDidStabilize - In the implementation block
@property (assign,nonatomic) int trackID;                                                    //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) int dataTrackID;                                                //@synthesize dataTrackID=_dataTrackID - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                                //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) int fillMode;                                                   //@synthesize fillMode=_fillMode - In the implementation block
@property (nonatomic,retain) id<PVStabilizationDelegate> stabilizationDelegate;              //@synthesize stabilizationDelegate=_stabilizationDelegate - In the implementation block
@property (nonatomic,retain) id userContext;                                                 //@synthesize userContext=_userContext - In the implementation block
@property (assign,nonatomic) CGSize clipNaturalSize;                                         //@synthesize clipNaturalSize=_clipNaturalSize - In the implementation block
+(id)newSourceTrackNode:(int)arg1 animation:(id)arg2 fillMode:(int)arg3 clipNaturalSize:(CGSize)arg4 ;
+(id)newSourceTrackNodeWithStabilizationDelegate:(id)arg1 userContext:(id)arg2 trackID:(int)arg3 dataTrackID:(int)arg4 transform:(CGAffineTransform)arg5 clipNaturalSize:(CGSize)arg6 ;
+(id)newSourceTrackNode:(int)arg1 transform:(CGAffineTransform)arg2 cropRect:(CGRect)arg3 clipNaturalSize:(CGSize)arg4 ;
+(id)newSourceTrackNodeWithStabilizationDelegate:(id)arg1 userContext:(id)arg2 trackID:(int)arg3 transform:(CGAffineTransform)arg4 clipNaturalSize:(CGSize)arg5 ;
-(id)userContext;
-(CGRect)cropRect;
-(BOOL)isPortrait;
-(void)setCropRect:(CGRect)arg1 ;
-(id)init;
-(int)fillMode;
-(void)setFillMode:(int)arg1 ;
-(id)requiredSourceTrackIDs;
-(int)trackID;
-(void)setUserContext:(id)arg1 ;
-(void)setTrackID:(int)arg1 ;
-(CGSize)clipNaturalSize;
-(void)setClipNaturalSize:(CGSize)arg1 ;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 returnLoadedEffects:(id)arg2 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV22)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>*)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(BOOL)isPassthru;
-(void)unloadIGNode;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)setDataTrackID:(int)arg1 ;
-(void)setStabilizationDelegate:(id<PVStabilizationDelegate>)arg1 ;
-(void)setStabilizationDelegateRespondsToDidStabilize:(BOOL)arg1 ;
-(id<PVStabilizationDelegate>)stabilizationDelegate;
-(BOOL)stabilizationDelegateRespondsToDidStabilize;
-(int)dataTrackID;
@end

