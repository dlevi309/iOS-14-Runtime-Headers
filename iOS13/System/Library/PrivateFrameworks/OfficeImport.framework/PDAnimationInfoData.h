/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class PDBuild, PDSequentialTimeNode, OADDrawable;

@interface PDAnimationInfoData : NSObject {

	unsigned mOrder;
	PDBuild* mBuild;
	PDSequentialTimeNode* mSequentialTimeNodeData;
	OADDrawable* mDrawable;

}
-(id)data;
-(unsigned)order;
-(id)build;
-(id)drawable;
-(id)initWithTarget:(id)arg1 presetClass:(int)arg2 presetId:(int)arg3 triggerType:(int)arg4 iterateType:(int)arg5 delay:(double)arg6 direction:(double)arg7 order:(unsigned)arg8 groupId:(id)arg9 build:(id)arg10 ;
@end

