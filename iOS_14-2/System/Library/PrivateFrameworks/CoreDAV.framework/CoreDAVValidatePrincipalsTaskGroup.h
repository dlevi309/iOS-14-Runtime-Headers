/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSMutableSet, NSURL, NSSet, NSString;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSMutableSet* _urlsToExamine;
	NSMutableSet* _principalURLs;
	NSURL* _urlBeingExamined;
	BOOL _authError;

}

@property (nonatomic,retain) NSMutableSet * urlsToExamine;                      //@synthesize urlsToExamine=_urlsToExamine - In the implementation block
@property (nonatomic,retain) NSMutableSet * principalURLs;                      //@synthesize principalURLs=_principalURLs - In the implementation block
@property (nonatomic,retain) NSURL * urlBeingExamined;                          //@synthesize urlBeingExamined=_urlBeingExamined - In the implementation block
@property (nonatomic,readonly) NSSet * resultPrincipalURLs; 
@property (nonatomic,readonly) BOOL didReceiveAuthenticationError;              //@synthesize authError=_authError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishWithError:(id)arg1 ;
-(void)startTaskGroup;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)cancelTaskGroup;
-(BOOL)didReceiveAuthenticationError;
-(NSMutableSet *)principalURLs;
-(NSMutableSet *)urlsToExamine;
-(void)setUrlBeingExamined:(NSURL *)arg1 ;
-(NSURL *)urlBeingExamined;
-(void)_fetchNextURL;
-(void)setUrlsToExamine:(NSMutableSet *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 urls:(id)arg2 taskManager:(id)arg3 ;
-(NSSet *)resultPrincipalURLs;
-(void)setPrincipalURLs:(NSMutableSet *)arg1 ;
@end

