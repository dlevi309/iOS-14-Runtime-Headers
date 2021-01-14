/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, SSItemArtworkImage;

@interface SUItemContentRating : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	long long _rank;
	NSString* _ratingDescription;
	NSString* _ratingLabel;
	long long _ratingSystem;
	SSItemArtworkImage* _ratingSystemLogo;
	BOOL _shouldHideWhenRestricted;

}

@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (assign,nonatomic) long long rank;                                               //@synthesize rank=_rank - In the implementation block
@property (nonatomic,copy) NSString * ratingDescription;                                   //@synthesize ratingDescription=_ratingDescription - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                         //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (assign,nonatomic) long long ratingSystem;                                       //@synthesize ratingSystem=_ratingSystem - In the implementation block
@property (nonatomic,copy) SSItemArtworkImage * ratingSystemLogo;                          //@synthesize ratingSystemLogo=_ratingSystemLogo - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (assign,nonatomic) BOOL shouldHideWhenRestricted;                                //@synthesize shouldHideWhenRestricted=_shouldHideWhenRestricted - In the implementation block
+(long long)ratingSystemFromString:(id)arg1 ;
-(BOOL)isRestricted;
-(void)setRank:(long long)arg1 ;
-(void)setShouldHideWhenRestricted:(BOOL)arg1 ;
-(BOOL)shouldHideWhenRestricted;
-(SSItemArtworkImage *)ratingSystemLogo;
-(long long)ratingSystem;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSString *)ratingDescription;
-(BOOL)_isRatingSystemForApps:(long long)arg1 ;
-(BOOL)_isRatingSystemForMovies:(long long)arg1 ;
-(BOOL)_isRatingSystemForMusic:(long long)arg1 ;
-(BOOL)_isRatingSystemForTV:(long long)arg1 ;
-(void)setRatingDescription:(NSString *)arg1 ;
-(void)setRatingSystem:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isExplicitContent;
-(long long)rank;
-(id)valueForProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ratingLabel;
-(void)dealloc;
-(void)setRatingSystemLogo:(SSItemArtworkImage *)arg1 ;
@end

