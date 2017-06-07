//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFeedbackEngine.h>

@class AVHapticPlayer, NSMutableIndexSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UIFeedbackHapticEngine : _UIFeedbackEngine
{
    NSMutableIndexSet *_freeChannelIndexes;
    NSMutableSet *_playersInUse;
    _Bool _serverDown;
    AVHapticPlayer *_feedbackPlayer;
}

+ (_Bool)_supportsPlayingFeedback:(id)arg1;
+ (void)_setHapticPlayerCreationBlock:(CDUnknownBlockType)arg1;
+ (id)sharedEngine;
@property(nonatomic) _Bool serverDown; // @synthesize serverDown=_serverDown;
@property(retain, nonatomic) AVHapticPlayer *feedbackPlayer; // @synthesize feedbackPlayer=_feedbackPlayer;
- (void).cxx_destruct;
- (id)_stats_key;
- (void)_recycleFeedbackPlayers:(id)arg1;
- (void)_finishAndRecyclePlayers;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)_cooldownUnderlyingPlayerIfPossible;
- (void)_prewarmUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_releaseRenderResourcesIfPossible;
- (_Bool)_teardownUnderlyingPlayerIfPossible;
- (void)_resetChannelIndexes;
- (void)_startRunningFeedbackPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initializeFeedbackPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_createFeedbackPlayer;
- (void)_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_restartFeedbackPlayerAfterFailure:(id)arg1;
- (void)_feedbackPlayerDidFail:(id)arg1;
- (_Bool)_isSuspended;
- (void)_subscribeToFeedbackServerFailureNotifications;
- (double)currentTime;
- (void)_resetHapticPlayer;
- (id)init;

@end

