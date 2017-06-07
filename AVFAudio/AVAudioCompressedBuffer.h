//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFAudio/AVAudioBuffer.h>

@interface AVAudioCompressedBuffer : AVAudioBuffer
{
}

@property(nonatomic) unsigned int packetCount;
@property(readonly, nonatomic) void *data;
@property(readonly, nonatomic) struct AudioStreamPacketDescription *packetDescriptions;
@property(readonly, nonatomic) long long maximumPacketSize;
@property(readonly, nonatomic) unsigned int packetCapacity;
- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2;
- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2 maximumPacketSize:(long long)arg3;

@end

