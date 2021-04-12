/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _tokenDetailMap;
	NSMutableDictionary* _detailTokenMap;

}
+(BOOL)supportsSecureCoding;
+(id)matchedDetailsWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3 ;
-(id)matchedDetailsForToken:(id)arg1 ;
-(id)tokensForDetail:(id)arg1 ;
-(void)_processRawData:(id)arg1 tokens:(id)arg2 contact:(id)arg3 ;
-(id)_contactDetailFromContact:(id)arg1 column:(unsigned)arg2 detailEntityId:(id)arg3 ;
-(BOOL)isEqualToMatchedDetails:(id)arg1 ;
@end

