//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDHTTPDevice, HMFHTTPClientConnection, HMFTimer, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface _HMDHTTPServerClientConnection : HMFObject
{
    HMDHTTPDevice *_device;
    HMFHTTPClientConnection *_connection;
    NSOperationQueue *_requestOperationQueue;
    NSMutableArray *_receiveMessageRequests;
    NSMutableDictionary *_pendingTransactionCompletionHandlers;
    NSOperationQueue *_transactionOperationQueue;
    HMFTimer *_lostConnectionTimer;
}

+ (id)shortDescription;
@property(readonly, nonatomic) HMFTimer *lostConnectionTimer; // @synthesize lostConnectionTimer=_lostConnectionTimer;
@property(readonly, nonatomic) NSOperationQueue *transactionOperationQueue; // @synthesize transactionOperationQueue=_transactionOperationQueue;
@property(readonly, nonatomic) NSMutableDictionary *pendingTransactionCompletionHandlers; // @synthesize pendingTransactionCompletionHandlers=_pendingTransactionCompletionHandlers;
@property(readonly, nonatomic) NSMutableArray *receiveMessageRequests; // @synthesize receiveMessageRequests=_receiveMessageRequests;
@property(readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property(retain, nonatomic) HMFHTTPClientConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) HMDHTTPDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)_reallySendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)dequeueRequest;
- (void)queueRequest:(id)arg1;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

