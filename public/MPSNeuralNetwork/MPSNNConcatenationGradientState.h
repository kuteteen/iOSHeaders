//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@interface MPSNNConcatenationGradientState : MPSNNGradientState
{
    unsigned int _sliceCount;
    struct MPSSliceInfo *_info;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
- (id)initWithResource:(id)arg1;

@end

