//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSNNConcatenationGradientNode : MPSNNGradientFilterNode
{
    unsigned long long _sourceIndex;
}

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3;

@end

