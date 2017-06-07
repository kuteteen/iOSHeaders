//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/ADPlayerDelegate-Protocol.h>
#import <iAd/ADTVMediaControlsViewControllerDelegate-Protocol.h>

@class ADPlayer, ADTVMediaControlsViewController, ADTVPrerollVideoView, AVPlayerViewController, NSString;

@interface ADTVPrerollController : NSObject <ADPlayerDelegate, ADTVMediaControlsViewControllerDelegate>
{
    AVPlayerViewController *_avPlayerViewController;
    _Bool _setupInProgress;
    ADTVPrerollVideoView *_videoView;
    ADTVMediaControlsViewController *_mediaControlsViewController;
    ADPlayer *_adPlayer;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool setupInProgress; // @synthesize setupInProgress=_setupInProgress;
@property(retain, nonatomic) ADPlayer *adPlayer; // @synthesize adPlayer=_adPlayer;
@property(retain, nonatomic) ADTVMediaControlsViewController *mediaControlsViewController; // @synthesize mediaControlsViewController=_mediaControlsViewController;
@property(retain, nonatomic) ADTVPrerollVideoView *videoView; // @synthesize videoView=_videoView;
- (void)adtvMediaControlsPrivacyButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsActionButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsSkipButtonWasPressed:(id)arg1;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (void)adPlayerDidBeginAction:(id)arg1;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
@property(nonatomic) __weak AVPlayerViewController *avPlayerViewController;
- (void)_handlePlaybackCompletion:(_Bool)arg1;
- (id)_advertisementView;
- (_Bool)_canBeginPlayback;
- (void)shutdown;
- (void)cancel;
- (void)playPrerollAdWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAVPlayerViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
