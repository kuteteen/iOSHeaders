//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADAdRecipient.h"

@class ADAdSpace, ADInterstitialAdPresentationViewController, ADInterstitialView, NSString, UIView, UIViewController;

@interface ADInterstitialAd : NSObject <ADAdRecipient>
{
    id <ADInterstitialAdDelegate> _delegate;
    id <ADInterstitialAdDelegate> _internalDelegate;
    UIViewController *_internalPresentingViewController;
    _Bool _loaded;
    _Bool _displayed;
    _Bool _reUsed;
    _Bool _actionInProgress;
    _Bool _dimmingEnabled;
    _Bool _requestCalledbackError;
    _Bool _canLoadMoreThanOnce;
    _Bool _hasLoadedFirstAd;
    int _screenfuls;
    int _slotPosition;
    int _creativeType;
    long long _options;
    NSString *_adResponseId;
    long long _lastErrorCode;
    ADInterstitialAdPresentationViewController *_presentationViewController;
    ADInterstitialView *_interstitialView;
    ADAdSpace *_adSpace;
}

@property(nonatomic) _Bool hasLoadedFirstAd; // @synthesize hasLoadedFirstAd=_hasLoadedFirstAd;
@property(nonatomic) _Bool canLoadMoreThanOnce; // @synthesize canLoadMoreThanOnce=_canLoadMoreThanOnce;
@property(retain, nonatomic) ADAdSpace *adSpace; // @synthesize adSpace=_adSpace;
@property(retain, nonatomic) ADInterstitialView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(nonatomic) _Bool requestCalledbackError; // @synthesize requestCalledbackError=_requestCalledbackError;
@property(retain, nonatomic) ADInterstitialAdPresentationViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
@property(nonatomic) _Bool dimmingEnabled; // @synthesize dimmingEnabled=_dimmingEnabled;
@property(nonatomic, getter=isActionInProgress) _Bool actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(nonatomic) _Bool reUsed; // @synthesize reUsed=_reUsed;
@property(nonatomic) _Bool displayed; // @synthesize displayed=_displayed;
@property(nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property(nonatomic) int slotPosition; // @synthesize slotPosition=_slotPosition;
@property(nonatomic) int screenfuls; // @synthesize screenfuls=_screenfuls;
@property(copy, nonatomic) NSString *adResponseId; // @synthesize adResponseId=_adResponseId;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
- (id)currentAdIdentifier;
@property(readonly, nonatomic) _Bool requiresMRAID;
- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (void)missedOpportunityToFill;
- (void)adlibManagedVideoAdDidToggleToMute:(_Bool)arg1;
- (void)adlibManagedVideoAdDidTapVideo;
- (void)adlibManagedVideoAdDidTapForMoreInfo;
- (void)adlibManagedVideoAdDidCompletePlay:(int)arg1;
- (void)adlibManagedVideoAdDidPausePlay;
- (void)adlibManagedVideoAdDidResumePlay;
- (void)adlibManagedVideoAdDidImpress;
- (_Bool)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)privacyButtonWasTapped;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1;
- (void)resumeBannerMedia;
- (void)pauseBannerMedia;
- (void)storyboardViewControllerDidPresent;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)_notifyDelegateOfBannerLoad;
- (void)serverBannerViewDidLoad;
- (_Bool)_considerClosingAdSpace;
- (void)serverBannerViewWillLoad;
@property(readonly, nonatomic) int internalAdType;
- (void)_dismissModalInterstitial;
- (_Bool)hasImpressed;
- (int)clickAction;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setServerURL:(id)arg1;
- (id)serverURL;
- (id)identifier;
@property(nonatomic) __weak id <ADInterstitialAdDelegate> internalDelegate;
@property(nonatomic) __weak id <ADInterstitialAdDelegate> delegate;
- (void)_presentFromViewController:(id)arg1;
- (void)presentFromViewController:(id)arg1;
- (_Bool)presentInView:(id)arg1;
- (_Bool)_shouldClampPresentedFrame;
- (void)cancelAction;
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(nonatomic) __weak UIViewController *internalPresentingViewController;
@property(readonly, nonatomic) UIView *adSpaceView;
- (id)initWithCreativeType:(int)arg1 options:(long long)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

