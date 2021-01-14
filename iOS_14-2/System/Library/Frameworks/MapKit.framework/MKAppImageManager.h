/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSCache, NSURLSession, geo_isolater, NSMapTable, NSMutableDictionary, NSString;

@interface MKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSCache* _iconCache;
	NSURLSession* _session;
	geo_isolater* _containersLock;
	NSMapTable* _containers;
	geo_isolater* _urlConnectionsLock;
	NSMutableDictionary* _urlConnections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedImageManager;
+(id)sharedCollectionCoverImageManager;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)loadAppImageAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithURLCache:(id)arg1 ;
-(void)_dispatchOnManThread:(/*^block*/id)arg1 ;
-(void)clearImageCache;
-(id)cachedImageAtURL:(id)arg1 ;
-(void)cancelLoadAppImageAtURL:(id)arg1 ;
@end

