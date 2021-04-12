/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <KeyboardServices/KeyboardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData;

@interface _KSTextReplacementEntry : NSObject <NSSecureCoding, NSCopying> {

	BOOL _needsSaveToCloud;
	BOOL _wasDeleted;
	NSString* _phrase;
	NSString* _shortcut;
	NSDate* _timestamp;
	_KSTextReplacementEntry* _priorValue;
	NSData* _cloudData;
	NSString* _cloudID;

}

@property (nonatomic,retain) NSData * cloudData;                                //@synthesize cloudData=_cloudData - In the implementation block
@property (assign) BOOL needsSaveToCloud;                                       //@synthesize needsSaveToCloud=_needsSaveToCloud - In the implementation block
@property (assign) BOOL wasDeleted;                                             //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (nonatomic,copy) NSString * cloudID;                                  //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy) NSString * phrase;                                   //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                                 //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) _KSTextReplacementEntry * priorValue;              //@synthesize priorValue=_priorValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localEntryFromCloudEntry:(id)arg1 ;
-(id)shortcutForSorting;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(void)setCloudData:(NSData *)arg1 ;
-(id)unEncryptedFields;
-(id)uniqueID;
-(BOOL)wasDeleted;
-(id)init;
-(id)uniqueRecordName;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortcut;
-(id)description;
-(NSData *)cloudData;
-(void)setWasDeleted:(BOOL)arg1 ;
-(NSString *)phrase;
-(BOOL)needsSaveToCloud;
-(void)setShortcut:(NSString *)arg1 ;
-(id)encryptedFields;
-(id)initWithCoder:(id)arg1 ;
-(_KSTextReplacementEntry *)priorValue;
-(void)setCloudID:(NSString *)arg1 ;
-(void)setPriorValue:(_KSTextReplacementEntry *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)cloudID;
-(void)setPhrase:(NSString *)arg1 ;
-(void)setNeedsSaveToCloud:(BOOL)arg1 ;
-(id)uniqueRecordNameVer0;
@end

