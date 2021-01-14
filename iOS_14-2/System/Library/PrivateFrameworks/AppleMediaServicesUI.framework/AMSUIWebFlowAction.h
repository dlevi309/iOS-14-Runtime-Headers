/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@protocol AMSUIWebPageProvider;
@class NSString, AMSUIWebLoadingPageModel, NSDictionary, AMSUIWebNavigationBarModel, AMSUIWebClientContext;

@interface AMSUIWebFlowAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _deferredPresentation;
	id _actionData;
	long long _animationType;
	NSString* _backgroundColor;
	AMSUIWebLoadingPageModel* _loadingPage;
	NSDictionary* _metrics;
	AMSUIWebNavigationBarModel* _navigationBar;
	long long _presentationType;
	id<AMSUIWebPageProvider> _replacementPage;
	long long _replacementType;
	AMSUIWebClientContext* _context;
	CGSize _modalWindowSize;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id actionData;                                           //@synthesize actionData=_actionData - In the implementation block
@property (assign,nonatomic) long long animationType;                                 //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) BOOL deferredPresentation;                               //@synthesize deferredPresentation=_deferredPresentation - In the implementation block
@property (nonatomic,retain) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) AMSUIWebLoadingPageModel * loadingPage;                  //@synthesize loadingPage=_loadingPage - In the implementation block
@property (nonatomic,retain) NSDictionary * metrics;                                  //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) CGSize modalWindowSize;                                  //@synthesize modalWindowSize=_modalWindowSize - In the implementation block
@property (nonatomic,retain) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) long long presentationType;                              //@synthesize presentationType=_presentationType - In the implementation block
@property (nonatomic,retain) id<AMSUIWebPageProvider> replacementPage;                //@synthesize replacementPage=_replacementPage - In the implementation block
@property (assign,nonatomic) long long replacementType;                               //@synthesize replacementType=_replacementType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetrics:(NSDictionary *)arg1 ;
-(NSDictionary *)metrics;
-(id)initWithContext:(id)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setAnimationType:(long long)arg1 ;
-(NSString *)backgroundColor;
-(void)setPresentationType:(long long)arg1 ;
-(id)actionData;
-(long long)animationType;
-(long long)presentationType;
-(void)setNavigationBar:(AMSUIWebNavigationBarModel *)arg1 ;
-(void)setActionData:(id)arg1 ;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(void)setDeferredPresentation:(BOOL)arg1 ;
-(AMSUIWebLoadingPageModel *)loadingPage;
-(void)setLoadingPage:(AMSUIWebLoadingPageModel *)arg1 ;
-(BOOL)deferredPresentation;
-(void)_runWithType:(long long)arg1 options:(id)arg2 ;
-(long long)replacementType;
-(id<AMSUIWebPageProvider>)replacementPage;
-(CGSize)modalWindowSize;
-(void)setModalWindowSize:(CGSize)arg1 ;
-(void)setReplacementPage:(id<AMSUIWebPageProvider>)arg1 ;
-(void)setReplacementType:(long long)arg1 ;
@end

