//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioSessionPortDescription, AVAudioSessionRouteDescription, NSArray, NSString;

@interface AVAudioSession : NSObject
{
    void *_impl;
}

+ (id)auxiliarySession;
+ (id)primarySession;
+ (id)retrieveSessionWithID:(unsigned int)arg1;
+ (id)sharedInstance;
- (void)privateUpdateOutputChannelCount:(id)arg1;
- (void)privateUpdateInputChannelCount:(id)arg1;
- (void)privateUpdateAudioFormat:(id)arg1;
- (void)privateUpdateAudioFormats:(id)arg1;
- (void)privateUpdateDataSources:(id)arg1 forInput:(_Bool)arg2;
- (void)privateUpdateInputGain:(id)arg1;
- (void)privateUpdatePromptStyle:(id)arg1;
- (void)privateUpdateOutputVolume:(id)arg1;
- (_Bool)privateSetPropertyValue:(unsigned int)arg1 withBool:(_Bool)arg2 error:(id *)arg3;
- (void)privateUpdatePiPAvailabilityChange:(id)arg1;
- (void)privateHandleSecondaryAudioHintChange:(id)arg1;
- (void)privateHandlePickableRoutesChange;
- (void)privateHandleServerDied;
- (void)privateMarkKVOPropertiesDirty:(unsigned long long)arg1;
- (void)privateInterruptionWithInfo:(id)arg1;
- (void)privateInputIsAvailableChanged:(id)arg1;
- (float)hapticThermalGain;
- (float)speakerThermalGain;
- (_Bool)setHapticThermalGain:(float)arg1 error:(id *)arg2;
- (_Bool)setSpeakerThermalGain:(float)arg1 error:(id *)arg2;
- (double)outputSampleRate;
- (double)inputSampleRate;
- (double)preferredOutputSampleRate;
- (_Bool)setPreferredOutputSampleRate:(double)arg1 error:(id *)arg2;
- (double)preferredInputSampleRate;
- (_Bool)setPreferredInputSampleRate:(double)arg1 error:(id *)arg2;
- (_Bool)decoupledIO;
- (_Bool)setAggregatedIOPreference:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)preferDecoupledIO:(_Bool)arg1 error:(id *)arg2;
- (double)preferredHardwareSampleRate;
- (long long)currentHardwareOutputNumberOfChannels;
- (long long)currentHardwareInputNumberOfChannels;
- (double)currentHardwareSampleRate;
- (_Bool)inputIsAvailable;
- (_Bool)clearInputPreferences:(id *)arg1;
- (_Bool)setIAmTheAssistant:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setDefaultChatMode:(id)arg1 error:(id *)arg2;
- (_Bool)silenceOutput:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setDisallowedPorts:(id)arg1 error:(id *)arg2;
- (_Bool)setActivationContext:(id)arg1 error:(id *)arg2;
- (_Bool)setPreferredHardwareSampleRate:(double)arg1 error:(id *)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)privateHandleServerReturned;
- (id)privateRefreshAvailableInputs;
@property(readonly) NSArray *availableInputs;
- (double)speechDetectionDeviceSampleRate;
- (unsigned long long)sessionType;
- (unsigned int)opaqueSessionID;
- (id)audioClockDevice;
- (_Bool)setAudioClockDevice:(id)arg1 error:(id *)arg2;
@property(readonly) AVAudioSessionRouteDescription *currentRoute;
@property(readonly) AVAudioSessionPortDescription *preferredInput;
- (_Bool)setPreferredInput:(id)arg1 error:(id *)arg2;
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setRoutingContextUID:(id)arg1 error:(id *)arg2;
- (_Bool)privateSetRouteSharingPolicy:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *mode;
@property(readonly) NSArray *availableModes;
- (long long)maximumOutputNumberOfChannels;
- (long long)maximumInputNumberOfChannels;
- (long long)outputNumberOfChannels;
- (long long)inputNumberOfChannels;
- (long long)preferredOutputNumberOfChannels;
- (long long)preferredInputNumberOfChannels;
- (unsigned long long)preferredIOBufferFrameSize;
- (double)preferredIOBufferDuration;
- (double)preferredSampleRate;
- (long long)interruptionPriority;
- (unsigned long long)IOBufferFrameSize;
- (double)IOBufferDuration;
- (double)outputSafetyOffset;
- (double)inputSafetyOffset;
- (double)outputLatency;
- (double)inputLatency;
- (double)sampleRate;
@property(readonly) _Bool secondaryAudioShouldBeSilencedHint;
@property(readonly, getter=isOtherAudioPlaying) _Bool otherAudioPlaying;
- (_Bool)isInputAvailable;
- (_Bool)isInputGainSettable;
- (id)outputDataSource;
- (id)outputDataSources;
- (id)inputDataSource;
- (id)inputDataSources;
- (id)privateGetSelectedDataSource:(_Bool)arg1;
- (id)privateGetDataSources:(_Bool)arg1;
- (struct AVAudioSessionImpl *)privateGetImplementation;
- (float)inputGain;
- (_Bool)fixHardwareFormatToMultiChannel:(_Bool)arg1 error:(id *)arg2;
- (_Bool)isHardwareFormatFixedToMultiChannel;
- (_Bool)setAudioHardwareControlFlags:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setBypassRingerSwitchPolicy:(_Bool)arg1 error:(id *)arg2;
- (void)setAllowAllBuiltInDataSources:(_Bool)arg1;
- (_Bool)allowAllBuiltInDataSources;
- (_Bool)lastActivationStoppedNowPlayingApp;
- (_Bool)setForceSoundCheck:(_Bool)arg1 error:(id *)arg2;
- (_Bool)forceSoundCheck;
- (_Bool)isPiPAvailable;
- (_Bool)isEarpieceActiveNoiseCancelationEnabled;
- (_Bool)isDolbyDigitalEncoderAvailable;
- (long long)audioFormat;
- (id)audioFormats;
- (unsigned long long)promptStyle;
- (float)outputVolume;
- (_Bool)setOutputDataSource:(id)arg1 error:(id *)arg2;
- (_Bool)setInputDataSource:(id)arg1 error:(id *)arg2;
- (_Bool)setInputGain:(float)arg1 error:(id *)arg2;
- (_Bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredInputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (_Bool)setInterruptionPriority:(long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredIOBufferFrameSize:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (_Bool)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
- (void)requestRecordPermission:(CDUnknownBlockType)arg1;
- (unsigned long long)recordPermission;
- (_Bool)setActive:(_Bool)arg1 withFlags:(long long)arg2 error:(id *)arg3;
- (_Bool)deactivateAndSetInterruptionPriority:(long long)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)privateSetOptions:(unsigned long long)arg1 forCategory:(id)arg2 error:(id *)arg3;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
@property(readonly) NSArray *availableCategories;
@property(readonly) unsigned long long routeSharingPolicy;
@property(readonly) unsigned long long categoryOptions;
@property(readonly) NSString *category;
- (id)privateConfigureRouteDescription:(id)arg1;
- (void)dealloc;
- (id)initAuxiliarySession;
- (id)initWithSessionID:(unsigned int)arg1;
- (id)initWithSessionType:(unsigned int)arg1;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
@property(readonly) _Bool isPrimary;

@end

