//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSUtils : NSObject
{
}

+ (_Bool)hasRemoteCoreSpeech;
+ (_Bool)supportCSTwoShotDecision;
+ (_Bool)supportSelfTriggerSuppression;
+ (_Bool)supportOpportunisticZLL;
+ (_Bool)supportPremiumAssets;
+ (_Bool)supportKeywordDetector;
+ (_Bool)supportContinuousVoiceTrigger;
+ (_Bool)shouldRunVTOnCS;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1;
+ (id)alertMuteSettings;
+ (id)opusRecordSettings;
+ (id)lpcmRecordSettings;
+ (id)voiceTriggerRecordContext;
+ (struct AudioStreamBasicDescription)aiffFileASBD;
+ (struct AudioStreamBasicDescription)utteranceFileASBD;
+ (struct AudioStreamBasicDescription)wavFileNarrowBandASBD;
+ (struct AudioStreamBasicDescription)wavFileASBD;
+ (struct AudioStreamBasicDescription)lpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)lpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)opusNarrowBandASBD;
+ (struct AudioStreamBasicDescription)opusASBD;
+ (struct AudioStreamBasicDescription)lpcmNarrowBandASBD;
+ (struct AudioStreamBasicDescription)lpcmASBD;
+ (_Bool)readAudioChunksFrom:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)iterateBitset:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (double)getFrequency;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (_Bool)isRecordContextVoiceTrigger:(id)arg1;
+ (id)assetHashInResourcePath:(id)arg1;

@end
