//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPServerObjectProxy.h>

#import <MediaPlayer/MPMusicPlayerController-Protocol.h>

@class BKSProcessAssertion, MPMediaItemCollection, MPMediaQuery, MPMusicPlayerController;

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController>
{
    unsigned int _clientPort;
    long long _inBlockHandlingPlaybackStateChangedMessageFromServer;
    MPMediaItemCollection *_itemCollection;
    MPMusicPlayerController *_musicPlayerController;
    long long _playbackNotificationObservers;
    long long _playbackState;
    _Bool _preparedToPlay;
    BKSProcessAssertion *_processAssertion;
    MPMediaQuery *_query;
    struct __CFRunLoopSource *_runLoopSource;
    unsigned int _didCheckIn:1;
    unsigned int _useApplicationSpecificQueue:1;
    unsigned int _useCachedPlaybackState:1;
    unsigned int _cachedPlaybackStateIsValid:1;
    unsigned int _allowsBackgroundVideo:1;
    unsigned int _wantsQueueModificationsDisabled:1;
    CDUnknownBlockType _prepareToPlayCompletionHandler;
}

- (void).cxx_destruct;
- (id)_bundleIdentifier;
@property _Bool inBlockHandlingPlaybackStateChangedMessageFromServer;
- (void)acquireProcessAssertion;
- (void)serverConnectionDied;
- (void)didPrepareForRemoteSelectorInvocation;
- (_Bool)prepareForRemoteSelectorInvocation;
- (void)dealloc;
- (id)initWithMusicPlayerController:(id)arg1;

@end

