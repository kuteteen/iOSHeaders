//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/MTLCommandBuffer-Protocol.h>

@class NSError, NSString;
@protocol MTLCommandQueue, MTLDevice;

__attribute__((visibility("hidden")))
@interface EspressoCachedCommandBuffer : NSObject <MTLCommandBuffer>
{
    struct vector<Espresso::cached_command_encoder_status, std::__1::allocator<Espresso::cached_command_encoder_status>> encoder_statuses;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) unsigned long long status;
- (void)waitUntilCompleted;
- (void)commit;
- (void)enqueue;
- (id)computeCommandEncoder;
- (void)addEncoderStatus:(const struct cached_command_encoder_status *)arg1;
- (id)buildRealCommandBuffer:(id)arg1;

// Remaining properties
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(copy) NSString *label;
@property(readonly) _Bool retainedReferences;
@property(readonly) Class superclass;

@end
