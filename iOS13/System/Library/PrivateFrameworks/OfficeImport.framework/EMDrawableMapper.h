/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDrawableMapper.h>

@interface EMDrawableMapper : CMDrawableMapper {

	double* mRowGrid;
	double* mColumnGrid;

}
+(BOOL)isAnchorRelative:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)setBoundingBox;
-(void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDiagramAt:(id)arg1 withState:(id)arg2 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
-(void)mapBounds;
-(id)initWithChartDrawable:(id)arg1 box:(CGRect)arg2 parent:(id)arg3 ;
-(id)worksheetMapper;
-(void)mapChartAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)getImageRect;
-(CGRect)mapAnchorToRect:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 ;
-(CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 start:(BOOL)arg4 relative:(BOOL)arg5 ;
-(id)initWithOADDrawable:(id)arg1 parent:(id)arg2 ;
-(id)initWithOADDrawable:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 ;
-(id)workbookMapper;
@end

