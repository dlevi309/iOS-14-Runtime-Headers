/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2CoAPIOConsumer <NSObject>
@optional
-(void)didRegister;
-(void)didUnregister;

@required
-(coap_session_t*)shouldOpenSessionWithContext:(coap_context_t*)arg1;
-(void)didReceiveResponseInSession:(coap_session_t*)arg1 messageID:(unsigned long long)arg2 response:(coap_pdu_t*)arg3;
-(void)didFailToSendMessageInSession:(coap_session_t*)arg1 messageID:(unsigned long long)arg2 message:(coap_pdu_t*)arg3 reason:(unsigned long long)arg4;
-(void)didReceivePongInSession:(coap_session_t*)arg1 messageID:(unsigned long long)arg2;
-(void)didReceiveRequestInSession:(coap_session_t*)arg1 messageID:(unsigned long long)arg2 request:(coap_pdu_t*)arg3 response:(coap_pdu_t*)arg4;
-(void)didCloseSession;

@end

