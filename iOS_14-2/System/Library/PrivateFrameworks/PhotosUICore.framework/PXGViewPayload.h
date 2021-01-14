/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PXGViewUserData;
@interface PXGViewPayload : NSObject <NSCopying> {

	Class _viewClass;
	id<PXGViewUserData> _userData;

}

@property (nonatomic,readonly) Class viewClass;                                //@synthesize viewClass=_viewClass - In the implementation block
@property (nonatomic,copy,readonly) id<PXGViewUserData> userData;              //@synthesize userData=_userData - In the implementation block
-(id<PXGViewUserData>)userData;
-(Class)viewClass;
-(id)initWithViewClass:(Class)arg1 userData:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

