//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVPlayerViewController.h>

@class NSString;
@protocol SiriUIVideoPlayerViewControllerDelegate;

@interface SiriUIVideoPlayerViewController : AVPlayerViewController
{
    _Bool _observingPlayerStatus;
    _Bool _observingItemStatus;
    _Bool _observingPlayback;
    _Bool _observingViewController;
    void *_playerStatusObserverContext;
    void *_itemStatusObserverContext;
    NSString *_savedAudioSessionCategory;
    unsigned long long _savedAudioSessionCategoryOptions;
    id <SiriUIVideoPlayerViewControllerDelegate> _videoPlayerControllerDelegate;
}

@property(nonatomic) __weak id <SiriUIVideoPlayerViewControllerDelegate> videoPlayerControllerDelegate; // @synthesize videoPlayerControllerDelegate=_videoPlayerControllerDelegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_restoreAudioPlaybackCategoryAndOptions;
- (void)_updateAudioSessionCategory;
- (void)_removeObservers;
- (void)_registerObservers;
- (void)_playbackDidFinish:(id)arg1;
@property(readonly, nonatomic) _Bool shouldPlayHighResolutionContent;
- (void)doneButtonTapped:(id)arg1;
- (void)dealloc;
- (void)setPlayer:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

