//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVVideoCompositing-Protocol.h>

@class CIContext, NSDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AVCoreImageFilterCustomVideoCompositor : NSObject <AVVideoCompositing>
{
    NSObject<OS_dispatch_group> *_filteringRequestsInFlight;
    _Bool _shouldCancelAllRequests;
    struct CGColorSpace *_dstColorSpace;
    NSObject<OS_dispatch_queue> *_defaultCIContextThreadSafety;
    CIContext *_defaultCIContext;
}

+ (void)initialize;
@property _Bool shouldCancelAllRequests; // @synthesize shouldCancelAllRequests=_shouldCancelAllRequests;
@property(readonly, nonatomic) _Bool supportsWideColorSourceFrames;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)startVideoCompositionRequest:(id)arg1;
- (id)defaultCIContext;
@property(readonly) NSObject<OS_dispatch_group> *filteringRequestsInFlight; // @synthesize filteringRequestsInFlight=_filteringRequestsInFlight;
- (void)renderContextChanged:(id)arg1;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
- (void)finalize;
- (void)dealloc;
- (void)_willDeallocOrFinalize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

