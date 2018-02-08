//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@class MPSCNNMultiply;

@interface MPSCNNDropoutGradient : MPSCNNGradientKernel
{
    float _keepProbability;
    unsigned long long _seed;
    CDStruct_da2e99ad _maskStrideInPixels;
    MPSCNNMultiply *_arithmetic;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) CDStruct_14f26992 maskStrideInPixels; // @synthesize maskStrideInPixels=_maskStrideInPixels;
@property(readonly, nonatomic) unsigned long long seed; // @synthesize seed=_seed;
@property(readonly, nonatomic) float keepProbability; // @synthesize keepProbability=_keepProbability;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(CDStruct_14f26992)arg4;

@end

