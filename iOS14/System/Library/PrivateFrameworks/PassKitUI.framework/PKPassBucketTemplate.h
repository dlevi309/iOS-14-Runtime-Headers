/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class PKPassFieldTemplate, NSMutableArray;

@interface PKPassBucketTemplate : NSObject {

	BOOL _sitsOnStripImage;
	long long _bucketAlignment;
	double _minFieldPadding;
	PKPassFieldTemplate* _defaultFieldTemplate;
	unsigned long long _maxFields;
	NSMutableArray* _fieldTemplates;
	CGRect _bucketRect;

}

@property (nonatomic,retain) NSMutableArray * fieldTemplates;                         //@synthesize fieldTemplates=_fieldTemplates - In the implementation block
@property (assign,nonatomic) long long bucketAlignment;                               //@synthesize bucketAlignment=_bucketAlignment - In the implementation block
@property (assign,nonatomic) CGRect bucketRect;                                       //@synthesize bucketRect=_bucketRect - In the implementation block
@property (assign,nonatomic) double minFieldPadding;                                  //@synthesize minFieldPadding=_minFieldPadding - In the implementation block
@property (nonatomic,retain) PKPassFieldTemplate * defaultFieldTemplate;              //@synthesize defaultFieldTemplate=_defaultFieldTemplate - In the implementation block
@property (assign,nonatomic) unsigned long long maxFields;                            //@synthesize maxFields=_maxFields - In the implementation block
@property (assign,nonatomic) BOOL sitsOnStripImage;                                   //@synthesize sitsOnStripImage=_sitsOnStripImage - In the implementation block
-(void)setDefaultFieldTemplate:(PKPassFieldTemplate *)arg1 ;
-(unsigned long long)maxFields;
-(id)templateForFieldAtIndex:(unsigned long long)arg1 ;
-(long long)bucketAlignment;
-(double)minFieldPadding;
-(BOOL)sitsOnStripImage;
-(void)setSitsOnStripImage:(BOOL)arg1 ;
-(NSMutableArray *)fieldTemplates;
-(void)setFieldTemplates:(NSMutableArray *)arg1 ;
-(PKPassFieldTemplate *)defaultFieldTemplate;
-(void)setBucketAlignment:(long long)arg1 ;
-(void)setBucketRect:(CGRect)arg1 ;
-(void)setMinFieldPadding:(double)arg1 ;
-(void)setMaxFields:(unsigned long long)arg1 ;
-(void)addFieldTemplate:(id)arg1 ;
-(CGRect)bucketRect;
@end

