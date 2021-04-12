/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSOperationProgress, NSString;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying> {

	SSOperationProgress* _operationProgress;

}

@property (readonly) SSOperationProgress * operationProgress; 
@property (readonly) long long phaseType; 
@property (readonly) long long progressValue; 
@property (readonly) long long totalProgressValue; 
@property (readonly) long long progressUnits; 
@property (readonly) double estimatedSecondsRemaining; 
@property (readonly) float progressChangeRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(double)estimatedSecondsRemaining;
-(SSOperationProgress *)operationProgress;
-(id)initWithOperationProgress:(id)arg1 ;
-(long long)phaseType;
-(long long)progressUnits;
-(float)progressChangeRate;
-(long long)progressValue;
-(long long)totalProgressValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

