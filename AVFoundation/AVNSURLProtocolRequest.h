//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetCustomURLRequest.h>

@class AVAssetCustomURLBridgeForNSURLProtocol;

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest
{
    AVAssetCustomURLBridgeForNSURLProtocol *_bridge;
    struct _CFURLConnection *_connection;
    struct __CFError *_error;
}

@property(nonatomic) __weak AVAssetCustomURLBridgeForNSURLProtocol *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
@property(nonatomic) struct _CFURLConnection *connection;
- (void)dealloc;

@end

