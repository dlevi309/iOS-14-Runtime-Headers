/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDPreferences.framework/HIDPreferences
*/


@protocol HIDPreferencesProtocol <NSObject>
@required
-(void)set:(id)arg1 value:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;
-(void)setMultiple:(id)arg1 keysToRemove:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;
-(void)synchronize:(id)arg1 host:(id)arg2 domain:(id)arg3;
-(void)copy:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(/*^block*/id)arg5;
-(void)copyMultiple:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(/*^block*/id)arg5;
-(void)setDomain:(id)arg1 value:(id)arg2 domain:(id)arg3;
-(void)copyDomain:(id)arg1 domain:(id)arg2 reply:(/*^block*/id)arg3;

@end

