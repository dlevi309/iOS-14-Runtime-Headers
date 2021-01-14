/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MSMailDefaultService.h>

@interface MSSaveEmail : MSMailDefaultService
+(void)deletePlaceholderAttachmentForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
+(void)securityScopeForPlaceholderURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)placeholderAttachmentForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(void)saveEmail:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_saveEmail:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

