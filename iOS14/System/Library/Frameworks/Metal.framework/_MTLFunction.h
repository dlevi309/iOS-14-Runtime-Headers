/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLFunctionSPI.h>

@protocol MTLDevice, OS_dispatch_data;
@class NSString, MTLType, NSArray, NSDictionary, NSObject, NSData;

@interface _MTLFunction : _MTLObjectWithLabel <MTLFunctionSPI> {

	id<MTLDevice> _device;
	unsigned long long _functionType;
	NSString* _name;
	MTLLibraryData* _libraryData;
	id _vendorPrivate;
	NSArray* _vertexAttributes;
	NSArray* _functionConstants;
	NSDictionary* _functionConstantDictionary;
	unsigned long long _options;
	NSObject*<OS_dispatch_data> _precompiledOutput;
	MTLType* _returnType;
	NSArray* _arguments;
	NSString* _unpackedFilePath;
	SCD_Struct_MT19 _functionConstantSpecializationHash;

}

@property (readonly) id<MTLDevice> device;                                       //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long functionType;                            //@synthesize functionType=_functionType - In the implementation block
@property (readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (readonly) MTLLibraryData* libraryData;                                //@synthesize libraryData=_libraryData - In the implementation block
@property (copy) NSString * filePath; 
@property (assign) long long lineNumber; 
@property (copy) NSString * unpackedFilePath;                                    //@synthesize unpackedFilePath=_unpackedFilePath - In the implementation block
@property (assign,nonatomic) unsigned char bitcodeType; 
@property (assign) NSData * pluginData; 
@property (readonly) id vendorPrivate;                                           //@synthesize vendorPrivate=_vendorPrivate - In the implementation block
@property (readonly) unsigned long long bitCodeOffset; 
@property (readonly) unsigned long long renderTargetArrayIndexType; 
@property (assign) NSArray * vertexAttributes; 
@property (assign) MTLType * returnType; 
@property (assign) NSArray * arguments; 
@property (assign) NSArray * functionConstants; 
@property (readonly) NSObject*<OS_dispatch_data> functionInputs; 
@property (readonly) BOOL needsFunctionConstantValues; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
@property (assign) NSObject*<OS_dispatch_data> precompiledOutput; 
@property (readonly) unsigned long long patchType; 
@property (readonly) long long patchControlPointCount; 
@property (readonly) NSArray * stageInputAttributes; 
@property (readonly) NSDictionary * functionConstantsDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2 ;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bitcodeData;
-(NSString *)unpackedFilePath;
-(MTLLibraryData*)libraryData;
-(void)setVendorPrivate:(id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3 ;
-(id)vendorPrivate;
-(const SCD_Struct_MT19*)bitCodeHash;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(void)setUnpackedFilePath:(NSString *)arg1 ;
-(id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2 ;
-(unsigned long long)bitCodeFileSize;
-(unsigned long long)functionType;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(MTLLibraryData*)arg3 device:(id)arg4 ;
-(NSDictionary *)functionConstantsDictionary;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned)functionRef;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3 ;
-(unsigned long long)options;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 functionReflection:(id)arg3 ;
-(id<MTLDevice>)device;
-(NSString *)name;
-(NSString *)description;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2 ;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2 ;
-(const SCD_Struct_MT19*)functionConstantSpecializationHash;
-(id)reflectionWithOptions:(unsigned long long)arg1 ;
-(void)dealloc;
@end

