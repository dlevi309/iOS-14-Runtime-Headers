/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKMemoizingComponent.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFModuleModel, NSString;

@interface WFModuleComponent : CKMemoizingComponent <WFParameterEventObserver, WFActionEventObserver> {

	WFModuleModel* _model;

}

@property (nonatomic,readonly) WFModuleModel * model;               //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 navigationContext:(id)arg2 ;
-(WFModuleModel *)model;
-(void)actionNameDidChange:(id)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)parameterAttributesDidChange:(id)arg1 ;
-(void)reflowComponentSynchronously;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(void)reflowComponentAsynchronously;
@end

