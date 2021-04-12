/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NFLWidgetProperties : NSObject <NSCopying> {

	BOOL _insetMargins;
	BOOL _defaultForYou;
	double _containerHeight;
	double _itemSpacing;
	double _topMarginInset;
	CGSize _gridSize;
	CGSize _itemSize;

}

@property (assign,nonatomic) double containerHeight;              //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) CGSize gridSize;                     //@synthesize gridSize=_gridSize - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                     //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double itemSpacing;                  //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) BOOL insetMargins;                   //@synthesize insetMargins=_insetMargins - In the implementation block
@property (assign,nonatomic) double topMarginInset;               //@synthesize topMarginInset=_topMarginInset - In the implementation block
@property (assign,nonatomic) BOOL defaultForYou;                  //@synthesize defaultForYou=_defaultForYou - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(double)itemSpacing;
-(CGSize)itemSize;
-(void)setItemSize:(CGSize)arg1 ;
-(CGSize)gridSize;
-(void)setGridSize:(CGSize)arg1 ;
-(void)setContainerHeight:(double)arg1 ;
-(double)containerHeight;
-(BOOL)insetMargins;
-(void)setInsetMargins:(BOOL)arg1 ;
-(void)setTopMarginInset:(double)arg1 ;
-(double)topMarginInset;
-(void)setDefaultForYou:(BOOL)arg1 ;
-(BOOL)defaultForYou;
@end

