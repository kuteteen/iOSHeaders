//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNMultiply;

@interface MPSCNNDropout : MPSCNNKernel
{
    float _keepProbability;
    unsigned long long _seed;
    struct mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> _engine;
    struct mutex _engineMutex;
    CDStruct_da2e99ad _maskStrideInPixels;
    MPSCNNMultiply *_arithmetic;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) CDStruct_14f26992 maskStrideInPixels; // @synthesize maskStrideInPixels=_maskStrideInPixels;
@property(readonly, nonatomic) unsigned long long seed; // @synthesize seed=_seed;
@property(readonly, nonatomic) float keepProbability; // @synthesize keepProbability=_keepProbability;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)privateResultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 commandBuffer:(id)arg4 isTemporary:(_Bool)arg5;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(CDStruct_14f26992)arg4;
- (void)resetSeed:(unsigned long long)arg1;

@end

