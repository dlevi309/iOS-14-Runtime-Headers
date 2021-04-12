/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteUsageMonitorProbe.h>

@class CNAutocompleteAggdProbe, NSNumber, NSString;

@interface CNAutocompleteAggdUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe> {

	CNAutocompleteAggdProbe* _aggdProbe;
	NSNumber* _selectedIndex;
	NSNumber* _selectedPredictionIndex;
	NSNumber* _lengthOfSearchString;
	NSNumber* _sourceType;
	NSNumber* _returnedDuetResults;

}

@property (nonatomic,retain) CNAutocompleteAggdProbe * aggdProbe;              //@synthesize aggdProbe=_aggdProbe - In the implementation block
@property (nonatomic,retain) NSNumber * selectedIndex;                         //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) NSNumber * selectedPredictionIndex;               //@synthesize selectedPredictionIndex=_selectedPredictionIndex - In the implementation block
@property (nonatomic,retain) NSNumber * lengthOfSearchString;                  //@synthesize lengthOfSearchString=_lengthOfSearchString - In the implementation block
@property (nonatomic,retain) NSNumber * sourceType;                            //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) NSNumber * returnedDuetResults;                   //@synthesize returnedDuetResults=_returnedDuetResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSNumber *)selectedIndex;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(NSNumber *)sourceType;
-(void)setSourceType:(NSNumber *)arg1 ;
-(void)sendData;
-(void)recordDuetReturnedResults:(BOOL)arg1 ;
-(void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1 ;
-(void)recordUserSelectedIndex:(unsigned long long)arg1 ;
-(void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1 ;
-(void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1 ;
-(void)recordUserIgnoredPredictionAfterDelay:(double)arg1 ;
-(void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2 ;
-(void)recordUserSawPredictions;
-(void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1 ;
-(void)recordUserSawCuratedResults:(unsigned long long)arg1 ;
-(id)initWithAggdProbe:(id)arg1 ;
-(CNAutocompleteAggdProbe *)aggdProbe;
-(void)setAggdProbe:(CNAutocompleteAggdProbe *)arg1 ;
-(void)setReturnedDuetResults:(NSNumber *)arg1 ;
-(void)setLengthOfSearchString:(NSNumber *)arg1 ;
-(void)setSelectedPredictionIndex:(NSNumber *)arg1 ;
-(NSNumber *)lengthOfSearchString;
-(NSNumber *)returnedDuetResults;
-(id)sourceKeysForSourceType:(unsigned long long)arg1 ;
-(NSNumber *)selectedPredictionIndex;
@end

