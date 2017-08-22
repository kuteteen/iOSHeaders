//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLComputePipelineState-Protocol.h>

@class MTLIndirectArgumentBufferEmulationData, NSString;
@protocol MTLDevice;

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState>
{
    NSString *_label;
    id <MTLDevice> _device;
    MTLIndirectArgumentBufferEmulationData *_iabEmulationData;
}

@property(retain, nonatomic) MTLIndirectArgumentBufferEmulationData *IABEmulationData; // @synthesize IABEmulationData=_iabEmulationData;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup; // @dynamic maxTotalThreadsPerThreadgroup;
@property(readonly) unsigned long long staticThreadgroupMemoryLength; // @dynamic staticThreadgroupMemoryLength;
@property(readonly) Class superclass;
@property(readonly) unsigned long long threadExecutionWidth; // @dynamic threadExecutionWidth;

@end

