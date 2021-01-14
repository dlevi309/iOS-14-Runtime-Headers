/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class NSUUID, UIImageView, UILabel, UIButton, NSString;

@interface CKTUConversationBalloonView : CKColoredBalloonView {

	BOOL _animating;
	NSUUID* _tuConversationUUID;
	unsigned long long _state;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _statusLabel;
	UILabel* _durationLabel;
	UIButton* _joinButton;
	NSString* _joinButtonText_TestingOverride;

}

@property (assign,nonatomic) unsigned long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                          //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UILabel * durationLabel;                              //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,retain) UIButton * joinButton;                                //@synthesize joinButton=_joinButton - In the implementation block
@property (assign,nonatomic) BOOL animating;                                       //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) BOOL shouldRenderJoinButtonAsIcon; 
@property (nonatomic,copy) NSString * joinButtonText_TestingOverride;              //@synthesize joinButtonText_TestingOverride=_joinButtonText_TestingOverride - In the implementation block
@property (nonatomic,retain) NSUUID * tuConversationUUID;                          //@synthesize tuConversationUUID=_tuConversationUUID - In the implementation block
+(CGSize)facetimeIconSize;
+(id)facetimeImageForSize:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(void)prepareForDisplay;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(char)color;
-(BOOL)animating;
-(void)prepareForReuse;
-(void)configureForTUConversationChatItem:(id)arg1 ;
-(void)layoutSubviews;
-(UIButton *)joinButton;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(UILabel *)statusLabel;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)_joinButtonTapped:(id)arg1 ;
-(void)setJoinButton:(UIButton *)arg1 ;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)setDurationLabel:(UILabel *)arg1 ;
-(BOOL)shouldRenderJoinButtonAsIcon;
-(UILabel *)durationLabel;
-(id)_joinButtonText;
-(void)_updateStatusLabelForDuration;
-(id)tuConversation;
-(void)configureForCurrentState;
-(NSUUID *)tuConversationUUID;
-(id)_joinStateStatusString;
-(id)_currentCall;
-(BOOL)wantsGradient;
-(NSString *)joinButtonText_TestingOverride;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(BOOL)joinButtonIsShowingImageContent;
-(BOOL)joinButtonIsShowingTextContent;
-(void)setTuConversationUUID:(NSUUID *)arg1 ;
-(void)setJoinButtonText_TestingOverride:(NSString *)arg1 ;
@end

