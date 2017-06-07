//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject
{
    NSMutableDictionary *_requestIDToDownload;
    struct OpaqueFigCustomURLHandler *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void)_didReceiveData:(id)arg1 data:(struct __CFData *)arg2;
- (void)_didReceiveResponse:(id)arg1 response:(struct _CFURLResponse *)arg2;
- (_Bool)_willSendRequest:(id)arg1 request:(struct _CFURLRequest *)arg2 redirectionResponse:(struct _CFURLResponse *)arg3;
- (void)_didFinish:(id)arg1 error:(struct __CFError *)arg2;
- (void)_cancelRequestID:(unsigned long long)arg1;
- (int)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;

@end

