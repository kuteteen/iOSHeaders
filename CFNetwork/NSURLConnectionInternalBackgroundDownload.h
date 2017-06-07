//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLConnectionInternal.h>

#import <CFNetwork/NSURLConnectionRequired-Protocol.h>
#import <CFNetwork/SSDownloadHandlerDelegate-Protocol.h>
#import <CFNetwork/SSDownloadManagerObserver-Protocol.h>

@class NSAsyncSSDownloadManager, NSCountedSet, NSMutableArray, NSString, NSTimer, SSDownloadHandler;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate>
{
    struct __CFRunLoopSource *_source;
    NSMutableArray *_pendingOps;
    NSCountedSet *_runloops;
    SSDownloadHandler *_handler;
    NSAsyncSSDownloadManager *_manager;
    long long _downloadIdent;
    long long _ctLast;
    _Bool _terminated;
    NSTimer *_deferredStartTimer;
}

+ (void)_enableLogging;
+ (id)sharedDownloadManagerForMediaKind:(id)arg1 persistenceIdentifier:(id)arg2;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)_updateDownloadState:(id)arg1;
- (long long)_getDownloadIdent;
- (void)_updateClientWithCurrentWrites:(id)arg1;
- (void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;
- (_Bool)downloadHandler:(id)arg1 pauseSession:(id)arg2;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (void)downloadHandlerDidDisconnect:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_sourcePerform;
- (void)cancel;
- (void)start;
- (void)_createNewDownload;
- (void)setHandlerForDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_managerFailedToStartInTime;
- (void)dealloc;
- (void)_invalidate;
- (void)_sendTerminalDidFinishToDelegate:(id)arg1;
- (void)_sendTerminalErrorToDelegate:(id)arg1;
- (void)_postTerminalInvocation:(id)arg1;
- (void)_preTerminalInvocation:(id)arg1;
- (void)_invokeInvocation:(id)arg1 withConnection:(id)arg2;
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithInfo:(const struct InternalInit *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

