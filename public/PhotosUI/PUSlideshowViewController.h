//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "OKPresentationViewControllerDelegate.h"
#import "PHAirPlayControllerContentProvider.h"
#import "PHAirPlayControllerRouteObserver.h"
#import "PUSlideshowDisplayContext.h"
#import "PUSlideshowSettingsViewControllerDelegate.h"
#import "PUSlideshowViewModelChangeObserver.h"
#import "PUViewControllerSpecChangeObserver.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, OKPresentationViewController, PHPlaceholderView, PUSlideshowSession, PUSlideshowViewControllerSpec, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUSlideshowViewController : UIViewController <UIGestureRecognizerDelegate, PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewControllerDelegate, OKPresentationViewControllerDelegate, PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver, PUViewControllerSpecChangeObserver, PUSlideshowDisplayContext>
{
    OKPresentationViewController *_currentPresentationController;
    PUSlideshowViewControllerSpec *_spec;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _playerStateButtonItemIndex;
    _Bool __needsUpdateSpec;
    PUSlideshowSession *_session;
    unsigned long long _mode;
    id <PUSlideshowViewControllerDelegate> _delegate;
    PUSlideshowViewController *__secondScreenBrowser;
    PHPlaceholderView *__slideshowPlaceholderView;
    UIViewController *__slideshowSettingsViewController;
}

@property(retain, nonatomic, setter=_setSlideshowSettingsViewController:) UIViewController *_slideshowSettingsViewController; // @synthesize _slideshowSettingsViewController=__slideshowSettingsViewController;
@property(retain, nonatomic, setter=_setSlideshowPlaceHolderView:) PHPlaceholderView *_slideshowPlaceholderView; // @synthesize _slideshowPlaceholderView=__slideshowPlaceholderView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(retain, nonatomic, setter=_setSecondScreenBrowser:) PUSlideshowViewController *_secondScreenBrowser; // @synthesize _secondScreenBrowser=__secondScreenBrowser;
@property(nonatomic) __weak id <PUSlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) PUSlideshowSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)slideshowSession:(id)arg1 stopDisplayingPresentationViewController:(id)arg2;
- (void)slideshowSession:(id)arg1 startDisplayingPresentationViewController:(id)arg2;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (void)couchPotatoPlaybackFinished;
- (void)settingsDidFinished:(id)arg1;
- (id)ancestorViewOfInstance:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (_Bool)prefersStatusBarHidden;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)_updateSpecIfNeeded;
- (void)_invalidateSpec;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_updatePlaceholder;
- (void)_updateAirplayButton;
- (void)_updateRouteObservation;
- (void)_updatePlayerButton;
- (void)_updateChromeVisibility;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_removeSlideshowSettingsViewController;
- (void)_removeCurrentPresentationController;
- (void)viewWillLayoutSubviews;
- (void)_installPresentationController:(id)arg1;
- (void)_dismissSlideshow;
- (void)_handleStateChange;
- (void)_handleAppWillResignActiveNotification:(id)arg1;
- (void)_settingsButtonTapped:(id)arg1;
- (void)_airplayButtonTapped:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (void)_playerStateButtonTapped:(id)arg1;
- (id)visibleAssets;
- (void)_setupTapGesture;
- (void)_setupChromeBar;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)finishSession;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithSession:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

