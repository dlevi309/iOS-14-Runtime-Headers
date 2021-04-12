/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNScheduler;
@class NSArray, NSMutableArray, NSMutableIndexSet;

@interface _CNCombineLatestObservable : CNObservable {

	NSArray* _observables;
	NSMutableArray* _results;
	NSMutableArray* _tokens;
	NSMutableIndexSet* _activeObservableIndexes;
	NSMutableIndexSet* _silentObservableIndexes;
	id<CNScheduler> _resultScheduler;

}

@property (nonatomic,readonly) NSArray * observables;                                    //@synthesize observables=_observables - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                                 //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tokens;                                  //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * activeObservableIndexes;              //@synthesize activeObservableIndexes=_activeObservableIndexes - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * silentObservableIndexes;              //@synthesize silentObservableIndexes=_silentObservableIndexes - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resultScheduler;                          //@synthesize resultScheduler=_resultScheduler - In the implementation block
-(NSMutableArray *)results;
-(NSMutableArray *)tokens;
-(id)subscribe:(id)arg1 ;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(id)initWithObservables:(id)arg1 ;
-(id)initWithObservables:(id)arg1 resultScheduler:(id)arg2 schedulerProvider:(id)arg3 ;
-(NSArray *)observables;
-(void)observableAtIndex:(unsigned long long)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3 ;
-(void)observableAtIndexDidComplete:(unsigned long long)arg1 forObserver:(id)arg2 ;
-(void)observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3 ;
-(NSMutableIndexSet *)activeObservableIndexes;
-(NSMutableIndexSet *)silentObservableIndexes;
-(id<CNScheduler>)resultScheduler;
@end

