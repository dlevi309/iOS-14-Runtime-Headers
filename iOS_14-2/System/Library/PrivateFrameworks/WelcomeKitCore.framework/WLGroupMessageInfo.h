/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class NSString, NSArray;

@interface WLGroupMessageInfo : NSObject {

	BOOL _handleIDsAreComplete;
	NSString* _sourceThreadID;
	NSArray* _sortedHandleIDs;
	NSString* _roomName;
	NSString* _groupID;

}

@property (nonatomic,readonly) NSString * sourceThreadID;              //@synthesize sourceThreadID=_sourceThreadID - In the implementation block
@property (nonatomic,readonly) NSArray * sortedHandleIDs;              //@synthesize sortedHandleIDs=_sortedHandleIDs - In the implementation block
@property (nonatomic,readonly) BOOL handleIDsAreComplete;              //@synthesize handleIDsAreComplete=_handleIDsAreComplete - In the implementation block
@property (nonatomic,readonly) NSString * roomName;                    //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,readonly) NSString * groupID;                     //@synthesize groupID=_groupID - In the implementation block
+(id)groupMessageInfoWithSourceThreadID:(id)arg1 sortedHandleIDs:(id)arg2 handleIDsAreComplete:(BOOL)arg3 roomName:(id)arg4 groupID:(id)arg5 ;
-(NSString *)groupID;
-(NSString *)roomName;
-(NSString *)sourceThreadID;
-(NSArray *)sortedHandleIDs;
-(BOOL)handleIDsAreComplete;
@end

