//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SXVideoAccessoryItem.h"
#import "SXVideoTransitionObserver.h"

@class NSString, SXNowPlayingButton, UIView;

@interface SXNowPlayingViewController : UIViewController <SXVideoTransitionObserver, SXVideoAccessoryItem>
{
    unsigned long long _displayMode;
    SXNowPlayingButton *_nowPlayingButton;
    id <SXNowPlayingVideoTitleProviding> _videoTitleProvider;
}

@property(readonly, nonatomic) id <SXNowPlayingVideoTitleProviding> videoTitleProvider; // @synthesize videoTitleProvider=_videoTitleProvider;
@property(readonly, nonatomic) SXNowPlayingButton *nowPlayingButton; // @synthesize nowPlayingButton=_nowPlayingButton;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;
- (void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithNowPlayingButton:(id)arg1 videoTitleProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *view;

@end

