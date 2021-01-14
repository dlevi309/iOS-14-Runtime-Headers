/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartSpeechTranslationRequest.h>

@class NSString, NSArray, FTStartSpeechRequest, FTTranslationRequest;

@interface FTMutableStartSpeechTranslationRequest : FTStartSpeechTranslationRequest

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSArray * translation_locale_pairs; 
@property (nonatomic,copy) FTStartSpeechRequest * start_speech_request; 
@property (nonatomic,copy) FTTranslationRequest * translation_request; 
@property (nonatomic,copy) NSArray * text_to_speech_requests; 
@property (assign,nonatomic) BOOL restricted_mode; 
@property (nonatomic,copy) NSString * app_id; 
@property (assign,nonatomic) long long opt_in_status; 
-(id)init;
-(NSString *)app_id;
-(FTStartSpeechRequest *)start_speech_request;
-(void)setStart_speech_request:(FTStartSpeechRequest *)arg1 ;
-(NSString *)request_id;
-(long long)opt_in_status;
-(void)setOpt_in_status:(long long)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setApp_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
-(NSArray *)translation_locale_pairs;
-(void)setTranslation_locale_pairs:(NSArray *)arg1 ;
-(FTTranslationRequest *)translation_request;
-(void)setTranslation_request:(FTTranslationRequest *)arg1 ;
-(NSArray *)text_to_speech_requests;
-(void)setText_to_speech_requests:(NSArray *)arg1 ;
-(BOOL)restricted_mode;
-(void)setRestricted_mode:(BOOL)arg1 ;
@end

