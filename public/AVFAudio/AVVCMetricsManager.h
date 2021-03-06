//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface AVVCMetricsManager : NSObject
{
    unsigned long long _voiceTriggerStartHostTime;
    unsigned long long _callToStartRecordHostTime;
    NSMutableDictionary *_publicMetrics;
}

+ (id)sharedManager;
+ (void)destroySharedManager;
+ (void)createSharedManager;
+ (struct CAMutex *)getLock;
@property(retain) NSMutableDictionary *publicMetrics; // @synthesize publicMetrics=_publicMetrics;
@property(nonatomic) unsigned long long callToStartRecordHostTime; // @synthesize callToStartRecordHostTime=_callToStartRecordHostTime;
@property(nonatomic) unsigned long long voiceTriggerStartHostTime; // @synthesize voiceTriggerStartHostTime=_voiceTriggerStartHostTime;
- (void).cxx_destruct;
- (void)logRecordRoute:(id)arg1 andPlaybackRoute:(id)arg2;
- (void)logRecordAudioFormat:(struct CAStreamBasicDescription)arg1;
- (int)resetAudioIssueDetector;
- (int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList)arg1 numFrames:(unsigned int)arg2 timeStamp:(const struct AudioTimeStamp *)arg3;
- (int)setAudioIssueDetectorFormat:(struct CAStreamBasicDescription)arg1 numFrames:(unsigned int)arg2;
- (_Bool)measureElapseTimeForMetric:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)retrieveMetrics;
- (void)dealloc;
- (id)init;

@end

