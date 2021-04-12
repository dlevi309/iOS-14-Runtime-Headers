/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSMutableDictionary, NSArray, NSDictionary, NSString;

@interface SSEntity : NSObject <SSXPCCoding> {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _localExternalValues;
	NSMutableDictionary* _localValues;
	long long _pid;
	NSArray* _dirtyLocalExternalProperties;
	NSArray* _dirtyLocalProperties;

}

@property (readonly) long long _persistentIdentifier; 
@property (setter=_setLocalExternalValues:,getter=_localExternalValues,copy) NSDictionary * _localExternalValues; 
@property (setter=_setLocalValues:,getter=_localValues,copy) NSDictionary * _localValues; 
@property (getter=_isManaged,readonly) BOOL _managed; 
@property (readonly) BOOL exists; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setExternalValuesMessage;
+(long long)_setValuesMessage;
-(id)copyXPCEncoding;
-(id)init;
-(id)_initWithPersistentIdentifier:(long long)arg1 ;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(void)_resetLocalIVars;
-(BOOL)exists;
-(void)_addCachedExternalValues:(id)arg1 ;
-(void)_addCachedPropertyValues:(id)arg1 ;
-(NSDictionary *)_localExternalValues;
-(void)_setLocalExternalValues:(id)arg1 ;
-(NSDictionary *)_localValues;
-(void)_setLocalValues:(id)arg1 ;
-(void)_setDirtyCachedExternalProperties:(id)arg1 ;
-(void)_setDirtyCachedProperties:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 message:(long long)arg4 ;
-(void)getValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)__addCachedExternalValues:(id)arg1 ;
-(void)__addCachedPropertyValues:(id)arg1 ;
-(void)resetCachedProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)description;
-(void)resetCachedExternalProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)setValuesWithDictionary:(id)arg1 ;
-(BOOL)setExternalValuesWithDictionary:(id)arg1 ;
-(id)valueForExternalProperty:(id)arg1 ;
-(unsigned long long)hash;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)_isManaged;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)_persistentIdentifier;
@end

