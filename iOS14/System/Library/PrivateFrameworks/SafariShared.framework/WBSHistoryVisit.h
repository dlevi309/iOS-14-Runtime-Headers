/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class WBSHistoryItem, NSString;

@interface WBSHistoryVisit : NSObject {

	BOOL _loadSuccessful;
	BOOL _httpNonGet;
	BOOL _synthesized;
	int _score;
	long long _databaseID;
	long long _redirectSourceDatabaseID;
	long long _redirectDestinationDatabaseID;
	long long _generation;
	WBSHistoryItem* _item;
	long long _origin;
	double _visitTime;
	NSString* _title;
	unsigned long long _attributes;
	WBSHistoryVisit* _redirectSource;
	WBSHistoryVisit* _redirectDestination;

}

@property (assign,nonatomic) long long databaseID;                                        //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) long long redirectSourceDatabaseID;                          //@synthesize redirectSourceDatabaseID=_redirectSourceDatabaseID - In the implementation block
@property (assign,nonatomic) long long redirectDestinationDatabaseID;                     //@synthesize redirectDestinationDatabaseID=_redirectDestinationDatabaseID - In the implementation block
@property (assign,nonatomic) long long generation;                                        //@synthesize generation=_generation - In the implementation block
@property (assign,nonatomic,__weak) WBSHistoryItem * item;                                //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long origin;                                            //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) double visitTime;                                          //@synthesize visitTime=_visitTime - In the implementation block
@property (copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int score;                                                   //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                               //@synthesize attributes=_attributes - In the implementation block
@property (assign,getter=loadWasSuccessful,nonatomic) BOOL loadSuccessful;                //@synthesize loadSuccessful=_loadSuccessful - In the implementation block
@property (getter=wasHTTPNonGet,nonatomic,readonly) BOOL httpNonGet;                      //@synthesize httpNonGet=_httpNonGet - In the implementation block
@property (getter=isSynthesized,nonatomic,readonly) BOOL synthesized;                     //@synthesize synthesized=_synthesized - In the implementation block
@property (nonatomic,retain) WBSHistoryVisit * redirectSource;                            //@synthesize redirectSource=_redirectSource - In the implementation block
@property (nonatomic,retain) WBSHistoryVisit * redirectDestination;                       //@synthesize redirectDestination=_redirectDestination - In the implementation block
@property (nonatomic,readonly) WBSHistoryVisit * endOfRedirectChain; 
@property (nonatomic,readonly) unsigned long long redirectSourceChainLength; 
+(id)synthesizedVisitWithHistoryItem:(id)arg1 visitTime:(double)arg2 ;
+(int)scoreForWeightedVisitCount:(float)arg1 ;
+(float)weightedVisitCountFromScore:(int)arg1 ;
-(void)setOrigin:(long long)arg1 ;
-(void)setGeneration:(long long)arg1 ;
-(long long)generation;
-(BOOL)hasAttributes:(unsigned long long)arg1 ;
-(long long)origin;
-(id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 baseColumnIndex:(unsigned long long)arg3 ;
-(id)initWithHistoryItem:(id)arg1 streamedVisit:(const HistoryStreamedVisit*)arg2 ;
-(id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 loadWasSuccesful:(BOOL)arg3 wasHTTPNonGet:(BOOL)arg4 origin:(long long)arg5 attributes:(unsigned long long)arg6 ;
-(WBSHistoryVisit *)redirectSource;
-(int)score;
-(void)setAttributes:(unsigned long long)arg1 ;
-(long long)redirectDestinationDatabaseID;
-(WBSHistoryItem *)item;
-(void)setLoadSuccessful:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setScore:(int)arg1 ;
-(void)setRedirectDestination:(WBSHistoryVisit *)arg1 ;
-(id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 ;
-(void)setItem:(WBSHistoryItem *)arg1 ;
-(unsigned long long)attributes;
-(double)_weight;
-(void)recomputeScore;
-(WBSHistoryVisit *)redirectDestination;
-(void)setRedirectDestinationDatabaseID:(long long)arg1 ;
-(double)visitTime;
-(id)initWithHistoryItem:(id)arg1 serviceVisit:(id)arg2 ;
-(WBSHistoryVisit *)endOfRedirectChain;
-(unsigned long long)redirectSourceChainLength;
-(void)setRedirectSourceDatabaseID:(long long)arg1 ;
-(long long)redirectSourceDatabaseID;
-(void)setDatabaseID:(long long)arg1 ;
-(void)setRedirectSource:(WBSHistoryVisit *)arg1 ;
-(BOOL)isSynthesized;
-(long long)databaseID;
-(BOOL)wasHTTPNonGet;
-(BOOL)loadWasSuccessful;
-(NSString *)title;
@end

