//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFAudio/AVAudioUnit.h>

#import <AVFAudio/AVAudioMixing-Protocol.h>

@class NSString;

@interface AVAudioUnitMIDIInstrument : AVAudioUnit <AVAudioMixing>
{
}

- (void)sendMIDISysExEvent:(id)arg1;
- (void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2;
- (void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2 data2:(unsigned char)arg3;
- (void)sendProgramChange:(unsigned char)arg1 bankMSB:(unsigned char)arg2 bankLSB:(unsigned char)arg3 onChannel:(unsigned char)arg4;
- (void)sendProgramChange:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)sendPressureForKey:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (void)sendPressure:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)sendPitchBend:(unsigned short)arg1 onChannel:(unsigned char)arg2;
- (void)sendController:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (void)stopNote:(unsigned char)arg1 onChannel:(unsigned char)arg2;
- (void)startNote:(unsigned char)arg1 withVelocity:(unsigned char)arg2 onChannel:(unsigned char)arg3;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) float volume;

@end
