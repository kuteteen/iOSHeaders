//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MPSCNNConvolutionStateNode;
@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNConvolutionNode : MPSNNFilterNode
{
    id <MPSCNNConvolutionDataSource> _weights;
}

+ (id)nodeWithSource:(id)arg1 weights:(id)arg2;
- (id)resultState;
@property(readonly, nonatomic) MPSCNNConvolutionStateNode *convolutionState;
- (struct FilterGraphNode *)newFilterNode;
- (void)dealloc;
- (id)initWithSource:(id)arg1 weights:(id)arg2 state:(id)arg3;
- (id)initWithSource:(id)arg1 weights:(id)arg2;

@end
