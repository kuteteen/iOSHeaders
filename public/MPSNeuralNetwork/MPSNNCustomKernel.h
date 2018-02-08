//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSKernel.h"

@interface MPSNNCustomKernel : MPSKernel
{
    id <MPSNNCustomKernelProvider> _provider;
    unsigned long long _maxSrcCount;
    struct SrcProperties *_srcProperties;
    id <MPSNNPadding> _padding;
    _Bool _isBackwards;
    id <MPSImageAllocator> _destinationImageAllocator;
    unsigned long long _destinationFeatureChannelOffset;
    CDStruct_1e3be3a8 _clipRect;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) CDStruct_1e3be3a8 clipRect; // @synthesize clipRect=_clipRect;
@property(retain, nonatomic) id <MPSImageAllocator> destinationImageAllocator; // @synthesize destinationImageAllocator=_destinationImageAllocator;
@property(retain, nonatomic) id <MPSNNPadding> padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) id <MPSNNCustomKernelProvider> kernelProvider; // @synthesize kernelProvider=_provider;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (struct NSArray *)resultStateBatchForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImages:(struct NSArray *)arg3;
- (id)resultStateForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationStates:(id)arg4 destinationImage:(struct NSArray *)arg5 prefetch:(_Bool)arg6;
- (void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationStates:(id)arg4 destinationImage:(id)arg5 prefetch:(_Bool)arg6;
- (void)hintBatchWithCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (void)hintWithCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationStates:(id)arg4 destinationImage:(id)arg5;
- (id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationStates:(id)arg4;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)setEdgeMode:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)edgeModeAtIndex:(unsigned long long)arg1;
- (void)setOffset:(CDStruct_d6af7fc0)arg1 atIndex:(unsigned long long)arg2;
- (CDStruct_d6af7fc0)offsetAtIndex:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 kernelProvider:(id)arg2;
- (id)setKernelProvider:(id)arg1;

@end

