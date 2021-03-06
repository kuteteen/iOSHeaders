//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import "PUAssetSharedViewModelChangeObserver.h"
#import "PUAssetViewModelChangeObserver.h"

@class NSDate, NSMutableSet, NSString, PUAssetReference, PUAssetsDataSource, PUCachedMapTable, PUMediaProvider, PXAutoloopScheduler;

@interface PUBrowsingViewModel : PUViewModel <PUAssetViewModelChangeObserver, PUAssetSharedViewModelChangeObserver>
{
    PUAssetReference *_currentAssetReference;
    NSDate *_currentAssetReferenceChangedDate;
    double _lastAssetWasCurrentForDuration;
    _Bool _browsingSpeedRegimeIsValid;
    _Bool _isBrowsingSpeedRegimeInvalidationScheduled;
    PUCachedMapTable *_viewModelByAssetReference;
    NSMutableSet *_invalidAssetViewModels;
    _Bool _allAssetViewModelsAreInvalid;
    PUCachedMapTable *_assetSharedViewModelByAsset;
    // Error parsing type: Ai, name: _ongoingEnumerations
    _Bool _videoContentAllowed;
    _Bool _isScrubbing;
    _Bool _isScrolling;
    _Bool _isAnimatingAnyTransition;
    _Bool _accessoryViewsDefaultVisibility;
    _Bool _isChromeVisible;
    _Bool _presentingOverOneUp;
    PUAssetsDataSource *_assetsDataSource;
    double _currentAssetTransitionProgress;
    NSString *_transitionDriverIdentifier;
    long long _browsingSpeedRegime;
    long long _lastChromeVisibilityChangeReason;
    id _lastChromeVisibilityChangeContext;
    PUAssetReference *_trailingAssetReference;
    PUAssetReference *_leadingAssetReference;
    long long __userNavigationDistance;
    long long __scrubbingSessionDistance;
    NSMutableSet *__animatingTransitionIdentifiers;
    NSMutableSet *__videoDisallowedReasons;
    PUMediaProvider *_mediaProvider;
    PXAutoloopScheduler *_autoloopScheduler;
    struct CGSize _secondScreenSize;
}

+ (void)initialize;
@property(retain, nonatomic) PXAutoloopScheduler *autoloopScheduler; // @synthesize autoloopScheduler=_autoloopScheduler;
@property(retain, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic, setter=_setVideoDisallowedReasons:) NSMutableSet *_videoDisallowedReasons; // @synthesize _videoDisallowedReasons=__videoDisallowedReasons;
@property(retain, nonatomic, setter=_setAnimatingTransitionIdentifiers:) NSMutableSet *_animatingTransitionIdentifiers; // @synthesize _animatingTransitionIdentifiers=__animatingTransitionIdentifiers;
@property(nonatomic, setter=_setScrubbingSessionDistance:) long long _scrubbingSessionDistance; // @synthesize _scrubbingSessionDistance=__scrubbingSessionDistance;
@property(nonatomic, setter=_setUserNavigationDistance:) long long _userNavigationDistance; // @synthesize _userNavigationDistance=__userNavigationDistance;
@property(retain, nonatomic, setter=_setLeadingAssetReference:) PUAssetReference *leadingAssetReference; // @synthesize leadingAssetReference=_leadingAssetReference;
@property(retain, nonatomic, setter=_setTrailingAssetReference:) PUAssetReference *trailingAssetReference; // @synthesize trailingAssetReference=_trailingAssetReference;
@property(nonatomic) struct CGSize secondScreenSize; // @synthesize secondScreenSize=_secondScreenSize;
@property(nonatomic, getter=isPresentingOverOneUp) _Bool presentingOverOneUp; // @synthesize presentingOverOneUp=_presentingOverOneUp;
@property(retain, nonatomic, setter=_setLastChromeVisibilityChangeContext:) id lastChromeVisibilityChangeContext; // @synthesize lastChromeVisibilityChangeContext=_lastChromeVisibilityChangeContext;
@property(nonatomic, setter=_setLastChromeVisibilityChangeReason:) long long lastChromeVisibilityChangeReason; // @synthesize lastChromeVisibilityChangeReason=_lastChromeVisibilityChangeReason;
@property(nonatomic, setter=setChromeVisible:) _Bool isChromeVisible; // @synthesize isChromeVisible=_isChromeVisible;
@property(nonatomic) _Bool accessoryViewsDefaultVisibility; // @synthesize accessoryViewsDefaultVisibility=_accessoryViewsDefaultVisibility;
@property(nonatomic, setter=_setAnimatingAnyTransition:) _Bool isAnimatingAnyTransition; // @synthesize isAnimatingAnyTransition=_isAnimatingAnyTransition;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic, setter=_setBrowsingSpeedRegime:) long long browsingSpeedRegime; // @synthesize browsingSpeedRegime=_browsingSpeedRegime;
@property(readonly, copy, nonatomic) NSString *transitionDriverIdentifier; // @synthesize transitionDriverIdentifier=_transitionDriverIdentifier;
@property(readonly, nonatomic) double currentAssetTransitionProgress; // @synthesize currentAssetTransitionProgress=_currentAssetTransitionProgress;
@property(retain, nonatomic) PUAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
- (void).cxx_destruct;
- (id)debugDetailedDescription;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)_badgeInfoPromiseForAssetReference:(id)arg1;
- (double)_focusValueForAsset:(id)arg1;
- (void)_updateNeighboringAssetReferences;
- (void)_updateAssetViewModel:(id)arg1;
- (void)_updateAssetViewModelsIfNeeded;
- (void)_invalidateAssetViewModel:(id)arg1;
- (void)_invalidateNeighboringAssetViewModels;
- (void)_invalidateAllAssetViewModels;
- (void)_handleAsyncBrowsingSpeedRegimeInvalidation;
- (void)_invalidateBrowsingSpeedRegimeAfterMaximumDelay:(double)arg1;
- (void)_updateScrubSpeedRegimeIfNeeded;
- (void)_invalidateBrowsingSpeedRegime;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (id)_assetSharedViewModelForAsset:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)assetSharedViewModelForAsset:(id)arg1;
- (id)assetViewModelForAssetReference:(id)arg1;
- (id)activeAssetReferences;
- (void)_setVideoContentAllowed:(_Bool)arg1;
- (void)setVideoContentAllowed:(_Bool)arg1 forReason:(id)arg2;
- (void)setChromeVisible:(_Bool)arg1 changeReason:(long long)arg2 context:(id)arg3;
- (void)setChromeVisible:(_Bool)arg1 changeReason:(long long)arg2;
- (void)_resetAccessoryViewsVisibilityToDefaultWithChangeReason:(long long)arg1;
- (void)setAccessoryViewsDefaultVisibility:(_Bool)arg1 changeReason:(long long)arg2;
- (void)setAnimating:(_Bool)arg1 transitionWithIdentifier:(id)arg2;
- (void)_setTransitionDriverIdentifier:(id)arg1;
- (void)_setCurrentAssetTransitionProgress:(double)arg1;
@property(retain, nonatomic) PUAssetReference *currentAssetReference;
- (void)setCurrentAssetReference:(id)arg1 transitionProgress:(double)arg2 transitionDriverIdentifier:(id)arg3;
- (void)didPerformChanges;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)currentChange;
- (id)newViewModelChange;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

