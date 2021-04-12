/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol NSObject;
@class NSString;

@interface NMSObfuscatableDescriptionItem : NSObject {

	BOOL _obfuscated;
	NSString* _format;
	id<NSObject> _value;

}

@property (nonatomic,retain) NSString * format;               //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) id<NSObject> value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL obfuscated;                 //@synthesize obfuscated=_obfuscated - In the implementation block
-(id<NSObject>)value;
-(void)setValue:(id<NSObject>)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(id)initWithFormat:(id)arg1 value:(id)arg2 obfuscated:(BOOL)arg3 ;
-(BOOL)obfuscated;
-(void)setObfuscated:(BOOL)arg1 ;
@end

