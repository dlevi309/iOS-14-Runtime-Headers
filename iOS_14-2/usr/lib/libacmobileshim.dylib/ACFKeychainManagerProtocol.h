/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString;


@protocol ACFKeychainManagerProtocol <NSObject>
@property (nonatomic,readonly) NSString * usedAccessGroup; 
@property (nonatomic,readonly) NSString * obtainAccessGroup; 
@property (nonatomic,readonly) NSString * sharedAccessGroup; 
@required
-(NSString *)sharedAccessGroup;
-(NSString *)obtainAccessGroup;
-(void)dumpResults:(id)arg1 printAttributes:(BOOL)arg2;
-(id)searchItemWithInfo:(id)arg1;
-(int)storeItemWithInfo:(id)arg1 share:(BOOL)arg2 result:(id*)arg3;
-(BOOL)removeItemWithInfo:(id)arg1;
-(NSString *)usedAccessGroup;

@end

