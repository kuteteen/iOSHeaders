//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeSync/TSAudioTimeErrorCorrelator.h>

@interface TSAudioTimeErrorCorrelatorResampler : TSAudioTimeErrorCorrelator
{
    float *_scratchBuffer;
    float *_channelABuffer;
    float *_channelBBuffer;
    float *_correlationBuffer;
    float *_upsamplerFilterCoefficientsBuffer;
    long long _upsamplerFilterCoefficientsLength;
}

- (void)dealloc;
- (void)_makeBlock;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;

@end

