//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class MTLRenderPassDescriptor, NSError, NSString;
@protocol MTLBlitCommandEncoder, MTLCommandQueue, MTLComputeCommandEncoder, MTLDevice, MTLDrawable, MTLParallelRenderCommandEncoder, MTLRenderCommandEncoder;

@protocol MTLCommandBuffer <NSObject>
@property(readonly) NSError *error;
@property(readonly) unsigned long long status;
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(copy) NSString *label;
@property(readonly) _Bool retainedReferences;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly) id <MTLDevice> device;
- (void)popDebugGroup;
- (void)pushDebugGroup:(NSString *)arg1;
- (id <MTLParallelRenderCommandEncoder>)parallelRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (id <MTLComputeCommandEncoder>)computeCommandEncoder;
- (id <MTLRenderCommandEncoder>)renderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (id <MTLBlitCommandEncoder>)blitCommandEncoder;
- (void)waitUntilCompleted;
- (void)addCompletedHandler:(void (^)(id <MTLCommandBuffer>))arg1;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id <MTLDrawable>)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id <MTLDrawable>)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id <MTLDrawable>)arg1;
- (void)addScheduledHandler:(void (^)(id <MTLCommandBuffer>))arg1;
- (void)commit;
- (void)enqueue;
@end

