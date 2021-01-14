/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFWorkflowMigration.h>

@protocol WFWorkflowMigration <NSObject>
@required
+(BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
-(void)migrateWorkflowIfNeeded:(id)arg1 completion:(/*^block*/id)arg2;

@end


@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSString;

@interface WFWorkflowMigration : NSObject <WFWorkflowMigration> {

	NSMutableSet* _warnings;
	NSMutableDictionary* _workflow;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * workflow;              //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) NSMutableArray * actions; 
@property (nonatomic,readonly) NSString * actionIdentifierKey; 
@property (nonatomic,readonly) NSString * actionParametersKey; 
@property (nonatomic,readonly) NSMutableSet * warnings;                     //@synthesize warnings=_warnings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2 ;
+(id)migrationClassDependencies;
-(void)finish;
-(NSMutableArray *)actions;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSMutableDictionary *)workflow;
-(NSMutableSet *)warnings;
-(void)migrateWorkflow;
-(void)migrateWorkflowIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)actionIdentifierKey;
-(NSString *)actionParametersKey;
-(void)enumerateActionsWithIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

