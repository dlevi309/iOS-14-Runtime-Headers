/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UILabel.h>

@class NSString, NSAttributedString;

@interface ICLabel : UILabel {

	NSString* _string;
	NSAttributedString* _attributedString;
	double _spacing;
	double _paragraphSpacing;
	double _lineHeight;

}

@property (nonatomic,copy) NSString * string;                                  //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) double spacing;                                   //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double paragraphSpacing;                          //@synthesize paragraphSpacing=_paragraphSpacing - In the implementation block
@property (assign,nonatomic) double lineHeight;                                //@synthesize lineHeight=_lineHeight - In the implementation block
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(double)spacing;
-(double)paragraphSpacing;
-(void)setParagraphSpacing:(double)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setSpacing:(double)arg1 ;
-(double)lineHeight;
-(void)updateText;
-(void)setLineHeight:(double)arg1 ;
@end

