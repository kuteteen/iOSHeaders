//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNInstanceNormalization : MPSCNNKernel
{
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _gamma
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _beta
    id <MPSCNNInstanceNormalizationDataSource> _dataSource;
    unsigned long long _numberOfFeatureChannels;
    float _epsilon;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, retain, nonatomic) id <MPSCNNInstanceNormalizationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2;
- (id)debugDescription;
- (void)reloadDataSource:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2;

@end

