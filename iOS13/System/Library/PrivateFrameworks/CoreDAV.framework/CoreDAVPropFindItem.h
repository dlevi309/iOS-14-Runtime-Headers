/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPropFindItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _propName;
	CoreDAVItemWithNoChildren* _allProp;
	CoreDAVItem* _include;
	CoreDAVItem* _prop;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * propName;              //@synthesize propName=_propName - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * allProp;               //@synthesize allProp=_allProp - In the implementation block
@property (nonatomic,retain) CoreDAVItem * include;                             //@synthesize include=_include - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                                //@synthesize prop=_prop - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)propName;
-(CoreDAVItemWithNoChildren *)allProp;
-(CoreDAVItem *)include;
-(void)setPropName:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAllProp:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setInclude:(CoreDAVItem *)arg1 ;
@end

