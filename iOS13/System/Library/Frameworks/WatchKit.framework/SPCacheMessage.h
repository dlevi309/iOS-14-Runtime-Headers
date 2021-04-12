/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@class NSString, NSData, SPAssetCacheSyncData;

@interface SPCacheMessage : NSObject {

	int _messageType;
	unsigned long long _cacheType;
	NSString* _assetKey;
	NSString* _gizmoCacheIdentifier;
	NSData* _assetData;
	SPAssetCacheSyncData* _syncData;
	unsigned long long _error;

}

@property (assign,nonatomic) int messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned long long cacheType;                 //@synthesize cacheType=_cacheType - In the implementation block
@property (nonatomic,retain) NSString * assetKey;                          //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSString * gizmoCacheIdentifier;              //@synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier - In the implementation block
@property (nonatomic,retain) NSData * assetData;                           //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,retain) SPAssetCacheSyncData * syncData;              //@synthesize syncData=_syncData - In the implementation block
@property (assign,nonatomic) unsigned long long error;                     //@synthesize error=_error - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)error;
-(void)setError:(unsigned long long)arg1 ;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(NSString *)assetKey;
-(void)setAssetKey:(NSString *)arg1 ;
-(void)setGizmoCacheIdentifier:(NSString *)arg1 ;
-(void)setAssetData:(NSData *)arg1 ;
-(void)setSyncData:(SPAssetCacheSyncData *)arg1 ;
-(unsigned long long)cacheType;
-(void)setCacheType:(unsigned long long)arg1 ;
-(NSString *)gizmoCacheIdentifier;
-(NSData *)assetData;
-(SPAssetCacheSyncData *)syncData;
@end

