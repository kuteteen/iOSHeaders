//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCAudioIOSink-Protocol.h>

@class AVCStatisticsCollector, NSDictionary, NSMutableArray, NSString, VCAudioPayload, VCAudioPayloadConfig, VCAudioRedBuilder, VCAudioTier, VCAudioTierPicker, VCPacketBundler, VCRedundancyControllerAudio, VCTransportSession;
@protocol VCAudioTransmitterDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject <VCAudioIOSink>
{
    VCPacketBundler *_audioBundler;
    VCAudioRedBuilder *_redBuilder;
    VCRedundancyControllerAudio *_redundancyController;
    struct opaqueVCAudioBufferList *_encodeBuffer;
    _Bool _lastIsTalking;
    double _lastTierSwitch;
    double _audioInterval;
    int _audioTierChangeRequestCount;
    int _audioTxBitrate;
    unsigned int _lastSentAudioSampleTime;
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
    unsigned char _inputMeter;
    long long _blockSize;
    float _blockSeconds;
    VCAudioTierPicker *_audioTierPicker;
    VCAudioTier *_currentAudioTier;
    VCAudioTier *_requestedAudioTier;
    char *_lastInputSampleBuffer;
    unsigned int _lastInputSampleBufferSize;
    int _audioHeaderSize;
    _Bool _audioTierHysteresis;
    void *_packetThread;
    unsigned int _packetSent;
    unsigned int _targetBitrate;
    unsigned int _currentTargetBitrate;
    unsigned int _currentDuplication;
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _redundancyControllerNumPaylaods;
    unsigned int _redundancyControllerMaxDelay20ms;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _sentAudioBytes;
    unsigned int _totalTxAudioBytes;
    unsigned int _estimateTxAudioBytes;
    unsigned int _audioFrameCounter;
    unsigned int _silenceFrameCounter;
    unsigned int _vadSegmentCounter;
    struct tagHANDLE *_rtpHandle;
    struct tagHANDLE *_afrc;
    struct tagHANDLE *_mediaQueue;
    struct tagHANDLE *_rtpVideo;
    void *_controlInfoGenerator;
    _Bool _useAFRC;
    _Bool _isUseCaseWatchContinuity;
    _Bool _allowAudioSwitching;
    _Bool _supportsAdaptation;
    _Bool _needsPacketThread;
    _Bool _isLocalCellular_LowestConnectionQuality;
    _Bool _isRemoteCellular_LowestConnectionQuality;
    _Bool _isConnectedOnIPv6_LowestConnectionQuality;
    _Bool _isRedEnabled;
    unsigned int _redNumPayloads;
    unsigned int _redMaxDelay20ms;
    _Bool _transmitROC;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_currentDTXPayload;
    VCAudioPayload *_currentAudioPayload;
    int _currentRedPayloadType;
    unsigned int _currentAudioCap;
    struct AudioStreamBasicDescription _inputFormat;
    struct opaqueRTCReporting *_reportingAgent;
    int _operatingMode;
    VCTransportSession *_transportSession;
    id _delegate;
    _Bool _ignoreSilence;
    double _lastReportingCallbackTime;
}

@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) _Bool ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property(readonly, nonatomic) _Bool isRedEnabled; // @synthesize isRedEnabled=_isRedEnabled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(readonly, nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime;
@property unsigned char inputMeter; // @synthesize inputMeter=_inputMeter;
@property(readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate=_audioTxBitrate;
@property(readonly, nonatomic) VCAudioTier *currentAudioTier; // @synthesize currentAudioTier=_currentAudioTier;
@property(readonly, nonatomic) VCPacketBundler *audioBundler; // @synthesize audioBundler=_audioBundler;
- (void)setRedNumPayloads:(int)arg1 withMaxDelay:(int)arg2;
- (void)logTierInfo:(int)arg1;
@property(readonly, nonatomic) unsigned int redMaxDelay20ms;
@property(readonly, nonatomic) unsigned int redNumPayloads;
@property(readonly, nonatomic) unsigned int sentAudioBytes;
- (int)sendAudioPacket:(char *)arg1 payloadLength:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4 marker:(int)arg5 nextInterval:(float)arg6 padding:(char *)arg7 paddingLength:(unsigned char)arg8 sendReport:(int)arg9;
- (int)sendAudioPacket:(struct tagAudioPacketData)arg1;
- (void *)generateControlInfo;
- (_Bool)sendAudioPacketImpl:(struct tagAudioPacketData *)arg1 bytesSent:(int *)arg2;
- (void)stop;
- (void)start;
- (void)useAudioTier:(id)arg1;
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;
- (void)updateAudioTxBitrate;
- (_Bool)setupAudioTierPicker;
- (id)supportedRedNumPayloadsForMode:(int)arg1;
- (void)setupAudioHeaderSize;
- (int)bundleAndSendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hasNewSamples:(_Bool)arg6 voiceActivity:(_Bool)arg7;
- (int)sendAudioBundle:(_Bool)arg1 atTimeStamp:(unsigned int)arg2 nextInterval:(float)arg3;
- (_Bool)chooseAudioNetworkBitrate;
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)arg1 numInputSamples:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5 isTalking:(_Bool)arg6;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)encodeBundleAndSendAudio:(struct opaqueVCAudioBufferList *)arg1 sampleCount:(unsigned int)arg2;
- (unsigned int)maximumSamplesPerFrame;
- (_Bool)allocateLastInputSampleBuffer:(unsigned int)arg1;
- (_Bool)setupAudioEncoders;
- (void)removeUnusedAudioPayloads;
- (id)usedAudioPayloadForType:(int)arg1;
- (_Bool)shouldUseDtx;
- (float)nextAudioInterval:(int)arg1;
@property(readonly, nonatomic) NSDictionary *dtxMetrics;
- (void)registerReportingTask;
- (_Bool)setupAudio:(id)arg1;
- (void)setCellTech:(int)arg1 remoteCellular:(int)arg2 isIPV6:(int)arg3 audioCap:(unsigned int)arg4;
- (void)handleCodecRateModeChange:(unsigned char)arg1 withBitrate:(unsigned int)arg2;
- (_Bool)isLocalOrRemoteOnCellular;
@property id <VCAudioTransmitterDelegate> delegate;
@property(readonly, nonatomic) VCAudioPayloadConfig *currentAudioPayloadConfig;
- (void)dealloc;
- (void)initAudioValues;
- (unsigned int)redundancyControllerModeForOperatingMode:(int)arg1 isRedEnabled:(_Bool)arg2;
- (id)initWithConfig:(id)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

