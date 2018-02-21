//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNConvolutionGradient : MPSCNNGradientKernel
{
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _groups;
    unsigned long long _gradientOption;
    id <MTLBuffer> _weights;
    _Bool _fullyConnected;
    unsigned int _weightsDataType;
    _Bool _serializeWeightsAndBiases;
    id <MPSCNNConvolutionDataSource> _dataSource;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, retain, nonatomic) id <MPSCNNConvolutionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool serializeWeightsAndBiases; // @synthesize serializeWeightsAndBiases=_serializeWeightsAndBiases;
@property(nonatomic) unsigned long long gradientOption; // @synthesize gradientOption=_gradientOption;
@property(readonly, nonatomic) unsigned long long groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) unsigned long long sourceImageFeatureChannels; // @synthesize sourceImageFeatureChannels=_outputFeatureChannels;
@property(readonly, nonatomic) unsigned long long sourceGradientFeatureChannels; // @synthesize sourceGradientFeatureChannels=_inputFeatureChannels;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)biases;
- (id)weights;
- (void)dealloc;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2;
- (void)reloadWeightsAndBiasesWithDataSource:(id)arg1;
- (id)initWithDevice:(id)arg1 weights:(id)arg2;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (void)initialize:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3 serializeWeightsAndBiases:(_Bool)arg4;
- (void)initialize:(id)arg1 convDesc:(id)arg2 weights:(void *)arg3 dataType:(unsigned int)arg4 serializeWeightsAndBiases:(_Bool)arg5 fullyConnected:(_Bool)arg6;
- (id)initWithDevice:(id)arg1;

@end

