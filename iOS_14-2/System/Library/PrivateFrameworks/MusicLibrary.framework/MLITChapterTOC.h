/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/MLChapterTOC.h>

@interface MLITChapterTOC : MLChapterTOC {

	unsigned _totalTimeInMS;
	ChapterDataRef _chapterDataRef;
	unsigned* _picCookieIndexMap;
	unsigned* _urlCookieIndexMap;
	unsigned* _nameCookieIndexMap;

}
+(void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)enumerateChapterTimesInFlattenedChapterData:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(unsigned*)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2 ;
-(id)titlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)countOfChapters;
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)chapterIndexForGroupIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlTitleTrimmingCharacterSet;
-(unsigned)durationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)countOfGroupsForProperty:(int)arg1 ;
-(void)dealloc;
-(id)initWithChapterDataRef:(ChapterDataRef)arg1 totalTimeInMS:(unsigned)arg2 ;
-(ChapterDataRef)chapterDataRef;
-(unsigned*)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(BOOL)arg2 ;
-(unsigned)totalTimeInMS;
-(unsigned)groupIndexForChapterIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)groupIndexAtTimeLocationInMS:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
@end

