//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMusicPlayerController.h>

@class MPCPlayerPath, MPCRemotePlaybackEngine;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController
{
    long long _notificationsCount;
    MPCPlayerPath *_playerPath;
    MPCRemotePlaybackEngine *_playbackEngine;
}

+ (_Bool)_isPlayerInstalled;
@property(retain, nonatomic) MPCRemotePlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (void).cxx_destruct;
- (void)_playerPathDidChange:(id)arg1;
- (void)_playbackEngineDidDisconnect:(id)arg1;
- (void)performQueueTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endGeneratingPlaybackNotifications;
- (void)beginGeneratingPlaybackNotifications;
- (void)prepareToPlay;
- (id)_init;

@end

