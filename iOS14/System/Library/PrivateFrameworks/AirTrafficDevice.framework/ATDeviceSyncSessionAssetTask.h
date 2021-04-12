/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTrafficDevice/ATDeviceSyncSessionTask.h>
#import <libobjc.A.dylib/ATAssetLinkControllerObserver.h>

@protocol ATAssetClient, OS_dispatch_queue;
@class NSMutableOrderedSet, ATAssetLinkController, NSMutableDictionary, NSDictionary, NSMutableSet, ATThroughputCalculator, NSMapTable, NSObject, NSString;

@interface ATDeviceSyncSessionAssetTask : ATDeviceSyncSessionTask <ATAssetLinkControllerObserver> {

	id<ATAssetClient> _assetClient;
	NSMutableOrderedSet* _clientAssetsRemaining;
	NSMutableOrderedSet* _clientAssetsInProgress;
	NSMutableOrderedSet* _serverAssetsInProgress;
	ATAssetLinkController* _assetController;
	NSMutableDictionary* _detailedProgress;
	NSMutableDictionary* _syncProgresByAssetType;
	NSDictionary* _installedAssetMetrics;
	NSDictionary* _itemsWithEstimatedFileSize;
	NSMutableSet* _assetStreams;
	BOOL _addedTransportUpgradeException;
	double _taskStartTime;
	unsigned long long _totalAssetSize;
	ATThroughputCalculator* _throughputCalculator;
	NSMapTable* _assetToBytesMap;
	int _retrySendingAssetMetricsCount;
	BOOL _requestsComplete;
	BOOL _peerRequestsComplete;
	BOOL _deviceShouldReportSyncProgress;
	NSMutableDictionary* _progressMap;
	unsigned long long _successfullyCompletedItemCount;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)sessionGroupingKey;
-(void)cancel;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
-(void)_updateProperties;
-(id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(void)updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2 ;
-(void)_finishTaskWithError:(id)arg1 ;
-(void)_shouldDeviceReportSyncProgress;
-(void)_assetRequestsCompletedWithError:(id)arg1 ;
-(id)_serializedAssetRequestsFromRequestDictionary:(id)arg1 ;
-(void)_handleBeginAssetTaskRequest:(id)arg1 onMessagLink:(id)arg2 ;
-(void)_handleEndAssetTaskRequest:(id)arg1 onMessagLink:(id)arg2 ;
-(void)_handleAssetRequest:(id)arg1 onMessagLink:(id)arg2 ;
-(void)_handleUpdateSessionTaskRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleInstalledAssetMetricsChanged:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleAssetDownloadProgressed:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_updateDetailedProgressForCompletedAsset:(id)arg1 ;
-(void)_updateTaskDescription;
-(void)_updateProgressWithBytesTransferred:(unsigned long long)arg1 forAsset:(id)arg2 ;
-(id)_serializedAssetSyncProgressFromAssetCacheDictionary:(id)arg1 ;
-(id)_getRawInstalledAssetMetricsFromAssetClient;
-(void)_updateCachedInstalledAssetMetricsWithNewMetrics:(id)arg1 ;
-(id)_prepareInstalledAssetMetricsWithSerializedOutputFromClientMetrics:(id)arg1 ;
-(id)_serializedAssetsToDownloadDictionaryWithUpdatedProgressFromDownloadDictionary:(id)arg1 ;
-(id)_serializedDownloadedAssetsDictionaryFromDownloadedAssetsDictionary:(id)arg1 ;
-(id)_getMetricsWithCurrentProgressForInflightAssetsFromAssetMetrics:(id)arg1 ;
-(void)_sendUpdatedInstallMetrics;
-(void)_loadInstalledAssetMetricsFromSyncClient;
-(unsigned long long)_bytesDownloadedForAsset:(id)arg1 ;
-(void)_removeAssetFromProgressMap:(id)arg1 ;
-(id)_updateProgressAndGetFileProgressParamsForAsset:(id)arg1 ;
@end

