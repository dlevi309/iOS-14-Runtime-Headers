/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SKUIToggleStateItem : NSObject <NSCopying> {

	char _toggled;
	long long _count;
	NSString* _itemIdentifier;
	NSString* _nonToggledString;
	NSString* _toggledString;

}

@property (assign,nonatomic) long long count;                       //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) char toggled;                          //@synthesize toggled=_toggled - In the implementation block
@property (nonatomic,copy) NSString * nonToggleString;              //@synthesize nonToggledString=_nonToggledString - In the implementation block
@property (nonatomic,copy) NSString * toggledString;                //@synthesize toggledString=_toggledString - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(char)toggled;
-(void)setToggled:(char)arg1 ;
-(NSString *)toggledString;
-(void)setToggledString:(NSString *)arg1 ;
-(NSString *)nonToggleString;
-(void)setNonToggleString:(NSString *)arg1 ;
@end

