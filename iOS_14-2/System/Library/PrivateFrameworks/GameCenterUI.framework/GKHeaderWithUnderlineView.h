/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView, UIImageView, NSMutableDictionary, NSArray;

@interface GKHeaderWithUnderlineView : UICollectionReusableView {

	BOOL _underlineHasRightMargin;
	BOOL _isPinned;
	BOOL _didSetupConstraints;
	UIView* _underlineView;
	UIImageView* _shadowView;
	NSMutableDictionary* _metrics;
	NSArray* _gutterConstraints;
	double _leadingMargin;
	double _trailingMargin;
	UIView* _pinnedBackdropView;

}

@property (assign,nonatomic) BOOL isPinned;                              //@synthesize isPinned=_isPinned - In the implementation block
@property (nonatomic,retain) UIView * pinnedBackdropView;                //@synthesize pinnedBackdropView=_pinnedBackdropView - In the implementation block
@property (assign,nonatomic) BOOL didSetupConstraints;                   //@synthesize didSetupConstraints=_didSetupConstraints - In the implementation block
@property (nonatomic,retain) UIView * underlineView;                     //@synthesize underlineView=_underlineView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowView;                   //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic) BOOL underlineHasRightMargin;               //@synthesize underlineHasRightMargin=_underlineHasRightMargin - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSArray * gutterConstraints;                //@synthesize gutterConstraints=_gutterConstraints - In the implementation block
@property (assign,nonatomic) double leadingMargin;                       //@synthesize leadingMargin=_leadingMargin - In the implementation block
@property (assign,nonatomic) double trailingMargin;                      //@synthesize trailingMargin=_trailingMargin - In the implementation block
+(void)initialize;
+(id)phoneMetrics;
+(id)padMetrics;
+(id)macMetrics;
+(BOOL)requiresConstraintBasedLayout;
-(void)_UIAppearance_setMetrics:(id)arg1 ;
-(void)setMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metrics;
-(BOOL)isPinned;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUnderlineView:(UIView *)arg1 ;
-(UIImageView *)shadowView;
-(void)updateConstraints;
-(double)leadingMargin;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)allowsVibrancy;
-(double)trailingMargin;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(void)setShadowView:(UIImageView *)arg1 ;
-(void)updateGutterConstraints;
-(NSArray *)gutterConstraints;
-(void)setGutterConstraints:(NSArray *)arg1 ;
-(void)establishConstraints;
-(UIView *)underlineView;
-(void)setIsPinned:(BOOL)arg1 ;
-(void)pinningStateChangedTo:(BOOL)arg1 ;
-(void)setUnderlineHasRightMargin:(BOOL)arg1 ;
-(BOOL)underlineHasRightMargin;
-(UIView *)pinnedBackdropView;
-(void)setPinnedBackdropView:(UIView *)arg1 ;
-(BOOL)didSetupConstraints;
-(void)setDidSetupConstraints:(BOOL)arg1 ;
-(BOOL)drawsUnderline;
@end

