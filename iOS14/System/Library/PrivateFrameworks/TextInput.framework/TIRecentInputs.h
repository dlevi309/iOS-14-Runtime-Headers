/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TILexicon.h>

@class NSString;

@interface TIRecentInputs : TILexicon {

	BOOL _needsSync;
	NSString* _filePath;

}

@property (assign,nonatomic) BOOL needsSync;                   //@synthesize needsSync=_needsSync - In the implementation block
@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)recentInputAtPath:(id)arg1 ;
+(void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1 ;
+(id)_sanitizeRecentInputString:(id)arg1 ;
+(id)_lexiconPathForLocalIdentifier:(id)arg1 ;
+(void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 atPath:(id)arg3 ;
+(id)recentInputForIdentifier:(id)arg1 ;
+(void)recentInputForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)storeInput:(id)arg1 forLocalIdentifier:(id)arg2 ;
+(void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 ;
+(BOOL)identifierIsSystemIdentifier:(id)arg1 ;
+(void)clearRecentInputForIdentifier:(id)arg1 ;
+(void)removeInput:(id)arg1 forSystemIdentifier:(id)arg2 ;
-(NSString *)filePath;
-(BOOL)needsSync;
-(void)setNeedsSync:(BOOL)arg1 ;
-(void)storeIfNecessary;
-(id)lexiconByRemovingEntry:(id)arg1 ;
-(id)lexiconWithAdditionalEntry:(id)arg1 maximumSize:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
@end

