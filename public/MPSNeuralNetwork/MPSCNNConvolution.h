//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNNeuron, NSData;

@interface MPSCNNConvolution : MPSCNNKernel
{
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _layout;
    unsigned long long _groups;
    MPSCNNNeuron *_neuron_deprecated;
    id <MTLBuffer> _weights;
    id <MTLBuffer> _bias;
    unsigned long long _flags;
    _Bool _fullyConnected;
    id <MTLBuffer> _qWts;
    int _qType;
    struct NeuronInfo _neuronInfo;
    unsigned long long _scaleFactor;
    unsigned long long _channelMultiplier;
    unsigned int _weightsDataType;
    NSData *_biasOriginal;
    id <MTLBuffer> _neuronABuffer;
    unsigned long long _featureChannelsLayout;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned long long channelMultiplier; // @synthesize channelMultiplier=_channelMultiplier;
@property(readonly, nonatomic) unsigned long long subPixelScaleFactor; // @synthesize subPixelScaleFactor=_scaleFactor;
@property(readonly, nonatomic) unsigned long long groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) MPSCNNNeuron *neuron; // @synthesize neuron=_neuron_deprecated;
@property(readonly, nonatomic) unsigned long long featureChannelsLayout; // @synthesize featureChannelsLayout=_featureChannelsLayout;
@property(readonly, nonatomic) unsigned long long outputFeatureChannels; // @synthesize outputFeatureChannels=_outputFeatureChannels;
@property(readonly, nonatomic) unsigned long long inputFeatureChannels; // @synthesize inputFeatureChannels=_inputFeatureChannels;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 state:(id *)arg4;
- (id)debugDescription;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 weights:(id)arg2;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (id)initializeWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5 fullyConnected:(_Bool)arg6;
-     // Error parsing type: B84@0:8@16@24r^v32I40r^44r^f52i60r^f64Q72B80, name: initialize:convolutionDescriptor:kernelWeights:dataType:range:lookUpTable:qType:biasTerms:flags:fullyConnected:
- (id)initWithDevice:(id)arg1;
@property(readonly, nonatomic) float neuronParameterC;
@property(readonly, nonatomic) float neuronParameterB;
@property(readonly, nonatomic) float neuronParameterA;
@property(readonly, nonatomic) int neuronType;
@property(readonly, nonatomic) unsigned long long dilationRateY;
@property(readonly, nonatomic) unsigned long long dilationRateX;

@end

