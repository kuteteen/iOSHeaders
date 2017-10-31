//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSSpeechManagerDelegate.h"
#import "CSVoiceTriggerDelegate.h"

@class CSAsset, NSObject<OS_dispatch_queue>, NSString, NSUserDefaults;

@interface CSSmartSiriVolume : NSObject <CSSpeechManagerDelegate, CSVoiceTriggerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeNoiseLevel;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeLKFS;
    struct vector<float, std::__1::allocator<float>> _floatBuffer;
    NSUserDefaults *_defaults;
    unsigned long long _startAnalyzeSampleCount;
    unsigned long long _samplesFed;
    _Bool _isStartSampleCountMarked;
    _Bool _firedTriggerEvent;
    unsigned long long _triggerEndTimeSampleOffset;
    unsigned long long _triggerStartTimeSampleOffset;
    _Bool _shouldPauseLKFSProcess;
    CSAsset *_currentAsset;
    float _systemVolumeDB;
    unsigned long long _noiseLevelChannelBitset;
    unsigned long long _LKFSChannelBitset;
    unsigned int _noiseLowerPercentile;
    unsigned int _noiseUpperPercentile;
    unsigned int _LKFSLowerPercentile;
    unsigned int _LKFSUpperPercentile;
    float _noiseTimeConstant;
    float _noiseMicSensitivityOffset;
    float _LKFSTimeConstant;
    float _LKFSMicSensitivityOffset;
    float _noiseTTSMappingInputRangeLow;
    float _noiseTTSMappingInputRangeHigh;
    float _noiseTTSMappingOutputRangeLow;
    float _noiseTTSMappingOutputRangeHigh;
    float _LKFSTTSMappingInputRangeLow;
    float _LKFSTTSMappingInputRangeHigh;
    float _LKFSTTSMappingOutputRangeLow;
    float _LKFSTTSMappingOutputRangeHigh;
    float _userOffsetInputRangeLow;
    float _userOffsetInputRangeHigh;
    float _userOffsetOutputRangeLow;
    float _userOffsetOutputRangeHigh;
    float _TTSVolumeLowerLimitDB;
    float _TTSVolumeUpperLimitDB;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_getSystemVolumeDB:(float)arg1;
- (float)_convertDB2Mag:(float)arg1;
- (void)_setDefaultParameters;
- (void)_resetVoiceTriggerInfo;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (void)_resetStartAnalyzeTime;
- (float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3;
- (float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7;
- (float)scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;
- (float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerDetectedSystemVolumeChange:(id)arg1 withVolume:(float)arg2;
- (void)reset;
- (void)resumeLKFSProcessing;
- (void)pauseLKFSProcessing;
- (float)estimateSoundLevelbySoundType:(long long)arg1;
- (void)_processAudioChunk:(id)arg1 soundType:(long long)arg2;
- (void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(_Bool)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5;
- (void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg1 soundType:(long long)arg2;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (id)initWithSamplingRate:(float)arg1 asset:(id)arg2 systemVolume:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

