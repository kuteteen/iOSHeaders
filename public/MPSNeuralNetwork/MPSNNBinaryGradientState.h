//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSState.h"

@interface MPSNNBinaryGradientState : MPSState
{
    CDStruct_d6af7fc0 _primaryOffset;
    CDStruct_d6af7fc0 _secondaryOffset;
    CDStruct_1e3be3a8 _clipRect;
    CDStruct_da2e99ad _destSize;
    unsigned long long _destFeatureChannels;
    unsigned long long _destinationFeatureChannelOffset;
    unsigned long long _primarySourceFeatureChannelOffset;
    unsigned long long _secondarySourceFeatureChannelOffset;
    unsigned long long _primarySourceFeatureChannelMaxCount;
    unsigned long long _secondarySourceFeatureChannelMaxCount;
    unsigned long long _primaryKernelWidth;
    unsigned long long _primaryKernelHeight;
    unsigned long long _secondaryKernelWidth;
    unsigned long long _secondaryKernelHeight;
    unsigned long long _primaryStrideInPixelsX;
    unsigned long long _primaryStrideInPixelsY;
    unsigned long long _secondaryStrideInPixelsX;
    unsigned long long _secondaryStrideInPixelsY;
    unsigned long long _primaryDilationRateX;
    unsigned long long _primaryDilationRateY;
    unsigned long long _secondaryDilationRateX;
    unsigned long long _secondaryDilationRateY;
    id <MPSNNPadding> _padding;
    unsigned long long _maxBatchSize;
    _Bool _isBackwards;
    unsigned long long _primaryEdgeMode;
    unsigned long long _secondaryEdgeMode;
    CDStruct_da2e99ad _primarySrcSize;
    CDStruct_da2e99ad _secondarySrcSize;
    _Bool _initOnce;
    unsigned int _provenance;
}

- (void)dealloc;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;

@end

