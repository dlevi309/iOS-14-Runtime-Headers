/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcher.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class AVURLAsset, NSString, NSURLSession, NSMutableData, NSURL;

@interface LPMediaAssetFetcher : LPFetcher <NSURLSessionDataDelegate> {

	/*^block*/id _completionHandler;
	AVURLAsset* _asset;
	BOOL _hasAudio;
	NSString* _MIMEType;
	NSURLSession* _session;
	NSMutableData* _receivedData;
	NSURL* _URL;

}

@property (nonatomic,retain) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)audioProperties;
-(void)_completedWithAudio:(id)arg1 ;
-(void)fetchWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)stopLoading;
-(NSURL *)URL;
-(void)cancel;
-(void)_resolveVideo;
-(void)_completedWithVideo:(id)arg1 ;
-(id)videoProperties;
@end

