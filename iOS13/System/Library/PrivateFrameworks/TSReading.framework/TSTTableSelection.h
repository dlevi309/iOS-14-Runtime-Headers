/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSelection.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSReading/TSDTextSelection.h>

@class TSTCellRegion, NSString;

@interface TSTTableSelection : TSKSelection <NSCopying, TSDTextSelection> {

	int mSelectionType;
	SCD_Struct_TS140 mAnchorCellID;
	TSTCellRegion* mCellRegion;
	TSTCellRegion* mBaseRegion;
	SCD_Struct_TS140 mCursorCellID;
	NSRange mSearchReferenceRange;

}

@property (nonatomic,readonly) TSTCellRegion * cellRegion; 
@property (nonatomic,readonly) int selectionType; 
@property (nonatomic,readonly) SCD_Struct_TS140 anchorCellID; 
@property (nonatomic,readonly) TSTCellRegion * baseRegion; 
@property (nonatomic,readonly) SCD_Struct_TS140 cursorCellID; 
@property (assign,nonatomic) NSRange searchReferenceRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) BOOL isAtEndOfLine; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(BOOL)isEqualToSelection:(id)arg1 ;
-(int)selectionType;
-(BOOL)isAtEndOfLine;
-(TSTCellRegion *)cellRegion;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS140)arg3 cursorCellID:(SCD_Struct_TS140)arg4 baseRegion:(id)arg5 selectionType:(int)arg6 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS140)arg3 cursorCellID:(SCD_Struct_TS140)arg4 baseRegion:(id)arg5 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS140)arg3 cursorCellID:(SCD_Struct_TS140)arg4 selectionType:(int)arg5 ;
-(id)initWithTableModel:(id)arg1 cellRange:(SCD_Struct_TS142)arg2 type:(int)arg3 anchorCellID:(SCD_Struct_TS140)arg4 cursorCellID:(SCD_Struct_TS140)arg5 ;
-(id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3 ;
-(id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned short)arg3 ;
-(SCD_Struct_TS140)anchorCellID;
-(SCD_Struct_TS140)cursorCellID;
-(TSTCellRegion *)baseRegion;
-(id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(BOOL)arg4 suppressWrap:(BOOL)arg5 ;
-(id)selectionByExtendingWithCellRange:(SCD_Struct_TS142)arg1 inTable:(id)arg2 selectionType:(int)arg3 cursorCell:(SCD_Struct_TS140)arg4 ;
-(id)initWithTableModel:(id)arg1 andCellID:(SCD_Struct_TS140)arg2 ;
-(void)enumerateSelectedCellsInTable:(id)arg1 withFlags:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(SCD_Struct_TS140)arg3 cursorCellID:(SCD_Struct_TS140)arg4 ;
-(id)initWithTableModel:(id)arg1 selectionType:(int)arg2 ;
-(id)initWithTableModel:(id)arg1 andCellRange:(SCD_Struct_TS142)arg2 ;
-(id)initWithTableModel:(id)arg1 cellID:(SCD_Struct_TS140)arg2 selectionType:(int)arg3 ;
-(id)initWithTableModel:(id)arg1 rowOrColumn:(int)arg2 index:(unsigned)arg3 count:(unsigned)arg4 ;
-(id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(SCD_Struct_TS86)arg3 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 ;
-(id)selectionByAddingCellRange:(SCD_Struct_TS142)arg1 inTable:(id)arg2 withAnchor:(SCD_Struct_TS140)arg3 cursor:(SCD_Struct_TS140)arg4 selectionType:(int)arg5 ;
-(id)selectionByRemovingCellRange:(SCD_Struct_TS142)arg1 inTable:(id)arg2 withAnchor:(SCD_Struct_TS140)arg3 cursor:(SCD_Struct_TS140)arg4 selectionType:(int)arg5 ;
-(id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(BOOL)arg4 ;
-(void)enumerateSelectedCellsInTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insert:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3 ;
-(void)remove:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3 ;
-(BOOL)areCellsInTheSameRegionInTable:(id)arg1 ;
-(BOOL)containsSelection:(id)arg1 ;
-(BOOL)containsCell:(SCD_Struct_TS140)arg1 ;
-(BOOL)intersectsPartialMergeRangeInTable:(id)arg1 ;
-(NSRange)searchReferenceRange;
-(void)setSearchReferenceRange:(NSRange)arg1 ;
@end

