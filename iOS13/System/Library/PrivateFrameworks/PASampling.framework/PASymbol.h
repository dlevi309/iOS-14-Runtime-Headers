/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSString, NSMutableArray;

@interface PASymbol : NSObject <PASerializable> {

	NSString* _name;
	unsigned long long _length;
	unsigned long long _offsetInOwner;
	NSMutableArray* _sourceInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign) unsigned long long length;                         //@synthesize length=_length - In the implementation block
@property (readonly) unsigned long long offsetIntoOwner;              //@synthesize offsetInOwner=_offsetInOwner - In the implementation block
@property (readonly) BOOL isEmptySymbol; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(unsigned long long)length;
-(NSString *)debugDescription;
-(NSString *)name;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)isEmptySymbol;
-(void)addSourceInfo:(id)arg1 ;
-(id)debugDescriptionForOffsetIntoOwner:(unsigned long long)arg1 ;
-(id)sourceInfoWithOffsetIntoSymbol:(unsigned long long)arg1 ;
-(void)setOffsetIntoOwner:(unsigned long long)arg1 ;
-(id)initWithCSSymbolRef:(CSTypeRef)arg1 ;
-(id)initWithName:(id)arg1 length:(unsigned long long)arg2 offsetInOwner:(unsigned long long)arg3 ;
-(BOOL)hasAnySourceInfo;
-(id)initEmptySymbolWithOffsetIntoOwner:(unsigned long long)arg1 ;
-(BOOL)containsOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(long long)compareToSymbol:(id)arg1 ;
-(long long)compareInfoRichnessToSymbol:(id)arg1 ;
-(void)copySourceInfoFromSymbol:(id)arg1 ;
-(unsigned long long)offsetIntoOwner;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)_initWithSerializedSymbol:(const SCD_Struct_PA0*)arg1 ;
@end

