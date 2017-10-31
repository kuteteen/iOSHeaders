//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

@interface FMServerInteractionController : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *dq_inFlightCommands;
    NSMutableSet *inFlightCommands;
    NSOperationQueue *_queue;
    NSURLSession *_session;
    NSURLSessionConfiguration *_sessionConfiguration;
}

@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)processResponseForCommand:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)networkActivityStatus:(_Bool)arg1;
- (void)invalidate;
- (void)cancelAllCommands;
- (void)cancelCommand:(id)arg1;
- (void)sendCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (double)_simulatedLatency;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

