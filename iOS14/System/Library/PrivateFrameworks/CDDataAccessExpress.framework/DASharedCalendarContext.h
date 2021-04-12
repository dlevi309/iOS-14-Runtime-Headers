/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DASharedCalendarContext : NSObject {

	BOOL _shouldSyncCalendar;
	NSString* _calendarID;
	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) NSString * calendarID;                           //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                            //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldSyncCalendar;                           //@synthesize shouldSyncCalendar=_shouldSyncCalendar - In the implementation block
-(NSString *)accountID;
-(id)completionBlock;
-(void)finishedWithError:(id)arg1 ;
-(NSString *)calendarID;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)shouldSyncCalendar;
-(id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setShouldSyncCalendar:(BOOL)arg1 ;
@end

