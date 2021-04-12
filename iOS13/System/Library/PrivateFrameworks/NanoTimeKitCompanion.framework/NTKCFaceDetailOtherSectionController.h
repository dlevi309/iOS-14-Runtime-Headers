/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>
#import <libobjc.A.dylib/NTKCFaceDetailToggleCellDelegate.h>

@protocol NTKCFaceDetailOtherSectionDelegate;
@class NTKCFaceDetailMonogramComplicationCell, NTKCFaceDetailMonogramEditCell, NTKCFaceDetailShowSecondsCell, NSString;

@interface NTKCFaceDetailOtherSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate> {

	id<NTKCFaceDetailOtherSectionDelegate> _delegate;
	NTKCFaceDetailMonogramComplicationCell* _monogramCell;
	NTKCFaceDetailMonogramEditCell* _monogramEditCell;
	NTKCFaceDetailShowSecondsCell* _showSecondsCell;

}

@property (nonatomic,retain) NTKCFaceDetailMonogramComplicationCell * monogramCell;               //@synthesize monogramCell=_monogramCell - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailMonogramEditCell * monogramEditCell;                   //@synthesize monogramEditCell=_monogramEditCell - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailShowSecondsCell * showSecondsCell;                     //@synthesize showSecondsCell=_showSecondsCell - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailOtherSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NTKCFaceDetailOtherSectionDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailOtherSectionDelegate>)arg1 ;
-(void)_commonInit;
-(id)titleForHeader;
-(void)toggleCell:(id)arg1 didToggle:(BOOL)arg2 ;
-(void)faceDidChange;
-(void)didSelectRow:(long long)arg1 ;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(void)addMonogramRowForSlot:(id)arg1 ;
-(void)addShowSecondsRow:(id)arg1 ;
-(void)_addMonogramEditRow;
-(void)removeMonogramRow;
-(void)setMonogramCell:(NTKCFaceDetailMonogramComplicationCell *)arg1 ;
-(void)setMonogramEditCell:(NTKCFaceDetailMonogramEditCell *)arg1 ;
-(void)removeShowSecondsRow;
-(void)setShowSecondsCell:(NTKCFaceDetailShowSecondsCell *)arg1 ;
-(void)_removeMonogramEditRow;
-(NTKCFaceDetailMonogramComplicationCell *)monogramCell;
-(NTKCFaceDetailMonogramEditCell *)monogramEditCell;
-(NTKCFaceDetailShowSecondsCell *)showSecondsCell;
@end

