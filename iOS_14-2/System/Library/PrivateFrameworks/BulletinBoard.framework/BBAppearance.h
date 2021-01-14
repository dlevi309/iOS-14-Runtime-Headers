/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BBColor, BBImage;

@interface BBAppearance : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	BBColor* _titleColor;
	BBImage* _image;
	BBColor* _color;
	long long _style;
	NSString* _viewClassName;

}

@property (nonatomic,copy) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) BBColor * titleColor;                  //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) BBImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) BBColor * color;                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * viewClassName;              //@synthesize viewClassName=_viewClassName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)appearanceWithTitle:(id)arg1 ;
-(BBColor *)titleColor;
-(void)setImage:(BBImage *)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(BBColor *)color;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BBImage *)image;
-(NSString *)viewClassName;
-(void)setColor:(BBColor *)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setViewClassName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTitleColor:(BBColor *)arg1 ;
@end

