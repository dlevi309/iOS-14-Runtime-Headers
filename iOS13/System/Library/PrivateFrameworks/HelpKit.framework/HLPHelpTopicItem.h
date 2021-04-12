/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HelpKit-Structs.h>
#import <HelpKit/HLPHelpItem.h>

@class NSString, NSArray;

@interface HLPHelpTopicItem : HLPHelpItem {

	NSString* _anchor;
	NSString* _hrefID;
	NSString* _glossaryIdentifierString;
	NSArray* _categories;

}

@property (nonatomic,copy) NSString * anchor;                                          //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * hrefID;                                          //@synthesize hrefID=_hrefID - In the implementation block
@property (nonatomic,copy) NSString * glossaryIdentifierString;                        //@synthesize glossaryIdentifierString=_glossaryIdentifierString - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                       //@synthesize categories=_categories - In the implementation block
@property (getter=isPassionPoints,nonatomic,readonly) BOOL passionPoints; 
@property (getter=isGlossary,nonatomic,readonly) BOOL glossary; 
@property (getter=isCopyright,nonatomic,readonly) BOOL copyright; 
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)hrefID;
-(void)setGlossaryIdentifierString:(NSString *)arg1 ;
-(void)setHrefID:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 serverType:(long long)arg3 ;
-(BOOL)isPassionPoints;
-(NSString *)glossaryIdentifierString;
-(BOOL)categoryContainKey:(id)arg1 ;
-(BOOL)isGlossary;
-(BOOL)isCopyright;
@end

