//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSURL, NSURLSession;

@interface CUReachabilityMonitor : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSURLSession *_urlSession;
    CDUnknownBlockType _completionHandler;
    NSURL *_destinationURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)invalidate;
- (void)_complete:(id)arg1;
- (void)_startDownload;
- (void)_activate;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

