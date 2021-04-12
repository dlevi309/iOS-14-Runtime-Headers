/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNUICoreContactStoreFacade;
@class NSArray;

@interface CNUICoreContactRefetcher : NSObject {

	id<CNUICoreContactStoreFacade> _contactStore;
	NSArray* _contactsToRefetch;
	NSArray* _keysToFetch;

}

@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSArray * contactsToRefetch;                              //@synthesize contactsToRefetch=_contactsToRefetch - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                                    //@synthesize keysToFetch=_keysToFetch - In the implementation block
+(id)contactsByReplacingContacts:(id)arg1 withContactsHavingMatchingIdentifier:(id)arg2 ;
+(id)refetchedContacts:(id)arg1 fromStore:(id)arg2 keysToFetch:(id)arg3 ;
+(id)contactsFoundAndNotFoundByPartioningContacts:(id)arg1 usingFoundContacts:(id)arg2 ;
-(NSArray *)keysToFetch;
-(id<CNUICoreContactStoreFacade>)contactStore;
-(id)init;
-(id)allContacts;
-(id)initWithContactStore:(id)arg1 contactsToRefetch:(id)arg2 keysToFetch:(id)arg3 ;
-(id)foundContacts;
-(NSArray *)contactsToRefetch;
-(id)contactsFoundAndNotFound;
-(id)initWithContactStore:(id)arg1 contactsToRefetch:(id)arg2 ;
@end

