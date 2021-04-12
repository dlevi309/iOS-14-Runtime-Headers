/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWebResource, NSArray, NSData;

@interface WFWebArchive : NSObject <NSSecureCoding> {

	WFWebResource* _mainResource;
	NSArray* _subresources;
	NSArray* _subframeArchives;

}

@property (nonatomic,readonly) WFWebResource * mainResource;              //@synthesize mainResource=_mainResource - In the implementation block
@property (nonatomic,readonly) NSArray * subresources;                    //@synthesize subresources=_subresources - In the implementation block
@property (nonatomic,readonly) NSArray * subframeArchives;                //@synthesize subframeArchives=_subframeArchives - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(NSArray *)subresources;
-(id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3 ;
-(WFWebResource *)mainResource;
-(NSArray *)subframeArchives;
@end

