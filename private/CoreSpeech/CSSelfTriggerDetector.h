//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSKeywordAnalyzerNDAPIScoreDelegate.h"
#import "CSSpeechManagerDelegate.h"

@class CSAsset, CSKeywordAnalyzerNDAPI, CSSpeechManager, NSObject<OS_dispatch_queue>, NSString;

@interface CSSelfTriggerDetector : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeechManagerDelegate>
{
    float _keywordThreshold;
    NSObject<OS_dispatch_queue> *_queue;
    CSSpeechManager *_speechManager;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    unsigned long long _outputAudioChannel;
}

@property(nonatomic) unsigned long long outputAudioChannel; // @synthesize outputAudioChannel=_outputAudioChannel;
@property(nonatomic) float keywordThreshold; // @synthesize keywordThreshold=_keywordThreshold;
@property(retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer; // @synthesize keywordAnalyzer=_keywordAnalyzer;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(nonatomic) __weak CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)_reset;
- (void)reset;
- (void)start;
- (id)initWithManager:(id)arg1 asset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

