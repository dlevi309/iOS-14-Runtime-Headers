/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularShapeAnnotation.h>
#import <libobjc.A.dylib/AKFlippableAnnotationProtocol.h>

@class UIBezierPath, NSString;

@interface AKTriangleAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol> {

	BOOL _verticallyFlipped;
	BOOL _horizontallyFlipped;
	UIBezierPath* _path;

}

@property (retain) UIBezierPath * path;                             //@synthesize path=_path - In the implementation block
@property (assign) BOOL verticallyFlipped;                          //@synthesize verticallyFlipped=_verticallyFlipped - In the implementation block
@property (assign) BOOL horizontallyFlipped;                        //@synthesize horizontallyFlipped=_horizontallyFlipped - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)path;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(BOOL)verticallyFlipped;
-(void)setVerticallyFlipped:(BOOL)arg1 ;
-(BOOL)horizontallyFlipped;
-(void)setHorizontallyFlipped:(BOOL)arg1 ;
@end

