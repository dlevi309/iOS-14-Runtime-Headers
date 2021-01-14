/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPPlaybackImageLoader.h>

@class TVPExternalImageConfig, NSMutableSet, NSMutableDictionary, NSString;

@interface TVPExternalImageLoader : NSObject <TVPPlaybackImageLoader> {

	TVPExternalImageConfig* _config;
	NSMutableSet* _imageProxies;
	NSMutableDictionary* _imageProxyMappings;
	NSMutableSet* _loadedImageActualTimes;

}

@property (nonatomic,retain) TVPExternalImageConfig * config;                       //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSMutableSet * imageProxies;                           //@synthesize imageProxies=_imageProxies - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageProxyMappings;              //@synthesize imageProxyMappings=_imageProxyMappings - In the implementation block
@property (nonatomic,retain) NSMutableSet * loadedImageActualTimes;                 //@synthesize loadedImageActualTimes=_loadedImageActualTimes - In the implementation block
@property (nonatomic,readonly) double firstImageTime; 
@property (nonatomic,readonly) double lastImageTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TVPExternalImageConfig *)config;
-(double)lastImageTime;
-(id)initWithConfig:(id)arg1 ;
-(void)invalidate;
-(void)setConfig:(TVPExternalImageConfig *)arg1 ;
-(void)setImageProxies:(NSMutableSet *)arg1 ;
-(NSMutableSet *)imageProxies;
-(double)closestImageTimeForTime:(double)arg1 imageInterval:(double)arg2 ;
-(BOOL)imageIsLoadedForTime:(double)arg1 ;
-(id)loadedImageForTime:(double)arg1 ;
-(double)firstImageTime;
-(id)loadImagesForTimes:(id)arg1 maxSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)cancelImageLoadingForIdentifiers:(id)arg1 ;
-(double)closestImageTimeForTime:(double)arg1 ;
-(NSMutableDictionary *)imageProxyMappings;
-(unsigned long long)_closestImageIndexForTime:(double)arg1 actualTime:(double*)arg2 imageInterval:(double)arg3 ;
-(id)_closestURLForImageTime:(double)arg1 actualTime:(double*)arg2 ;
-(void)setImageProxyMappings:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)loadedImageActualTimes;
-(void)setLoadedImageActualTimes:(NSMutableSet *)arg1 ;
@end

