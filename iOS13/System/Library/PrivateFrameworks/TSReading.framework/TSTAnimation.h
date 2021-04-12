/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTLayout;

@interface TSTAnimation : NSObject <NSCopying> {

	TSTLayout* mLayout;
	int mKind;
	SCD_Struct_TS142* mCellRanges;
	unsigned long long mCellRangeCount;
	unsigned long long mStageCount;
	unsigned long long mStage;
	BOOL mFinal;
	BOOL mByColumn;
	BOOL mByRow;
	BOOL mByCell;
	BOOL mByContent;
	BOOL mByCellRange;
	BOOL mByMissingCellRange;
	BOOL mReverse;
	BOOL mShowsTableChrome;
	BOOL mShowsOverlayLayers;
	BOOL mExpandBackgroundFill;
	BOOL mDrawsBlackAndWhite;

}

@property (readonly) unsigned long long stageCount; 
@property (readonly) unsigned long long stage; 
@property (readonly) BOOL final; 
@property (assign) BOOL showsTableChrome; 
@property (assign) BOOL showsOverlayLayers; 
@property (assign) BOOL expandBackgroundFill; 
@property (assign) BOOL drawsBlackAndWhite; 
@property (readonly) unsigned long long cellRangeCount; 
@property (readonly) BOOL drawTableName; 
@property (readonly) BOOL drawTableBackground; 
@property (readonly) BOOL drawCellBackground; 
@property (readonly) BOOL drawCellContent; 
@property (readonly) BOOL clipStrokes; 
@property (readonly) BOOL drawStrokes; 
@property (readonly) BOOL enabled; 
+(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
+(id)newAnimationWithLayout:(id)arg1 andCellRange:(SCD_Struct_TS142)arg2 ;
+(id)textureDeliveryStylesLocalized:(BOOL)arg1 ;
+(id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned long long)arg2 ;
+(unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)arg1 andTable:(id)arg2 ;
+(BOOL)deliveryStyleSupportedForExport:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(unsigned long long)stage;
-(BOOL)final;
-(BOOL)drawTableName;
-(unsigned long long)cellRangeCount;
-(SCD_Struct_TS142)cellRangeAtIndex:(unsigned long long)arg1 ;
-(BOOL)drawTableBackground;
-(BOOL)drawCellBackground;
-(BOOL)expandBackgroundFill;
-(BOOL)drawCellContent;
-(BOOL)drawStrokes;
-(BOOL)drawsBlackAndWhite;
-(void)addCellRange:(SCD_Struct_TS142)arg1 ;
-(void)setStage:(unsigned long long)arg1 andFinal:(BOOL)arg2 ;
-(void)clearCellRanges;
-(BOOL)clipStrokes;
-(unsigned long long)stageCount;
-(BOOL)showsTableChrome;
-(void)setShowsTableChrome:(BOOL)arg1 ;
-(BOOL)showsOverlayLayers;
-(void)setShowsOverlayLayers:(BOOL)arg1 ;
-(void)setExpandBackgroundFill:(BOOL)arg1 ;
-(void)setDrawsBlackAndWhite:(BOOL)arg1 ;
@end

