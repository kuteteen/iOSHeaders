//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNCustomNode : MPSNNFilterNode
{
    id <MPSNNCustomKernelProvider> _provider;
}

+ (id)nodeWithSource:(id)arg1 provider:(id)arg2;
+ (id)nodeWithSources:(id)arg1 provider:(id)arg2;
+ (id)nodeWithSources:(id)arg1 sourceStates:(id)arg2 provider:(id)arg3;
- (struct FilterGraphNode *)newFilterNode;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithSources:(id)arg1 sourceStates:(id)arg2 provider:(id)arg3;
- (id)initWithSource:(id)arg1 provider:(id)arg2;
- (id)initWithSources:(id)arg1 provider:(id)arg2;
- (void)dealloc;

@end

