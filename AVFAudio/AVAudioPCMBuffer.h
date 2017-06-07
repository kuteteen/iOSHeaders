//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFAudio/AVAudioBuffer.h>

@interface AVAudioPCMBuffer : AVAudioBuffer
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) short **int16ChannelData;
@property(readonly, nonatomic) int **int32ChannelData;
@property(readonly, nonatomic) float **floatChannelData;
- (void)_initChannelPtrs;
@property(readonly, nonatomic) unsigned long long stride;
@property(nonatomic) unsigned int frameLength;
- (void)setByteLength:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int frameCapacity;
- (id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned int)arg2;

@end

