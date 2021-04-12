/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSURL;

@interface ICStoreHLSAssetInfo : NSObject <NSCopying> {

	NSDictionary* _itemResponseDictionary;
	BOOL _isiTunesStoreStream;
	NSURL* _keyCertificateURL;
	NSURL* _keyServerURL;
	NSURL* _playlistURL;

}

@property (nonatomic,copy) NSURL * playlistURL;                                              //@synthesize playlistURL=_playlistURL - In the implementation block
@property (nonatomic,copy) NSURL * keyCertificateURL;                                        //@synthesize keyCertificateURL=_keyCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * keyServerURL;                                             //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (assign,getter=isiTunesStoreStream,nonatomic) BOOL iTunesStoreStream;              //@synthesize isiTunesStoreStream=_isiTunesStoreStream - In the implementation block
@property (nonatomic,copy,readonly) NSURL * alternatePlaylistURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyServerURL; 
-(void)setKeyCertificateURL:(NSURL *)arg1 ;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(void)setPlaylistURL:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isiTunesStoreStream;
-(NSURL *)playlistURL;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(NSURL *)alternatePlaylistURL;
-(NSURL *)alternateKeyCertificateURL;
-(NSURL *)alternateKeyServerURL;
-(void)setITunesStoreStream:(BOOL)arg1 ;
@end

