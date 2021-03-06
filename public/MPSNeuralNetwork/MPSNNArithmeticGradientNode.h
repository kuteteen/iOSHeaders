//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSNNArithmeticGradientNode : MPSNNGradientFilterNode
{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    unsigned long long _secondaryStrideInPixelsX;
    unsigned long long _secondaryStrideInPixelsY;
    unsigned long long _secondaryStrideInFeatureChannels;
    float _minimumValue;
    float _maximumValue;
    _Bool _isSecondarySourceFilter;
}

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3;
@property(nonatomic) _Bool isSecondarySourceFilter; // @synthesize isSecondarySourceFilter=_isSecondarySourceFilter;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) unsigned long long secondaryStrideInFeatureChannels; // @synthesize secondaryStrideInFeatureChannels=_secondaryStrideInFeatureChannels;
@property(nonatomic) unsigned long long secondaryStrideInPixelsY; // @synthesize secondaryStrideInPixelsY=_secondaryStrideInPixelsY;
@property(nonatomic) unsigned long long secondaryStrideInPixelsX; // @synthesize secondaryStrideInPixelsX=_secondaryStrideInPixelsX;
@property(nonatomic) float bias; // @synthesize bias=_bias;
@property(nonatomic) float secondaryScale; // @synthesize secondaryScale=_secondaryScale;
@property(nonatomic) float primaryScale; // @synthesize primaryScale=_primaryScale;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 isSecondarySourceFilter:(_Bool)arg3;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3;

@end

