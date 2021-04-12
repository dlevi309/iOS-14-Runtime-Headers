/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, NSString, ICSUserAddress, NSURL;

@interface ICSJournal : ICSComponent

@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (assign) int classification; 
@property (retain) ICSDate * created; 
@property (retain) NSString * description; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (retain) NSArray * exdate; 
@property (retain) NSArray * exrule; 
@property (retain) ICSDate * last_modified; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSArray * rdate; 
@property (retain) ICSDate * recurrence_id; 
@property (retain) NSArray * rrule; 
@property (assign) unsigned long long sequence; 
@property (assign) int status; 
@property (retain) NSString * summary; 
@property (retain) NSString * uid; 
@property (retain) NSURL * url; 
+(id)name;
-(BOOL)validate:(id*)arg1 ;
@end

