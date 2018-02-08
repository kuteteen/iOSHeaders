//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@interface MPSCNNInstanceNormalizationGradientState : MPSNNGradientState
{
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _meanVarBuf
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _gammaBetaBuf
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _gradientBuf
    unsigned long long _numberOfFeatureChannels;
    float _epsilon;
    unsigned long long _gammaOffset;
    unsigned long long _betaOffset;
    unsigned long long _gradientForGammaOffset;
    unsigned long long _gradientForBetaOffset;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2;
@property(nonatomic) unsigned long long gradientForBetaOffset; // @synthesize gradientForBetaOffset=_gradientForBetaOffset;
@property(nonatomic) unsigned long long gradientForGammaOffset; // @synthesize gradientForGammaOffset=_gradientForGammaOffset;
@property(nonatomic) unsigned long long betaOffset; // @synthesize betaOffset=_betaOffset;
@property(nonatomic) unsigned long long gammaOffset; // @synthesize gammaOffset=_gammaOffset;
- (void)dealloc;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2;
@property(readonly, nonatomic) id <MTLBuffer> gradientForGammaAndBeta;
- (id)gammaAndBeta;

@end

