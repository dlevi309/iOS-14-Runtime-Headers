/*
* Generated on Thursday, January 14, 2021 at 2:21:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextRange.h>

@class NSArray;

@interface WKTextRange : UITextRange {

	CGRect _startRect;
	CGRect _endRect;
	BOOL _isNone;
	BOOL _isRange;
	BOOL _isEditable;
	NSArray* _selectionRects;
	unsigned long long _selectedTextLength;

}

@property (assign,nonatomic) CGRect startRect;                                   //@synthesize startRect=_startRect - In the implementation block
@property (assign,nonatomic) CGRect endRect;                                     //@synthesize endRect=_endRect - In the implementation block
@property (assign,nonatomic) BOOL isNone;                                        //@synthesize isNone=_isNone - In the implementation block
@property (assign,nonatomic) BOOL isRange;                                       //@synthesize isRange=_isRange - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                                    //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) unsigned long long selectedTextLength;              //@synthesize selectedTextLength=_selectedTextLength - In the implementation block
@property (nonatomic,copy) NSArray * selectionRects;                             //@synthesize selectionRects=_selectionRects - In the implementation block
+(id)textRangeWithState:(BOOL)arg1 isRange:(BOOL)arg2 isEditable:(BOOL)arg3 startRect:(CGRect)arg4 endRect:(CGRect)arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned long long)arg7 ;
-(BOOL)isEditable;
-(void)setIsEditable:(BOOL)arg1 ;
-(BOOL)_isCaret;
-(id)end;
-(void)setStartRect:(CGRect)arg1 ;
-(id)start;
-(BOOL)isNone;
-(unsigned long long)selectedTextLength;
-(id)description;
-(BOOL)_isRanged;
-(void)setIsNone:(BOOL)arg1 ;
-(void)setSelectionRects:(NSArray *)arg1 ;
-(void)setEndRect:(CGRect)arg1 ;
-(BOOL)isRange;
-(BOOL)isEmpty;
-(void)setIsRange:(BOOL)arg1 ;
-(NSArray *)selectionRects;
-(CGRect)endRect;
-(CGRect)startRect;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSelectedTextLength:(unsigned long long)arg1 ;
@end

