//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WCQueueManager : NSObject
{
    _Bool _canSend;
    _Bool _messageOutstanding;
    NSMutableArray *_messageQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_inFlightMessages;
}

@property(retain) NSMutableDictionary *inFlightMessages; // @synthesize inFlightMessages=_inFlightMessages;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property _Bool messageOutstanding; // @synthesize messageOutstanding=_messageOutstanding;
@property _Bool canSend; // @synthesize canSend=_canSend;
- (void).cxx_destruct;
- (void)onqueue_clearQueuedMessages;
- (void)onqueue_dequeueMessage;
- (id)onqueue_peekMessage;
- (void)onqueue_enqueueMessage:(id)arg1;
- (void)onqueue_cancelDaemonMessages;
- (void)onqueue_cancelQueuedMessages;
- (void)cancelQueuedMessages;
- (void)onqueue_handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (void)onqueue_handleAcceptanceWithCurrentAccepted:(_Bool)arg1 nextAvailable:(_Bool)arg2;
- (void)onqueue_handleFailedDaemonConnectionForQueuedMessage:(id)arg1;
- (void)onqueue_attemptToSend;
- (void)onqueue_sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onqueue_allowMessageSending;
- (void)allowMessageSending;
- (id)init;

@end

