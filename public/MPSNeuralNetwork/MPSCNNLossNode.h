//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MPSCNNLossDescriptor, MPSNNLabelsNode;

@interface MPSCNNLossNode : MPSNNFilterNode
{
    MPSNNLabelsNode *_labels;
    MPSCNNLossDescriptor *_descriptor;
}

+ (id)nodeWithSource:(id)arg1 lossDescriptor:(id)arg2;
@property(readonly, retain, nonatomic) MPSNNLabelsNode *inputLabels; // @synthesize inputLabels=_labels;
- (struct FilterGraphNode *)newFilterNode;
- (void)dealloc;
- (id)gradientFilterWithSources:(id)arg1;
- (id)initWithSource:(id)arg1 lossDescriptor:(id)arg2;

@end

