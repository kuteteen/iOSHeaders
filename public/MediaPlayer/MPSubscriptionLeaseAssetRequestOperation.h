//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class SSVPlaybackLeaseRequest;

@interface MPSubscriptionLeaseAssetRequestOperation : MPAsyncOperation
{
    SSVPlaybackLeaseRequest *_playbackLeaseRequest;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) SSVPlaybackLeaseRequest *playbackLeaseRequest; // @synthesize playbackLeaseRequest=_playbackLeaseRequest;
- (void).cxx_destruct;
- (void)execute;

@end

