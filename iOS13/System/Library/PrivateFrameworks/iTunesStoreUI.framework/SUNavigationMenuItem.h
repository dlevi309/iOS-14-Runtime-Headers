/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUItemContentRating, NSString, NSURL;

@interface SUNavigationMenuItem : NSObject <NSCopying> {

	SUItemContentRating* _contentRating;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) SUItemContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(SUItemContentRating *)contentRating;
@end

