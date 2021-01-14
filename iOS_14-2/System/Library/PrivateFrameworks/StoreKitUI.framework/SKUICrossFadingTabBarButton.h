/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIImageView, _Badge, NSString, UIImage;

@interface SKUICrossFadingTabBarButton : UIControl {

	UILabel* _selectedTitleLabel;
	UIImageView* _selectedImageView;
	UILabel* _standardTitleLabel;
	UIImageView* _standardImageView;
	_Badge* _badge;
	NSString* _title;
	UIImage* _image;
	UIImage* _selectedImage;
	double _selectionProgress;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;               //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) double selectionProgress;              //@synthesize selectionProgress=_selectionProgress - In the implementation block
-(void)tintColorDidChange;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)_positionBadge;
-(UIImage *)selectedImage;
-(void)_setBadgeValue:(id)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(NSString *)title;
-(void)setSelectionProgress:(double)arg1 ;
-(double)selectionProgress;
@end

