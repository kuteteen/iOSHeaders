//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosEditUI/PUEditViewController.h>

#import "CAMLightingControlDelegate.h"
#import "NUMediaViewDelegatePrivate.h"
#import "PHLivePhotoViewDelegate.h"
#import "PLDismissableViewController.h"
#import "PUEditPluginSessionDelegate.h"
#import "PUImageEditPluginSessionDataSource.h"
#import "PUOneUpAssetTransitionViewController.h"
#import "PUPhotoEditIrisModelChangeObserver.h"
#import "PUPhotoEditLayoutSource.h"
#import "PUPhotoEditResourceLoaderDelegate.h"
#import "PUPhotoEditToolControllerDelegate.h"
#import "PUPhotoEditToolbarDelegate.h"
#import "PUVideoEditPluginSessionDataSource.h"
#import "PUViewControllerSpecChangeObserver.h"
#import "PXPhotoLibraryUIChangeObserver.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CAMBadgeTextView, CAMLightingControl, CAMLightingNameBadge, GLKView, NSArray, NSObject<OS_dispatch_source>, NSString, NSURL, NUBufferRenderClient, NUMediaView, NURenderPipelineFilter, PLEditSource, PLPhotoEditAggregateSession, PLPhotoEditModel, PLPhotoEditMutableModel, PLPhotoEditRenderer, PUAdjustmentsToolController, PUAutoAdjustmentController, PUCropToolController, PUEditPluginSession, PUEditableMediaProvider, PUFiltersToolController, PUMediaDestination, PUPhotoEditIrisModel, PUPhotoEditLivePhotoToolbar, PUPhotoEditResourceLoader, PUPhotoEditSnapshot, PUPhotoEditToolController, PUPhotoEditToolbar, PUPhotoEditValuesCalculator, PUPhotoEditViewControllerSpec, PUProgressIndicatorView, PURedeyeToolController, PUTouchingGestureRecognizer, PUTrimToolController, PXImageLayerModulator, UIAlertController, UIButton, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, _PPTState;

@interface PUPhotoEditViewController : PUEditViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PUPhotoEditToolControllerDelegate, PUVideoEditPluginSessionDataSource, PUImageEditPluginSessionDataSource, PUEditPluginSessionDelegate, PXPhotoLibraryUIChangeObserver, PUOneUpAssetTransitionViewController, PLDismissableViewController, PUPhotoEditIrisModelChangeObserver, PHLivePhotoViewDelegate, PUPhotoEditResourceLoaderDelegate, PUViewControllerSpecChangeObserver, NUMediaViewDelegatePrivate, PUPhotoEditToolbarDelegate, CAMLightingControlDelegate, PUPhotoEditLayoutSource>
{
    NSArray *__allTools;
    PUPhotoEditToolController *_currentEditingTool;
    _Bool _switchingToolsAnimated;
    NUMediaView *_mediaView;
    NURenderPipelineFilter *_showOrignalWithGeometry;
    _Bool _isImageFrameReady;
    NUBufferRenderClient *_renderImageClient;
    GLKView *_mainRenderView;
    _Bool _isAnimatingLayoutOrientation;
    PUTouchingGestureRecognizer *_livePhotoTouchRecognizer;
    _Bool _livePhotoIsPlaying;
    NSArray *_mainToolbarConstraints;
    NSArray *_alternateToolbarConstraints;
    NSArray *_secondaryToolbarConstraints;
    NSArray *_livePhotoToolbarConstraints;
    NSArray *_currentToolViewConstraints;
    NSArray *_placeholderImageViewConstraints;
    NSArray *_previewingOriginalBadgeConstraints;
    NSArray *_depthBadgeConstraints;
    NSArray *_progressIndicatorViewConstraints;
    NSArray *_lightingControlConstraints;
    NSArray *_lightingNameBadgeConstraints;
    PUPhotoEditToolbar *_mainToolbar;
    PUPhotoEditToolbar *_alternateToolbar;
    PUPhotoEditToolbar *_secondaryToolbar;
    NSArray *_coreToolButtons;
    NSArray *_mainToolButtons;
    NSArray *_secondaryToolButtons;
    UIButton *_cancelButton;
    UIButton *_mainActionButton;
    UIButton *_secondMainActionButton;
    UIButton *_secondSecondActionButton;
    long long _mainButtonAction;
    _Bool _toolbarButtonsValid;
    PUPhotoEditLivePhotoToolbar *_livePhotoToolbar;
    UIButton *_muteLivePhotoButton;
    UIButton *_livePhotoButton;
    UIButton *_depthToolbarButton;
    UIButton *_depthBadge;
    _Bool _canModifyDepth;
    UIButton *_pluginButton;
    UIButton *_redEyeButton;
    PUEditPluginSession *_pluginSession;
    _Bool _pluginWorkImageVersionIsValid;
    long long _pluginWorkImageVersion;
    PUPhotoEditSnapshot *_stashedSnapshot;
    NSURL *_pluginFullSizeImageURL;
    NSString *_pluginFullSizeImageSandboxExtensionToken;
    NSString *_pluginSessionIdentifier;
    UIButton *_autoEnhanceButton;
    PUAutoAdjustmentController *_autoEnhanceController;
    _Bool _photoTakenWithoutFlash;
    UIImageView *_placeholderImageView;
    UITapGestureRecognizer *_togglePreviewTapGestureRecognizer;
    UILongPressGestureRecognizer *_togglePreviewPressGestureRecognizer;
    NSArray *_toggleOriginalInitialPoints;
    CAMBadgeTextView *_previewingOriginalBadge;
    unsigned long long _togglePreviewOriginalOffRequestID;
    PUProgressIndicatorView *_progressIndicatorView;
    id _progressIndicatorInteractionDisablingToken;
    int _inProgressSaveRequestID;
    NSObject<OS_dispatch_source> *_saveProgressTimer;
    _Bool _didLoadTools;
    _Bool _needToReloadTools;
    PUCropToolController *_cropController;
    PUFiltersToolController *_filtersController;
    PUAdjustmentsToolController *_adjustmentsController;
    PUTrimToolController *_trimController;
    _Bool _trimControllerVisible;
    _Bool _trimControllerScrubberNeedsVisualUpdate;
    _PPTState *_pptState;
    _Bool __isCachingVideo;
    _Bool _canModifyPortraitEffects;
    CAMLightingControl *_lightingControl;
    CAMLightingNameBadge *_lightingNameBadge;
    _Bool _previewViewHidden;
    _Bool __penultimateAvailable;
    _Bool __revertingToOriginal;
    _Bool __shouldBePreviewingOriginal;
    _Bool __canAnimateNextAutoEnhance;
    _Bool _currentToolShouldAppearUnderneathMediaView;
    _Bool _oldToolShouldDisappearUnderneathMediaView;
    long long _layoutOrientation;
    PUPhotoEditViewControllerSpec *_photoEditSpec;
    id <PUEditableAsset> _photo;
    PUEditableMediaProvider *_mediaProvider;
    PUMediaDestination *_mediaDestination;
    id <PUPhotoEditViewControllerPresentationDelegate> _presentationDelegate;
    id <PUPhotoEditViewControllerSessionDelegate> _sessionDelegate;
    PXImageLayerModulator *_imageLayerModulator;
    NSArray *_placeholderImageFilters;
    PUPhotoEditValuesCalculator *__valuesCalculator;
    PLPhotoEditRenderer *__mainRenderer;
    PURedeyeToolController *__redEyeController;
    PLPhotoEditAggregateSession *__aggregateSession;
    PUPhotoEditResourceLoader *__resourceLoader;
    long long __workImageVersion;
    PLPhotoEditMutableModel *__photoEditModel;
    PLPhotoEditModel *__uneditedPhotoEditModel;
    PUPhotoEditIrisModel *__photoEditIrisModel;
    PLEditSource *__editSource;
    PLEditSource *__originalImageEditSource;
    long long __originalImageExifOrientation;
    long long __originalExifOrientation;
    CDUnknownBlockType __nextRenderCompletionBlock;
    long long __assetChangeDismissalState;
    long long __saveCompetionDismissalState;
    long long __previewRenderType;
    PLPhotoEditRenderer *__previewingOriginalRenderer;
    UIAlertController *__cancelConfirmationAlert;
    UIAlertController *__revertConfirmationAlert;
    UIAlertController *__irisRevertConfirmationAlert;
    UIAlertController *__livePhotoToolsAlert;
    long long _mediaViewEdgeInsetsUpdateDisableCount;
    UIView *_oldToolView;
    CDUnknownBlockType _ppt_afterRenderBlock;
    CDUnknownBlockType _ppt_afterAutoenhanceBlock;
    CDUnknownBlockType _ppt_willBeginPlaybackBlock;
    CDUnknownBlockType _ppt_didEndPlaybackBlock;
    struct CGSize __layoutReferenceSize;
    struct CGSize __lastKnownPreviewImageSize;
    CDStruct_1b6d18a9 __initialSeekTime;
    CDStruct_1b6d18a9 __originalStillImageTime;
    CDStruct_1b6d18a9 __originalVideoDuration;
}

+ (id)_defaultRenderPipelineFilters;
+ (_Bool)_isForceTouchEnabled;
+ (double)toggleOriginalLongPressDelay;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (void)initialize;
@property(copy) CDUnknownBlockType ppt_didEndPlaybackBlock; // @synthesize ppt_didEndPlaybackBlock=_ppt_didEndPlaybackBlock;
@property(copy) CDUnknownBlockType ppt_willBeginPlaybackBlock; // @synthesize ppt_willBeginPlaybackBlock=_ppt_willBeginPlaybackBlock;
@property(copy) CDUnknownBlockType ppt_afterAutoenhanceBlock; // @synthesize ppt_afterAutoenhanceBlock=_ppt_afterAutoenhanceBlock;
@property(copy) CDUnknownBlockType ppt_afterRenderBlock; // @synthesize ppt_afterRenderBlock=_ppt_afterRenderBlock;
@property(retain, nonatomic) UIView *oldToolView; // @synthesize oldToolView=_oldToolView;
@property(nonatomic) _Bool oldToolShouldDisappearUnderneathMediaView; // @synthesize oldToolShouldDisappearUnderneathMediaView=_oldToolShouldDisappearUnderneathMediaView;
@property(nonatomic) _Bool currentToolShouldAppearUnderneathMediaView; // @synthesize currentToolShouldAppearUnderneathMediaView=_currentToolShouldAppearUnderneathMediaView;
@property(nonatomic) long long mediaViewEdgeInsetsUpdateDisableCount; // @synthesize mediaViewEdgeInsetsUpdateDisableCount=_mediaViewEdgeInsetsUpdateDisableCount;
@property(nonatomic, setter=_setLastKnownPreviewImageSize:) struct CGSize _lastKnownPreviewImageSize; // @synthesize _lastKnownPreviewImageSize=__lastKnownPreviewImageSize;
@property(nonatomic, setter=_setLivePhotoToolsAlert:) __weak UIAlertController *_livePhotoToolsAlert; // @synthesize _livePhotoToolsAlert=__livePhotoToolsAlert;
@property(nonatomic, setter=_setIrisRevertConfirmationAlert:) __weak UIAlertController *_irisRevertConfirmationAlert; // @synthesize _irisRevertConfirmationAlert=__irisRevertConfirmationAlert;
@property(nonatomic, setter=_setRevertConfirmationAlert:) __weak UIAlertController *_revertConfirmationAlert; // @synthesize _revertConfirmationAlert=__revertConfirmationAlert;
@property(nonatomic, setter=_setCancelConfirmationAlert:) __weak UIAlertController *_cancelConfirmationAlert; // @synthesize _cancelConfirmationAlert=__cancelConfirmationAlert;
@property(nonatomic, setter=_setCanAnimateNextAutoEnhance:) _Bool _canAnimateNextAutoEnhance; // @synthesize _canAnimateNextAutoEnhance=__canAnimateNextAutoEnhance;
@property(retain, nonatomic, setter=_setPreviewingOriginalRenderer:) PLPhotoEditRenderer *_previewingOriginalRenderer; // @synthesize _previewingOriginalRenderer=__previewingOriginalRenderer;
@property(nonatomic, setter=_setShouldBePreviewingOriginal:) _Bool _shouldBePreviewingOriginal; // @synthesize _shouldBePreviewingOriginal=__shouldBePreviewingOriginal;
@property(nonatomic, setter=_setLayoutReferenceSize:) struct CGSize _layoutReferenceSize; // @synthesize _layoutReferenceSize=__layoutReferenceSize;
@property(nonatomic, setter=_setPreviewRenderType:) long long _previewRenderType; // @synthesize _previewRenderType=__previewRenderType;
@property(nonatomic, setter=_setSaveCompletionDismissalState:) long long _saveCompetionDismissalState; // @synthesize _saveCompetionDismissalState=__saveCompetionDismissalState;
@property(nonatomic, setter=_setAssetChangeDismissalState:) long long _assetChangeDismissalState; // @synthesize _assetChangeDismissalState=__assetChangeDismissalState;
@property(nonatomic, getter=_isRevertingToOriginal, setter=_setRevertingToOriginal:) _Bool _revertingToOriginal; // @synthesize _revertingToOriginal=__revertingToOriginal;
@property(copy, nonatomic, setter=_setNextRenderCompletionBlock:) CDUnknownBlockType _nextRenderCompletionBlock; // @synthesize _nextRenderCompletionBlock=__nextRenderCompletionBlock;
@property(nonatomic, setter=_setOriginalVideoDuration:) CDStruct_1b6d18a9 _originalVideoDuration; // @synthesize _originalVideoDuration=__originalVideoDuration;
@property(nonatomic, setter=_setOriginalStillImageTime:) CDStruct_1b6d18a9 _originalStillImageTime; // @synthesize _originalStillImageTime=__originalStillImageTime;
@property(nonatomic, getter=_isPenultimateAvailable, setter=_setPenultimateAvailable:) _Bool _penultimateAvailable; // @synthesize _penultimateAvailable=__penultimateAvailable;
@property(nonatomic, setter=_setOriginalExifOrientation:) long long _originalExifOrientation; // @synthesize _originalExifOrientation=__originalExifOrientation;
@property(nonatomic, setter=_setOriginalImageExifOrientation:) long long _originalImageExifOrientation; // @synthesize _originalImageExifOrientation=__originalImageExifOrientation;
@property(retain, nonatomic, setter=_setOriginalImageEditSource:) PLEditSource *_originalImageEditSource; // @synthesize _originalImageEditSource=__originalImageEditSource;
@property(retain, nonatomic, setter=_setEditSource:) PLEditSource *_editSource; // @synthesize _editSource=__editSource;
@property(retain, nonatomic, setter=_setPhotoEditIrisModel:) PUPhotoEditIrisModel *_photoEditIrisModel; // @synthesize _photoEditIrisModel=__photoEditIrisModel;
@property(copy, nonatomic, setter=_setUneditedPhotoEditModel:) PLPhotoEditModel *_uneditedPhotoEditModel; // @synthesize _uneditedPhotoEditModel=__uneditedPhotoEditModel;
@property(retain, nonatomic, setter=_setPhotoEditModel:) PLPhotoEditMutableModel *_photoEditModel; // @synthesize _photoEditModel=__photoEditModel;
@property(nonatomic, setter=_setWorkImageVersion:) long long _workImageVersion; // @synthesize _workImageVersion=__workImageVersion;
@property(retain, nonatomic, setter=_setResourceLoader:) PUPhotoEditResourceLoader *_resourceLoader; // @synthesize _resourceLoader=__resourceLoader;
@property(retain, nonatomic, setter=_setAggregateSession:) PLPhotoEditAggregateSession *_aggregateSession; // @synthesize _aggregateSession=__aggregateSession;
@property(retain, nonatomic, setter=_setRedEyeController:) PURedeyeToolController *_redEyeController; // @synthesize _redEyeController=__redEyeController;
@property(retain, nonatomic, setter=_setMainRenderer:) PLPhotoEditRenderer *_mainRenderer; // @synthesize _mainRenderer=__mainRenderer;
@property(retain, nonatomic, setter=_setValuesCalculator:) PUPhotoEditValuesCalculator *_valuesCalculator; // @synthesize _valuesCalculator=__valuesCalculator;
@property(nonatomic, setter=_setInitialSeekTime:) CDStruct_1b6d18a9 _initialSeekTime; // @synthesize _initialSeekTime=__initialSeekTime;
@property(readonly, copy, nonatomic) NSArray *placeholderImageFilters; // @synthesize placeholderImageFilters=_placeholderImageFilters;
@property(readonly, nonatomic) PXImageLayerModulator *imageLayerModulator; // @synthesize imageLayerModulator=_imageLayerModulator;
@property(nonatomic) __weak id <PUPhotoEditViewControllerSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(nonatomic) __weak id <PUPhotoEditViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic, getter=isPreviewViewHidden) _Bool previewViewHidden; // @synthesize previewViewHidden=_previewViewHidden;
@property(readonly, nonatomic) PUMediaDestination *mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property(readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PUEditableAsset> photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec; // @synthesize photoEditSpec=_photoEditSpec;
@property(nonatomic, setter=_setLayoutOrientation:) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
- (void).cxx_destruct;
- (void)_loadLightingStateFromModel;
- (void)_updateEditModelWithPortraitEffect:(long long)arg1;
- (void)lightingControl:(id)arg1 willChangeExpanded:(_Bool)arg2;
- (void)lightingControlDidChangeSelectedLightingType:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)dismissAccessibilityHUDForPhotoEditToolbar:(id)arg1;
- (void)photoEditToolbar:(id)arg1 showAccessibilityHUDForItem:(id)arg2;
- (id)photoEditToolbar:(id)arg1 accessibilityHUDItemForButton:(id)arg2;
- (id)ppt_renderStatisticsDictionaryForTimeInterval:(double)arg1;
- (void)ppt_playLivePhotoWithWillBeginPlaybackBlock:(CDUnknownBlockType)arg1 didEndPlaybackBlock:(CDUnknownBlockType)arg2;
- (void)ppt_selectNextLightingEffect:(CDUnknownBlockType)arg1;
- (void)ppt_save;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_configureSelectedSliderWithSteps:(long long)arg1;
- (void)ppt_scrollBWSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollColorSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollLightSlider:(CDUnknownBlockType)arg1;
- (void)ppt_applyAutoenhance:(CDUnknownBlockType)arg1;
- (void)ppt_selectCropController:(CDUnknownBlockType)arg1;
- (void)ppt_selectAdjustmentsController:(CDUnknownBlockType)arg1;
- (void)ppt_selectFiltersController:(CDUnknownBlockType)arg1;
- (void)_ppt_conditionallyExecuteAfterRender;
- (void)ppt_executeAfterRender:(CDUnknownBlockType)arg1;
- (void)ppt_cancelEdits;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (void)didFinishWithChanges:(_Bool)arg1;
- (void)didFinishWithAsset:(id)arg1 savedChanges:(_Bool)arg2;
- (void)editPluginSession:(id)arg1 didEndWithCompletionType:(unsigned long long)arg2;
- (void)editPluginSessionWillBegin:(id)arg1;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (void)_updatePenultimateAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setupVideoPluginSession;
- (void)_setupImagePluginSession;
- (void)_updatePluginSession;
- (void)_updatePluginWorkImageVersion;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_editPluginSession:(id)arg1 checkVideoEnabled:(_Bool)arg2 loadVideoComplementURLWithHandler:(CDUnknownBlockType)arg3;
- (void)editPluginSession:(id)arg1 loadVideoComplementURLWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadFullSizeImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadDisplaySizeImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(CDUnknownBlockType)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_removePlaceholderImageViewIfNeeded;
- (void)_handleMediaViewReady:(id)arg1 statistics:(id)arg2;
- (void)mediaViewDidFinishPreparingVideo:(id)arg1;
- (void)mediaViewDidStartPreparingVideo:(id)arg1;
- (void)mediaViewIsReadyForVideoPlayback:(id)arg1;
- (void)mediaViewDidUpdateLivePhoto:(id)arg1;
- (void)mediaViewDidFinishRendering:(id)arg1 withStatistics:(id)arg2;
- (void)mediaViewDidEndZooming:(id)arg1;
- (void)mediaViewWillBeginZooming:(id)arg1;
- (id)toolControllerHitEventForwardView:(id)arg1;
- (struct CGPoint)toolController:(id)arg1 viewPointFromOriginalPoint:(struct CGPoint)arg2 view:(id)arg3;
- (struct CGPoint)toolController:(id)arg1 originalPointFromViewPoint:(struct CGPoint)arg2 view:(id)arg3;
- (void)toolControllerDidFinish:(id)arg1;
- (struct CGSize)toolControllerOriginalImageSize:(id)arg1;
- (struct CGSize)toolControllerOriginalOrientedImageSize:(id)arg1;
- (id)toolControllerLivePhoto:(id)arg1;
- (id)toolControllerRequestComposition:(id)arg1;
- (void)toolControllerRequestLivePhoto:(id)arg1 filters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)toolControllerPreviewView:(id)arg1;
- (id)toolControllerMainRenderer:(id)arg1;
- (id)toolControllerMainContainerView:(id)arg1;
- (long long)toolControllerImageModulationOptions:(id)arg1;
- (id)toolControllerUneditedPhotoEditModel:(id)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1;
- (void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(_Bool)arg2;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg1;
- (void)toolController:(id)arg1 updateModelDependentControlsAnimated:(_Bool)arg2;
- (void)toolControllerDidFinishLoadingThumbnails:(id)arg1;
- (id)_createMediaView;
- (void)_switchToEditingTool:(id)arg1 animated:(_Bool)arg2;
- (id)_defaultInitialEditingTool;
- (id)_allTools;
- (void)_setupToolsIfNeeded;
- (void)_loadToolsIfNeeded:(_Bool)arg1;
- (void)_loadToolsIfNeeded;
@property(nonatomic, setter=_setIsCachingVideo:) _Bool _isCachingVideo;
@property(readonly, nonatomic) _Bool _isEnabledLivePhoto;
@property(readonly, nonatomic) _Bool _isVideoOn;
- (_Bool)_hasUnsavedChanges;
- (void)_restoreSnapshot:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_captureSnapshotOfBasePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_revertToOriginalWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_saveOnlyDepthEditsCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updatePhotoEditIrisModel;
- (void)_resetModelAndBaseImagesToWorkImageVersion:(long long)arg1;
- (id)_orientedCIImageFromUIImage:(id)arg1;
- (void)_setOriginalImageURL:(id)arg1 withOriginalImageUTI:(id)arg2;
- (void)_updateValuesCalculator;
- (void)_updateLivePhotoTrimControl;
- (void)_invalidateTrimControlScrubberThumbnails;
- (_Bool)_wantsTrimControl;
- (void)_handleResourceLoadChange;
- (void)_handleDidLoadOriginalWithResult:(id)arg1;
- (_Bool)_isLoopingVideo:(_Bool)arg1;
- (_Bool)_hasLoopingVideoAdjustment;
@property(readonly, nonatomic) _Bool _isLoopingVideo;
- (void)_handleDidLoadAdjustmentsAndBaseImageWithResult:(id)arg1;
- (void)photoEditResourceLoadRequestDidCompleteDownload:(id)arg1;
- (void)photoEditResourceLoadRequest:(id)arg1 downloadProgress:(double)arg2;
- (void)photoEditResourceLoadRequestWillBeginDownload:(id)arg1;
- (void)photoEditResourceLoadRequest:(id)arg1 mediaLoadDidFailWithError:(id)arg2;
- (void)photoEditResourceLoadRequest:(id)arg1 downloadDidFailWithError:(id)arg2;
- (void)photoEditResourceLoadRequest:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)_loadOriginalImageIfNeeded;
- (void)_loadPhotoEditResourcesIfNeeded;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateLivePhotoPlaybackGestureRecognizer;
- (id)_livePhotoGestureRecognizer;
- (void)_handleTogglePreviewPressGesture:(id)arg1;
- (void)_handleTogglePreviewTapGesture:(id)arg1;
- (void)_updateTogglePreviewGestureRecognizer;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_presentWarningForIrisRemovesEditsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleLivePhotoTouchRecognizer:(id)arg1;
- (void)_setPlaybackEnabled:(_Bool)arg1;
- (void)_handleDepthEffectButton:(id)arg1;
- (void)_updateLivePhotoButton:(id)arg1;
- (void)_handleLivePhotoButton:(id)arg1;
- (void)_handleMuteLivePhotoButton:(id)arg1;
- (void)_updateMutedState;
- (void)_handleAutoEnhanceButton:(id)arg1;
- (void)_handlePluginButton:(id)arg1;
- (void)_notifyDelegateSaveFinishedIfReadyWithAsset:(id)arg1;
- (_Bool)_isSaveProgressAvailable;
- (void)_updateSaveProgress;
- (void)_stopMonitoringSaveProgress;
- (void)_startMonitoringSaveProgressIfNeeded;
- (_Bool)_isWaitingForSaveCompletion;
- (void)_stopWaitingForSaveRequestWithAsset:(id)arg1;
- (void)_startWaitingForSaveRequestID:(int)arg1;
- (_Bool)_isWaitingForAssetChange;
- (void)_stopWaitingForAssetChangeWithAsset:(id)arg1 success:(_Bool)arg2;
- (void)_handleAssetChangeTimeoutWithAsset:(id)arg1;
- (void)_startWaitingForAssetChange;
- (void)_presentErrorAndDismissEditorWithTitle:(id)arg1 message:(id)arg2;
- (void)_presentErrorAndDismissEditorWithTitle:(id)arg1 message:(id)arg2 additionalAction:(id)arg3;
- (void)_performDiscardAction;
- (void)_handleRevertResult:(id)arg1 error:(id)arg2;
- (void)_performRevertAction;
- (void)_handleRevertButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleMainActionButton:(id)arg1;
- (void)_showCancelAndRevertOptionsAllowResetTool:(_Bool)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleToolbarToolButton:(id)arg1;
- (void)_updatePreviewingOriginalBadge;
- (void)_updatePreviewingOriginal;
- (_Bool)_isPreviewingOriginal;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (_Bool)_shouldDisplayRedEyeTool;
- (void)_checkPhotoTakenWithoutFlashWithURL:(id)arg1;
- (void)_updateLayoutOrientationWithViewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_updateSubviewsOrdering;
- (void)_updatePlaceholderImage;
- (void)_updateProgressIndicatorAnimated:(_Bool)arg1;
- (struct UIEdgeInsets)_mediaViewEdgeInsets;
- (void)_updateMediaViewEdgeInsets;
- (void)_updateMediaViewLayoutWithCoordinator:(id)arg1 layoutOrientation:(long long)arg2;
- (void)_updateLightingNameBadgeForOrientation:(long long)arg1 expanded:(_Bool)arg2;
- (_Bool)_shouldShowLightingControl;
- (_Bool)_shouldShowDepthControl;
- (void)_updateDepthEffectAnimated:(_Bool)arg1;
- (_Bool)_shouldDisplayDepthButtonInToolbar;
- (void)_updateMuteButtonAnimated:(_Bool)arg1;
- (void)_updateLivePhotoButtonAnimated:(_Bool)arg1;
- (void)_updatePluginButtonAnimated:(_Bool)arg1;
- (void)_updateAutoEnhanceButtonAnimated:(_Bool)arg1;
- (void)_updateMainActionButtonAnimated:(_Bool)arg1;
- (void)_updateModelDependentControlsAnimated:(_Bool)arg1;
- (void)_updateSpecDependentUIPieces;
- (void)_updateToolbarBackgroundAnimated:(_Bool)arg1;
- (void)_updateBackgroundColor;
- (id)_newToolButtonForTool:(id)arg1;
- (void)_updateToolbarButtonPositions;
- (id)_depthButtonIcon;
- (id)_depthButtonTitle;
- (void)_reloadToolbarButtonsIfNeeded;
- (void)_updateToolbarsContentPadding;
- (void)_updateAlternateToolbarAnimated:(_Bool)arg1;
- (void)_updateToolbarsAnimated:(_Bool)arg1;
- (void)_updateRenderedPreviewForceRender:(_Bool)arg1;
- (id)mainLivePhotoView;
- (void)_configureEnablenessOfControlButton:(id)arg1 animated:(_Bool)arg2;
- (void)_setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setPlaceholderImage:(id)arg1 filters:(id)arg2;
- (void)setPlaceholderImage:(id)arg1;
- (void)_requestDismissTransitionViewContentsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isReadyToRender;
- (void)_updateLightingHierarchy;
- (struct CGRect)_placeholderViewFrame;
@property(readonly, nonatomic) struct CGRect previewViewFrame;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (long long)_imageModulationOptions;
- (double)px_imageModulationIntensity;
- (double)px_HDRFocus;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)_scaleSize:(struct CGSize)arg1 toFitSize:(struct CGSize)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)updateViewConstraints;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (id)_preferredStatusBarHideAnimationParameters;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_composition;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithPhoto:(id)arg1 mediaProvider:(id)arg2 mediaDestination:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

