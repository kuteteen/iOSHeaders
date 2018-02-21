//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SXVideoTransitionObserver.h"

@class NFStateMachine, NSString, SXAdvanceButton, SXSkipCountdownView, UIActivityIndicatorView;

@interface SXSkipViewController : UIViewController <SXVideoTransitionObserver>
{
    SXAdvanceButton *_advanceButton;
    SXSkipCountdownView *_countdownView;
    UIActivityIndicatorView *_activityIndicator;
    id <SXVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SXVideoSkipLockObserverFactory> _skipLockObserverFactory;
    id <SXVideoLoadingStateObserving> _loadingStateObserver;
    id <SXVideoSkipLockObserving> _skipLockObserver;
    NFStateMachine *_stateMachine;
}

@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) id <SXVideoSkipLockObserving> skipLockObserver; // @synthesize skipLockObserver=_skipLockObserver;
@property(retain, nonatomic) id <SXVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(readonly, nonatomic) id <SXVideoSkipLockObserverFactory> skipLockObserverFactory; // @synthesize skipLockObserverFactory=_skipLockObserverFactory;
@property(readonly, nonatomic) id <SXVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) SXSkipCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(readonly, nonatomic) SXAdvanceButton *advanceButton; // @synthesize advanceButton=_advanceButton;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAdvanceButton:(id)arg1 countdownView:(id)arg2 loadingStateObserverFactory:(id)arg3 skipLockObserverFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

