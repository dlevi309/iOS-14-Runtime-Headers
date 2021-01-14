/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class UIColor;

@interface SKUIAnalyzedImageColors : NSObject {

	BOOL _isBackgroundLight;
	UIColor* _backgroundColor;
	UIColor* _textPrimaryColor;
	UIColor* _textSecondaryColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textPrimaryColor;                //@synthesize textPrimaryColor=_textPrimaryColor - In the implementation block
@property (nonatomic,retain) UIColor * textSecondaryColor;              //@synthesize textSecondaryColor=_textSecondaryColor - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundLight;                    //@synthesize isBackgroundLight=_isBackgroundLight - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)textPrimaryColor;
-(UIColor *)textSecondaryColor;
-(BOOL)isBackgroundLight;
-(void)setTextPrimaryColor:(UIColor *)arg1 ;
-(void)setTextSecondaryColor:(UIColor *)arg1 ;
-(void)setIsBackgroundLight:(BOOL)arg1 ;
@end

