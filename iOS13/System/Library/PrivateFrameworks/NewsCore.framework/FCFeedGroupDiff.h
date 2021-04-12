/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray;

@interface FCFeedGroupDiff : NSObject {

	NSString* _groupIdentifier;
	NSArray* _insertedElements;
	NSArray* _deletedElements;
	NSArray* _modifiedElements;
	NSArray* _insertedHeadlines;
	NSArray* _deletedHeadlines;
	NSArray* _modifiedHeadlines;

}

@property (nonatomic,copy,readonly) NSString * groupIdentifier;               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * insertedElements;               //@synthesize insertedElements=_insertedElements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedElements;                //@synthesize deletedElements=_deletedElements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifiedElements;               //@synthesize modifiedElements=_modifiedElements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * insertedHeadlines;              //@synthesize insertedHeadlines=_insertedHeadlines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedHeadlines;               //@synthesize deletedHeadlines=_deletedHeadlines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifiedHeadlines;              //@synthesize modifiedHeadlines=_modifiedHeadlines - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(id)init;
-(BOOL)isEmpty;
-(NSString *)groupIdentifier;
-(id)initWithGroupIdentifier:(id)arg1 insertedElements:(id)arg2 deletedElements:(id)arg3 modifiedElements:(id)arg4 ;
-(NSArray *)insertedElements;
-(NSArray *)deletedElements;
-(NSArray *)modifiedHeadlines;
-(NSArray *)modifiedElements;
-(NSArray *)insertedHeadlines;
-(NSArray *)deletedHeadlines;
@end

