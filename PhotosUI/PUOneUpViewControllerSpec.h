//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewControllerSpec.h>

@class PUOneUpViewControllerSpecChange, UIColor;

__attribute__((visibility("hidden")))
@interface PUOneUpViewControllerSpec : PUViewControllerSpec
{
    _Bool _isChromeVisible;
    _Bool _isPresentedForPreview;
    _Bool _isShowingPlayPauseButtonInBars;
    _Bool _shouldPlaceButtonsInNavigationBar;
    _Bool _shouldUseCompactTitleView;
    _Bool _shouldUseContentGuideInsets;
    _Bool _shouldUseUserTransformTiles;
    _Bool _shouldDisplayBadges;
    _Bool _shouldDisplayAssetExplorerReviewScreenBadges;
    _Bool _shouldDisplayPlayButtons;
    _Bool _shouldDisplayProgressIndicators;
    _Bool _shouldAutoplayOnAppear;
    _Bool _shouldDisplayBufferingIndicators;
    _Bool _canDisplayLoadingIndicators;
    _Bool _shouldDisplayEmptyPlaceholder;
    _Bool _shouldUseCompactCommentsTitle;
    _Bool _shouldPinContentToTop;
    unsigned long long _options;
    double _maximumToolbarHeight;
    UIColor *_backgroundColorOverride;
    long long _tileInitialContentMode;
    struct CGSize _progressIndicatorSize;
    struct CGSize _bufferingIndicatorSize;
}

@property(nonatomic, setter=_setShouldPinContentToTop:) _Bool shouldPinContentToTop; // @synthesize shouldPinContentToTop=_shouldPinContentToTop;
@property(nonatomic, setter=_setTileInitialContentMode:) long long tileInitialContentMode; // @synthesize tileInitialContentMode=_tileInitialContentMode;
@property(nonatomic, setter=_setShouldUseCompactCommentsTitle:) _Bool shouldUseCompactCommentsTitle; // @synthesize shouldUseCompactCommentsTitle=_shouldUseCompactCommentsTitle;
@property(nonatomic, setter=_setBufferingIndicatorSize:) struct CGSize bufferingIndicatorSize; // @synthesize bufferingIndicatorSize=_bufferingIndicatorSize;
@property(nonatomic, setter=_setProgressIndicatorSize:) struct CGSize progressIndicatorSize; // @synthesize progressIndicatorSize=_progressIndicatorSize;
@property(retain, nonatomic, setter=_setBackgroundColorOverride:) UIColor *backgroundColorOverride; // @synthesize backgroundColorOverride=_backgroundColorOverride;
@property(nonatomic, setter=_setShouldDisplayEmptyPlaceholder:) _Bool shouldDisplayEmptyPlaceholder; // @synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder;
@property(nonatomic, setter=_setCanDisplayLoadingIndicators:) _Bool canDisplayLoadingIndicators; // @synthesize canDisplayLoadingIndicators=_canDisplayLoadingIndicators;
@property(nonatomic, setter=_setShouldDisplayBufferingIndicators:) _Bool shouldDisplayBufferingIndicators; // @synthesize shouldDisplayBufferingIndicators=_shouldDisplayBufferingIndicators;
@property(nonatomic, setter=_setShouldAutoplayOnAppear:) _Bool shouldAutoplayOnAppear; // @synthesize shouldAutoplayOnAppear=_shouldAutoplayOnAppear;
@property(nonatomic, setter=_setShouldDisplayProgressIndicators:) _Bool shouldDisplayProgressIndicators; // @synthesize shouldDisplayProgressIndicators=_shouldDisplayProgressIndicators;
@property(nonatomic, setter=_setShouldDisplayPlayButtons:) _Bool shouldDisplayPlayButtons; // @synthesize shouldDisplayPlayButtons=_shouldDisplayPlayButtons;
@property(nonatomic, setter=_setShouldDisplayAssetExplorerReviewScreenBadges:) _Bool shouldDisplayAssetExplorerReviewScreenBadges; // @synthesize shouldDisplayAssetExplorerReviewScreenBadges=_shouldDisplayAssetExplorerReviewScreenBadges;
@property(nonatomic, setter=_setShouldDisplayBadges:) _Bool shouldDisplayBadges; // @synthesize shouldDisplayBadges=_shouldDisplayBadges;
@property(nonatomic, setter=_setShouldUseUserTransformTiles:) _Bool shouldUseUserTransformTiles; // @synthesize shouldUseUserTransformTiles=_shouldUseUserTransformTiles;
@property(nonatomic, setter=_setShouldUseContentGuideInsets:) _Bool shouldUseContentGuideInsets; // @synthesize shouldUseContentGuideInsets=_shouldUseContentGuideInsets;
@property(nonatomic, setter=_setMaximumToolbarHeight:) double maximumToolbarHeight; // @synthesize maximumToolbarHeight=_maximumToolbarHeight;
@property(nonatomic, setter=_setShouldUseCompactTitleView:) _Bool shouldUseCompactTitleView; // @synthesize shouldUseCompactTitleView=_shouldUseCompactTitleView;
@property(nonatomic, setter=_setShouldPlaceButtonsInNavigationBar:) _Bool shouldPlaceButtonsInNavigationBar; // @synthesize shouldPlaceButtonsInNavigationBar=_shouldPlaceButtonsInNavigationBar;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic, setter=setShowingPlayPauseButtonInBars:) _Bool isShowingPlayPauseButtonInBars; // @synthesize isShowingPlayPauseButtonInBars=_isShowingPlayPauseButtonInBars;
@property(nonatomic, setter=setPresentedForPreview:) _Bool isPresentedForPreview; // @synthesize isPresentedForPreview=_isPresentedForPreview;
@property(nonatomic, setter=setChromeVisible:) _Bool isChromeVisible; // @synthesize isChromeVisible=_isChromeVisible;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize playButtonSize;
- (void)updateIfNeeded;
@property(readonly, nonatomic) struct CGSize assetExplorerReviewScreenProgressIndicatorSize;
@property(readonly, nonatomic) _Bool shouldDisplayAssetExplorerReviewScreenProgressIndicators;
@property(readonly, nonatomic) _Bool shouldDisplayAssetExplorerReviewScreenSelectionIndicators;
@property(readonly, nonatomic) _Bool shouldShowTitleView;
@property(readonly, nonatomic) _Bool allowTapOnTitle;
@property(readonly, nonatomic) _Bool allowDoneButton;
@property(readonly, nonatomic) _Bool allowAccessoryVisibility;
- (_Bool)_isAssetExplorerReviewScreen;
@property(readonly, nonatomic) PUOneUpViewControllerSpecChange *currentChange;
- (id)newSpecChange;
- (id)initWithOptions:(unsigned long long)arg1;

@end

