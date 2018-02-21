//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPSCNNConvolutionDescriptor, MPSCNNConvolutionGradientState, MPSCNNConvolutionWeightsAndBiasesState, NSString;

@protocol MPSCNNConvolutionDataSource <NSObject>
- (NSString *)label;
- (void)purge;
- (_Bool)load;
- (float *)biasTerms;
- (void *)weights;
- (MPSCNNConvolutionDescriptor *)descriptor;
- (unsigned int)dataType;

@optional
- (_Bool)updateWithGradientState:(MPSCNNConvolutionGradientState *)arg1 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg2;
- (MPSCNNConvolutionWeightsAndBiasesState *)updateWithCommandBuffer:(id <MTLCommandBuffer>)arg1 gradientState:(MPSCNNConvolutionGradientState *)arg2 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg3;
- (float *)lookupTableForUInt8Kernel;
-     // Error parsing type: ^16@0:8, name: rangesForUInt8Kernel
@end

