/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSArray, NSURL, NSString;

@interface ETModelDefinition : NSObject {

	NSArray* _layerNames;
	NSArray* _inputs;
	NSArray* _outputs;
	NSArray* _trainingInputs;
	NSArray* _trainingOutputs;
	NSURL* _modelURL;
	NSString* _isTrainingGlobalName;
	NSString* _initializer;

}

@property (readonly) NSArray * layerNames;                         //@synthesize layerNames=_layerNames - In the implementation block
@property (readonly) NSArray * inputs;                             //@synthesize inputs=_inputs - In the implementation block
@property (readonly) NSArray * outputs;                            //@synthesize outputs=_outputs - In the implementation block
@property (readonly) NSArray * trainingInputs;                     //@synthesize trainingInputs=_trainingInputs - In the implementation block
@property (readonly) NSArray * trainingOutputs;                    //@synthesize trainingOutputs=_trainingOutputs - In the implementation block
@property (readonly) NSURL * modelURL;                             //@synthesize modelURL=_modelURL - In the implementation block
@property (readonly) NSString * isTrainingGlobalName;              //@synthesize isTrainingGlobalName=_isTrainingGlobalName - In the implementation block
@property (readonly) NSString * initializer;                       //@synthesize initializer=_initializer - In the implementation block
-(NSURL *)modelURL;
-(NSArray *)layerNames;
-(NSArray *)trainingInputs;
-(NSArray *)trainingOutputs;
-(NSString *)isTrainingGlobalName;
-(NSString *)initializer;
-(id)initWithInferenceNetworkPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithTrainingNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 trainingInputs:(id)arg4 trainingOutputs:(id)arg5 trainingControlVariableName:(id)arg6 withInitializer:(id)arg7 error:(id*)arg8 ;
-(NSArray *)inputs;
-(NSArray *)outputs;
-(id)initWithInferenceNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 error:(id*)arg4 ;
@end

