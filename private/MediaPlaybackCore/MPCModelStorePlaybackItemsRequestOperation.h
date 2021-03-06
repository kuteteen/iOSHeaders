//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAsyncOperation.h"

@class MPCModelStorePlaybackItemsRequest, NSOperationQueue, NSProgress;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation
{
    NSProgress *_activeProgress;
    NSOperationQueue *_operationQueue;
    MPCModelStorePlaybackItemsRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_getShouldLibraryPersonalizeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)execute;
- (void)cancel;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end

