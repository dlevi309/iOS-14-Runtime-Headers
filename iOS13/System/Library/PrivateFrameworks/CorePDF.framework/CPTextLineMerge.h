/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


@class NSMutableArray;

@interface CPTextLineMerge : NSObject {

	NSMutableArray* avail;

}
-(void)mergeLinesIn:(id)arg1 ;
-(BOOL)fits:(id)arg1 into:(id)arg2 ;
-(void)mergeColumn:(id)arg1 ;
-(void)addInterval:(id)arg1 to:(id)arg2 ;
-(void)mergeLinesInInterval:(id)arg1 from:(id)arg2 ;
-(void)detachDropCaps:(id)arg1 to:(id)arg2 ;
-(double)averageHeight:(id)arg1 ;
-(unsigned)countOverlapsOfLineAtIndex:(unsigned)arg1 in:(id)arg2 ;
-(id)findLineFor:(id)arg1 in:(id)arg2 ;
-(BOOL)hasOverlappingLines;
-(void)makeOverlappingLinesTo:(id)arg1 ;
-(void)dropCaps:(id)arg1 to:(id)arg2 ;
-(void)eliminate:(id)arg1 ;
-(void)mergeByColumn:(id)arg1 ;
-(void)removeOverlapping:(id)arg1 ;
@end

