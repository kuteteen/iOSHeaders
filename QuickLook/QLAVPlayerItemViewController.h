//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/AVPlayerViewControllerDelegate-Protocol.h>

@class AVPlayer, AVPlayerViewController, NSString, QLOverlayPlayButton;

__attribute__((visibility("hidden")))
@interface QLAVPlayerItemViewController : QLItemViewController <AVPlayerViewControllerDelegate>
{
    QLOverlayPlayButton *_playButton;
    AVPlayerViewController *_playerViewController;
    _Bool _fullScreen;
    _Bool _mediaWasPausedOnResignActive;
    AVPlayer *_player;
    struct CGSize _imageSize;
    _Bool _isAudioOnly;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (_Bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)previewDidDisappear:(_Bool)arg1;
- (_Bool)canEnterFullScreen;
- (void)pause;
- (void)play;
- (void)enterFullScreen:(_Bool)arg1;
- (struct CGSize)imageSize;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(id)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

