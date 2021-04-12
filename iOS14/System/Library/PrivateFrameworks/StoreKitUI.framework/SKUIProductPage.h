/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKUIProductPageItem, NSData, NSHTTPURLResponse, SSMetricsConfiguration, NSString, NSURL, SKUIProductPageProductInfo, NSArray, SKUIReviewConfiguration, SKUIUber;

@interface SKUIProductPage : NSObject <NSCopying> {

	long long _defaultPageFragment;
	SKUIProductPageItem* _item;
	NSData* _itmlData;
	NSHTTPURLResponse* _itmlResponse;
	SSMetricsConfiguration* _metricsConfiguration;
	NSString* _metricsPageDescription;
	NSURL* _pageURL;
	SKUIProductPageProductInfo* _productInformation;
	NSArray* _relatedContentSwooshes;
	SKUIReviewConfiguration* _reviewConfiguration;
	SKUIUber* _uber;

}

@property (assign,nonatomic) long long defaultPageFragment;                                //@synthesize defaultPageFragment=_defaultPageFragment - In the implementation block
@property (nonatomic,retain) SKUIProductPageItem * item;                                   //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSData * ITMLData;                                            //@synthesize itmlData=_itmlData - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * ITMLResponse;                             //@synthesize itmlResponse=_itmlResponse - In the implementation block
@property (nonatomic,retain) SSMetricsConfiguration * metricsConfiguration;                //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy) NSString * metricsPageDescription;                              //@synthesize metricsPageDescription=_metricsPageDescription - In the implementation block
@property (nonatomic,copy) NSURL * pageURL;                                                //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,retain) SKUIProductPageProductInfo * productInformation;              //@synthesize productInformation=_productInformation - In the implementation block
@property (nonatomic,copy) NSArray * relatedContentSwooshes;                               //@synthesize relatedContentSwooshes=_relatedContentSwooshes - In the implementation block
@property (nonatomic,retain) SKUIReviewConfiguration * reviewConfiguration;                //@synthesize reviewConfiguration=_reviewConfiguration - In the implementation block
@property (nonatomic,retain) SKUIUber * uber;                                              //@synthesize uber=_uber - In the implementation block
-(SKUIUber *)uber;
-(NSURL *)pageURL;
-(SKUIProductPageItem *)item;
-(void)setPageURL:(NSURL *)arg1 ;
-(void)setItem:(SKUIProductPageItem *)arg1 ;
-(void)setMetricsConfiguration:(SSMetricsConfiguration *)arg1 ;
-(SSMetricsConfiguration *)metricsConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUber:(SKUIUber *)arg1 ;
-(NSData *)ITMLData;
-(void)setITMLData:(NSData *)arg1 ;
-(void)setITMLResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setMetricsPageDescription:(NSString *)arg1 ;
-(NSHTTPURLResponse *)ITMLResponse;
-(NSString *)metricsPageDescription;
-(void)setDefaultPageFragment:(long long)arg1 ;
-(SKUIProductPageProductInfo *)productInformation;
-(SKUIReviewConfiguration *)reviewConfiguration;
-(long long)defaultPageFragment;
-(NSArray *)relatedContentSwooshes;
-(void)setProductInformation:(SKUIProductPageProductInfo *)arg1 ;
-(void)setRelatedContentSwooshes:(NSArray *)arg1 ;
-(void)setReviewConfiguration:(SKUIReviewConfiguration *)arg1 ;
@end

