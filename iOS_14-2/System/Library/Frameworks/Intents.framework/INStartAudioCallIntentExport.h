/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INStartAudioCallIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long destinationType; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (nonatomic,copy) NSArray * contacts; 
@property (assign,nonatomic) long long recordTypeForRedialing; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
@required
-(void)setContacts:(id)arg1;
-(NSArray *)contacts;
-(id)init;
-(long long)destinationType;
-(void)setAudioRoute:(long long)arg1;
-(long long)ttyType;
-(void)setDestinationType:(long long)arg1;
-(void)setRecordTypeForRedialing:(long long)arg1;
-(long long)recordTypeForRedialing;
-(long long)audioRoute;
-(long long)preferredCallProvider;
-(void)setTTYType:(long long)arg1;
-(void)setPreferredCallProvider:(long long)arg1;

@end

