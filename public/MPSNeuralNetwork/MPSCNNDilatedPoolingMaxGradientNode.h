//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNPoolingGradientNode.h>

@interface MPSCNNDilatedPoolingMaxGradientNode : MPSCNNPoolingGradientNode
{
    unsigned long long _dilationRateX;
    unsigned long long _dilationRateY;
}

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7 dilationRateX:(unsigned long long)arg8 dilationRateY:(unsigned long long)arg9;
@property(readonly, nonatomic) unsigned long long dilationRateY; // @synthesize dilationRateY=_dilationRateY;
@property(readonly, nonatomic) unsigned long long dilationRateX; // @synthesize dilationRateX=_dilationRateX;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7 dilationRateX:(unsigned long long)arg8 dilationRateY:(unsigned long long)arg9;

@end

