//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKCoreChatController.h>

#import "AFContextProvider.h"
#import "CKActionMenuGestureRecognizerButtonDelegate.h"
#import "CKBrowserDragControllerTranscriptDelegate.h"
#import "CKChatInputControllerDelegate.h"
#import "CKDetailsControllerDelegate.h"
#import "CKEffectPickerViewControllerDelegate.h"
#import "CKExtensionConsumer.h"
#import "CKFullScreenBalloonViewControllerDelegate.h"
#import "CKMessageEntryViewDelegate.h"
#import "CKNavbarCanvasViewControllerDelegate.h"
#import "CKPhotoPickerControllerDelegate.h"
#import "CKReaderViewControllerDelegate.h"
#import "CKSendAnimationBalloonProvider.h"
#import "CKSendAnimationManagerDelegate.h"
#import "CKThrowAnimationManagerDelegate.h"
#import "CKTrimControllerDelegate.h"
#import "CKUnexpectedlyLoggedOutNotificationViewDelegate.h"
#import "CKVideoMessageRecordingViewControllerDelegate.h"
#import "CNContactViewControllerDelegate.h"
#import "EKEventEditViewDelegate.h"
#import "PHPhotoLibraryChangeObserver.h"
#import "PKAddPassesViewControllerDelegate.h"
#import "QLPreviewControllerDelegate.h"
#import "SGUIBannerViewDelegate.h"
#import "UIDragInteractionDelegate.h"
#import "UIDropInteractionDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIInteractionProgressObserver.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIPreviewInteractionDelegate.h"
#import "UITextDropDelegate.h"
#import "UITextPasteDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "UIViewControllerPreviewingDelegate_Private.h"
#import "UIViewControllerTransitioningDelegate.h"

@class CADisplayLink, CKAudioTrimViewController, CKChatInputController, CKComposition, CKEffectPickerViewController, CKInvisibleInkEffectController, CKMessageEntryView, CKNavbarCanvasViewController, CKPhotoPickerController, CKQLDetailsPreviewController, CKQLPreviewController, CKRaiseGesture, CKScheduledUpdater, CKThrowAnimationManager, CKUnexpectedlyLoggedOutNotificationView, CKVideoMessageRecordingViewController, CKVideoTrimController, IMPluginPayload, IMScheduledUpdater, NSObject<OS_dispatch_group>, NSString, SGUIBannerView, UIImagePickerController, UIToolbar, UIView, UIWindow;

@interface CKChatController : CKCoreChatController <CKEffectPickerViewControllerDelegate, CKThrowAnimationManagerDelegate, CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider, UIInteractionProgressObserver, QLPreviewControllerDelegate, CKReaderViewControllerDelegate, PKAddPassesViewControllerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, CKPhotoPickerControllerDelegate, CKVideoMessageRecordingViewControllerDelegate, CKActionMenuGestureRecognizerButtonDelegate, PHPhotoLibraryChangeObserver, CKMessageEntryViewDelegate, CKTrimControllerDelegate, AFContextProvider, UIGestureRecognizerDelegate, CKChatInputControllerDelegate, CKFullScreenBalloonViewControllerDelegate, CKNavbarCanvasViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, SGUIBannerViewDelegate, CKDetailsControllerDelegate, UIPreviewInteractionDelegate, CNContactViewControllerDelegate, EKEventEditViewDelegate, CKUnexpectedlyLoggedOutNotificationViewDelegate, UIPopoverPresentationControllerDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, UITextDropDelegate, UITextPasteDelegate, CKExtensionConsumer>
{
    struct CGPoint _startingScrollOffset;
    _Bool _shouldBecomeFirstResponderWhenDismissingModalBrowser;
    CKComposition *_dropComposition;
    _Bool _isAnimatingMessageSend;
    _Bool _transitioningSize;
    _Bool _entryViewWasActiveBeforePresentingDataDetector;
    _Bool _primeTranscriptWithInitialScrollGeometries;
    _Bool _hideAppStripOnEntryViewReload;
    _Bool _showingVideoMessageRecordingView;
    _Bool _isShowingPreview;
    _Bool _entryViewWasActiveOnPreview;
    _Bool _isShowingAcknowledgmentPicker;
    _Bool _effectPickerIsPresented;
    _Bool _scrollDownIsValid;
    _Bool _isShowingDetailsController;
    CKMessageEntryView *_entryView;
    long long _lastKnownDeviceOrientation;
    long long _targetFirstResponder;
    CKChatInputController *_inputController;
    IMScheduledUpdater *_autorotationUpdater;
    CKScheduledUpdater *_typingUpdater;
    CKNavbarCanvasViewController *_navbarCanvasViewController;
    SGUIBannerView *_bannerView;
    CDUnknownBlockType _scrollBlock;
    CKComposition *_initialComposition;
    CKRaiseGesture *_raiseGesture;
    UIToolbar *_actionsToolbar;
    CKComposition *_compositionBeingTrimmed;
    CKAudioTrimViewController *_audioTrimController;
    CKVideoTrimController *_videoTrimController;
    IMPluginPayload *_extensionPayloadBeingSent;
    CKThrowAnimationManager *_throwAnimationManager;
    CDUnknownBlockType _deferredSendAnimationBlock;
    CKPhotoPickerController *_photoPickerController;
    UIImagePickerController *_imagePickerController;
    CKVideoMessageRecordingViewController *_videoMessageRecordingViewController;
    CKQLPreviewController *_previewController;
    CKQLDetailsPreviewController *_entryPreviewController;
    UIView *_previewSourceView;
    CKInvisibleInkEffectController *_previewInvisibleInkEffectController;
    UIView *_previewRevealView;
    CKEffectPickerViewController *_effectPickerViewController;
    UIWindow *_effectPickerWindow;
    CKUnexpectedlyLoggedOutNotificationView *_unexpectedlyLoggedOutNotificationView;
    CKScheduledUpdater *_transcriptInlineNotificationUpdater;
    CADisplayLink *_stickerTranscriptScrollDisplayLink;
    double _stickerTranscriptScrollDelta;
    NSObject<OS_dispatch_group> *_revealAnimationGroup;
    id <UIDragSession> _dragSession;
    id <UIDropSession> _dropSession;
    CDUnknownBlockType _deferredPresentationBlock;
    struct CGPoint _initialContentOffset;
    struct UIEdgeInsets _initialContentInset;
}

@property(copy, nonatomic) CDUnknownBlockType deferredPresentationBlock; // @synthesize deferredPresentationBlock=_deferredPresentationBlock;
@property(nonatomic) _Bool isShowingDetailsController; // @synthesize isShowingDetailsController=_isShowingDetailsController;
@property(retain, nonatomic) id <UIDropSession> dropSession; // @synthesize dropSession=_dropSession;
@property(retain, nonatomic) id <UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *revealAnimationGroup; // @synthesize revealAnimationGroup=_revealAnimationGroup;
@property(nonatomic) _Bool scrollDownIsValid; // @synthesize scrollDownIsValid=_scrollDownIsValid;
@property(nonatomic) double stickerTranscriptScrollDelta; // @synthesize stickerTranscriptScrollDelta=_stickerTranscriptScrollDelta;
@property(retain, nonatomic) CADisplayLink *stickerTranscriptScrollDisplayLink; // @synthesize stickerTranscriptScrollDisplayLink=_stickerTranscriptScrollDisplayLink;
@property(retain, nonatomic) CKScheduledUpdater *transcriptInlineNotificationUpdater; // @synthesize transcriptInlineNotificationUpdater=_transcriptInlineNotificationUpdater;
@property(retain, nonatomic) CKUnexpectedlyLoggedOutNotificationView *unexpectedlyLoggedOutNotificationView; // @synthesize unexpectedlyLoggedOutNotificationView=_unexpectedlyLoggedOutNotificationView;
@property(nonatomic) _Bool effectPickerIsPresented; // @synthesize effectPickerIsPresented=_effectPickerIsPresented;
@property(retain, nonatomic) UIWindow *effectPickerWindow; // @synthesize effectPickerWindow=_effectPickerWindow;
@property(retain, nonatomic) CKEffectPickerViewController *effectPickerViewController; // @synthesize effectPickerViewController=_effectPickerViewController;
@property(nonatomic) _Bool isShowingAcknowledgmentPicker; // @synthesize isShowingAcknowledgmentPicker=_isShowingAcknowledgmentPicker;
@property(retain, nonatomic) UIView *previewRevealView; // @synthesize previewRevealView=_previewRevealView;
@property(retain, nonatomic) CKInvisibleInkEffectController *previewInvisibleInkEffectController; // @synthesize previewInvisibleInkEffectController=_previewInvisibleInkEffectController;
@property(nonatomic) _Bool entryViewWasActiveOnPreview; // @synthesize entryViewWasActiveOnPreview=_entryViewWasActiveOnPreview;
@property(nonatomic) _Bool isShowingPreview; // @synthesize isShowingPreview=_isShowingPreview;
@property(nonatomic) __weak UIView *previewSourceView; // @synthesize previewSourceView=_previewSourceView;
@property(retain, nonatomic) CKQLDetailsPreviewController *entryPreviewController; // @synthesize entryPreviewController=_entryPreviewController;
@property(retain, nonatomic) CKQLPreviewController *previewController; // @synthesize previewController=_previewController;
@property(nonatomic, getter=isShowingVideoMessageRecordingView) _Bool showingVideoMessageRecordingView; // @synthesize showingVideoMessageRecordingView=_showingVideoMessageRecordingView;
@property(retain, nonatomic) CKVideoMessageRecordingViewController *videoMessageRecordingViewController; // @synthesize videoMessageRecordingViewController=_videoMessageRecordingViewController;
@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(retain, nonatomic) CKPhotoPickerController *photoPickerController; // @synthesize photoPickerController=_photoPickerController;
@property(copy, nonatomic) CDUnknownBlockType deferredSendAnimationBlock; // @synthesize deferredSendAnimationBlock=_deferredSendAnimationBlock;
@property(retain, nonatomic) CKThrowAnimationManager *throwAnimationManager; // @synthesize throwAnimationManager=_throwAnimationManager;
@property(retain, nonatomic) IMPluginPayload *extensionPayloadBeingSent; // @synthesize extensionPayloadBeingSent=_extensionPayloadBeingSent;
@property(retain, nonatomic) CKVideoTrimController *videoTrimController; // @synthesize videoTrimController=_videoTrimController;
@property(retain, nonatomic) CKAudioTrimViewController *audioTrimController; // @synthesize audioTrimController=_audioTrimController;
@property(retain, nonatomic) CKComposition *compositionBeingTrimmed; // @synthesize compositionBeingTrimmed=_compositionBeingTrimmed;
@property(retain, nonatomic) UIToolbar *actionsToolbar; // @synthesize actionsToolbar=_actionsToolbar;
@property(retain, nonatomic) CKRaiseGesture *raiseGesture; // @synthesize raiseGesture=_raiseGesture;
@property(nonatomic) _Bool hideAppStripOnEntryViewReload; // @synthesize hideAppStripOnEntryViewReload=_hideAppStripOnEntryViewReload;
@property(retain, nonatomic) CKComposition *initialComposition; // @synthesize initialComposition=_initialComposition;
@property(nonatomic) struct UIEdgeInsets initialContentInset; // @synthesize initialContentInset=_initialContentInset;
@property(nonatomic) struct CGPoint initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(nonatomic) _Bool primeTranscriptWithInitialScrollGeometries; // @synthesize primeTranscriptWithInitialScrollGeometries=_primeTranscriptWithInitialScrollGeometries;
@property(nonatomic) _Bool entryViewWasActiveBeforePresentingDataDetector; // @synthesize entryViewWasActiveBeforePresentingDataDetector=_entryViewWasActiveBeforePresentingDataDetector;
@property(copy, nonatomic) CDUnknownBlockType scrollBlock; // @synthesize scrollBlock=_scrollBlock;
@property(retain, nonatomic) SGUIBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) CKNavbarCanvasViewController *navbarCanvasViewController; // @synthesize navbarCanvasViewController=_navbarCanvasViewController;
@property(retain, nonatomic) CKScheduledUpdater *typingUpdater; // @synthesize typingUpdater=_typingUpdater;
@property(retain, nonatomic) IMScheduledUpdater *autorotationUpdater; // @synthesize autorotationUpdater=_autorotationUpdater;
@property(retain, nonatomic) CKChatInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) long long targetFirstResponder; // @synthesize targetFirstResponder=_targetFirstResponder;
@property(nonatomic) long long lastKnownDeviceOrientation; // @synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation;
@property(nonatomic, getter=isTransitioningSize) _Bool transitioningSize; // @synthesize transitioningSize=_transitioningSize;
@property(nonatomic) _Bool isAnimatingMessageSend; // @synthesize isAnimatingMessageSend=_isAnimatingMessageSend;
@property(retain, nonatomic) CKMessageEntryView *entryView; // @synthesize entryView=_entryView;
- (void).cxx_destruct;
- (void)unexpectedlyLoggedOutNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2;
- (void)dismissPresentedViewController:(id)arg1;
- (id)presentedControllerDoneButtonItem;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)_shouldRestoreFirstResponderAfterDetailsViewDismiss;
- (void)detailsControllerDidDismiss:(id)arg1;
- (void)detailsControllerWillDismiss:(id)arg1;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)_api_dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)_api_dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)_dragItemsFromChatItem:(id)arg1 balloonView:(id)arg2;
- (id)_itemProvidersFromDragItems:(id)arg1;
- (id)_dragItemsForInteraction:(id)arg1;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)_api_dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)textPasteConfigurationSupporting:(id)arg1 performPasteOfAttributedString:(id)arg2 toRange:(id)arg3;
- (id)textPasteConfigurationSupporting:(id)arg1 combineItemAttributedStrings:(id)arg2 forRange:(id)arg3;
- (void)textPasteConfigurationSupporting:(id)arg1 transformPasteItem:(id)arg2;
- (id)textDroppableView:(id)arg1 proposalForDrop:(id)arg2;
- (void)checkSuggestionsForBanner;
- (void)_addSuggestedContactViewControllerDidCancel:(id)arg1;
- (void)_handleChatItemDidChange:(id)arg1;
- (void)_handleExpireCache:(id)arg1;
- (void)_updateTranscriptOffsetForBannerView;
- (void)_sizeAndPositionBannerView:(id)arg1 animated:(_Bool)arg2;
- (void)removeSuggestionsBannerAnimated:(_Bool)arg1;
- (id)viewControllerForPresentingFromSuggestionsBannerView:(id)arg1;
- (void)suggestionsBannerView:(id)arg1 wantsToPushMixedSuggestionsViewController:(id)arg2;
- (void)suggestionsBannerView:(id)arg1 didTapAddForEvent:(id)arg2 wantsToPresentEventViewController:(id)arg3;
- (void)suggestionsBannerView:(id)arg1 didTapAddForContact:(id)arg2 wantsToPresentContactViewController:(id)arg3;
- (void)suggestionsBannerViewDidFinish:(id)arg1;
- (void)fullScreenBalloonViewController:(id)arg1 deleteStickerWithTransferGUID:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 stickerPackTappedWithAdamID:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(_Bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(_Bool)arg2;
- (void)showFullScreenAcknowledgmentPickerForBalloonAtIndexPath:(id)arg1 showActionMenu:(_Bool)arg2;
- (_Bool)_shouldShowAcknowledgmentPickerForBalloon;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(_Bool)arg2;
- (id)_interfaceActionsForChatItem:(id)arg1;
- (id)_menuTitleForChatItem:(id)arg1;
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (void)updateStyleForCurrentEffect;
- (void)cleanUpDarkEffectStyle;
- (void)setUpStyleForDarkEffect;
- (void)evaluateSendMetricsForComposition:(id)arg1;
- (_Bool)_isRunningPPT;
- (void)_editCancelButtonPressed;
- (void)clearCurrentMessageThread;
- (void)_forwardSelectedMessages:(id)arg1;
- (void)_deleteSelectedMessages:(id)arg1;
- (id)rotatingFooterView;
- (void)_updateActionsToolbarItems;
- (id)_actionsToolbar;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)getCurrentContext;
- (_Bool)allowContextProvider:(id)arg1;
- (void)_saveDraftState;
- (void)updateRaiseGesture;
- (void)raiseGestureRecognized:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)allowEffectPickerToBePresented;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)sendCurrentLocationMessage:(id)arg1;
- (void)updateTyping;
- (void)messageEntryViewSwipeDownGestureRecognized:(id)arg1;
- (_Bool)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(id)arg1;
- (_Bool)getContainerWidth:(double *)arg1 offset:(double *)arg2;
- (struct CGSize)messageEntryViewMaxShelfPluginViewSize:(id)arg1;
- (double)messageEntryViewMaxHeight:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(struct CGPoint)arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(struct CGPoint)arg2;
- (void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)_passKitUIDismissed:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (_Bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (_Bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)_validateAndSendComposition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldValidatePayloadBeforeSendingPayload:(id)arg1;
- (void)sendCurrentLocation;
- (void)chatInputControllerDidTransitionCollapsed:(id)arg1;
- (void)chatInputControllerWillTransitionCollapsed:(id)arg1;
- (void)chatInputControllerDidTransitionExpanded:(id)arg1;
- (void)chatInputControllerWillTransitionExpanded:(id)arg1;
- (void)chatInputWillChangeHeightForCompactPresentation:(double)arg1;
- (void)chatInputDidChangeSize;
- (void)chatInputDidSelectPhotoPicker;
- (void)chatInputControllerDidDismissCompactBrowserViewController:(id)arg1;
- (void)chatInputControllerWillDismissCompactBrowserViewController:(id)arg1;
- (void)chatInputControllerDidDismissModalBrowserViewController:(id)arg1;
- (void)chatInputControllerWillDismissModalBrowserViewController:(id)arg1;
- (void)chatInputControllerDidPresentModalBrowserViewController:(id)arg1;
- (void)chatInputControllerWillPresentModalBrowserViewController:(id)arg1;
- (void)chatInputDidUpdateWithNewInputViewController:(id)arg1;
- (void)chatInputWillUpdateInputViewShowingBrowser;
- (void)chatInputDidUpdateInputViewShowingBrowser:(_Bool)arg1 entryFieldCollapsed:(_Bool)arg2 animated:(_Bool)arg3;
- (void)chatInputControllerRequestInputViewFocusFromFullscreen:(id)arg1;
- (void)setLocalUserIsComposing:(_Bool)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
- (int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;
- (void)dragManagerDidEndDragging:(id)arg1;
- (id)selectedBalloonForTarget:(id)arg1;
- (void)_stickerTranscriptScrollDisplayLinkFired;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)chatInputControllerWillHideHandwriting:(id)arg1;
- (void)chatInputControllerDidShowHandwriting:(id)arg1;
- (_Bool)keyboardIsVisibleForChatInputController:(id)arg1;
- (id)dragControllerTranscriptDelegate;
- (id)stickerInfoDictionaryWithLayoutIntent:(unsigned long long)arg1 parentPreviewWidth:(double)arg2 xScalar:(double)arg3 yScalar:(double)arg4 scale:(double)arg5 rotation:(double)arg6;
- (void)sendStickerWithMediaObject:(id)arg1 parentMessagePartChatItem:(id)arg2;
- (void)sendSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)sendSticker:(id)arg1;
- (void)chatInputSentComposition:(id)arg1;
- (id)viewForDragAndChatInputDropTarget;
- (id)viewControllerForChatInputModalPresentation;
- (id)consumingBundleIdentifiers;
- (_Bool)becomeFirstResponder;
- (_Bool)_shouldDisplayTextEntry;
- (_Bool)canBecomeFirstResponder;
- (_Bool)pluginButtonsEnabled;
- (void)_setEntryViewFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)_updateEntryViewFrameIfNeeded:(_Bool)arg1;
- (double)_maxEntryViewHeight;
- (double)_entryViewTopInsetPadding;
- (void)loadChatInputController;
- (void)reloadEntryViewIfNeeded;
- (void)setSendingMessage:(_Bool)arg1;
- (struct UIEdgeInsets)_marginInsetsForEntryView;
- (id)inputViewController;
- (id)inputAccessoryView;
- (void)_textInputModeDidChange:(id)arg1;
- (void)composeRecipientViewShouldResignFirstResponder;
- (void)_handleIsUnexpectedlyLoggedOutChanged:(id)arg1;
- (void)_initializeEffectPicker;
- (void)_presentEffectPicker;
- (void)_sizeEffectPickerWindow;
- (void)_dataDetectorsDidDismissNotification:(id)arg1;
- (void)_dataDetectorsWillPresentNotification:(id)arg1;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_conversationParticipantsChanged:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_raiseToListenSettingChanged:(id)arg1;
- (void)_transferRestoredNotification:(id)arg1;
- (void)_transferFinishedNotification:(id)arg1;
- (void)_displayNameUpdatedNotification:(id)arg1;
- (void)registerNotificationsForConversation:(id)arg1;
- (id)_suggestionsNotificationNameForChat:(id)arg1;
- (void)registerNotifications;
- (void)dismissDetailsController:(id)arg1;
- (id)_navigationControllerToPop;
- (void)_backbuttonPressed;
- (void)_presentDetailsViewController;
- (void)_detailsButtonPressed;
- (void)navbarCanvasViewControllerWantsNavbarResize:(id)arg1;
- (void)navbarCanvasViewController:(id)arg1 didTapView:(id)arg2;
- (void)navbarCanvasViewController:(id)arg1 avatarPickerViewControllerDidSelectEntity:(id)arg2;
- (void)_resizeNavigationBarIfNecessary;
- (void)_initializeNavigationBarCanvasViewIfNecessary;
- (_Bool)_canShowBackButtonView;
- (void)_updateNavigationButtons;
- (_Bool)shouldUseNavigationBarCanvasView;
- (void)_setTitle:(id)arg1 animated:(_Bool)arg2;
- (void)_updateProgressBarFrame;
- (id)_progressBarHostView;
- (id)progressBar;
- (double)topInsetPadding;
- (double)minimumBottomInset;
- (void)updateAppStripVisibility;
- (void)keyboardVisibilityWillChange;
- (void)keyboardDidShowOrHide:(id)arg1;
- (void)keyboardWillShowOrHide:(id)arg1;
- (void)_askToTurnOnSMSRelayIfNeeded;
- (void)_confirmReadReceiptSettings;
- (void)_askToTurnOnReadReceiptsIfNeeded;
- (_Bool)_shouldShowReadRecieptAlert;
- (void)_markAsReadIfNecessary;
- (_Bool)isSafeToMarkAsRead;
- (void)_didSendCompositionInConversation:(id)arg1;
- (void)_willSendComposition:(id)arg1 inConversation:(id)arg2;
- (void)_updateForNewPreferredService;
- (void)presentAppStoreForURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)_presentBrowserOrAppStoreForAdamID:(id)arg1;
- (struct UIEdgeInsets)_avoidanceInsets;
- (void)setupScrollingForKeyboardInteraction;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyleExpanded:(_Bool)arg2 forChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (_Bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2;
- (void)_invalidateChatItemLayoutIfNecessary;
- (void)_setConversationDeferredSetup;
- (id)outgoingComposeViewForSendAnimation;
- (double)gradientBottomPlaceholderHeight;
- (double)balloonMaxWidth;
- (void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3;
- (void)trimControllerDidCancel:(id)arg1;
- (void)presentTrimControllerForMediaObject:(id)arg1;
- (void)startTrimmingMediaObjectsInComposition:(id)arg1;
- (_Bool)_mediaObjectNeedsTrimming:(id)arg1;
- (id)nextMediaObjectToTrimInComposition:(id)arg1;
- (void)primeTranscriptWithInitialOffset:(struct CGPoint)arg1 inset:(struct UIEdgeInsets)arg2;
- (void)scrollToMessage:(id)arg1 highlight:(_Bool)arg2;
- (void)dismissKeyboard;
- (void)showKeyboardForReply;
- (void)showKeyboard;
- (void)makeEntryViewActiveAfterSend;
- (void)hideAppStripAfterSend;
@property(retain, nonatomic) CKComposition *composition;
- (void)setupStateForLaunchPluginWithBundleID:(id)arg1 pluginPayload:(id)arg2;
- (void)setupStateForLaunchURL:(id)arg1;
- (void)sendComposition:(id)arg1;
- (void)endHoldingAutorotationForKey:(id)arg1;
- (void)beginHoldingAutorotationForKey:(id)arg1;
- (void)_autorotationUpdaterFired;
- (_Bool)shouldAutorotate;
- (void)performResumeDeferredSetup;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)isCollapsed;
- (void)willMoveToParentViewController:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)prepareForSuspend;
- (void)_performResume;
- (void)parentControllerDidBecomeActive;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)_chatShowsUnexpectedlyLoggedOutNotification;
- (void)_updateTranscriptInlineNotification;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)loadView;
- (void)forciblyUnloadChatInputController;
- (void)setConversation:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (void)prepareToDismissForSecondInstance;
- (void)dealloc;
- (void)effectPickerViewController:(id)arg1 effectWithIdentifierSelected:(id)arg2;
- (void)effectPickerViewControllerClose:(id)arg1;
- (id)throwBalloonsForSendAnimationContext:(id)arg1;
- (_Bool)wantsOverKeyboardAnimationForSendAnimationContext:(id)arg1;
- (void)throwAnimationManagerPrepareForThrowAnimation:(id)arg1 context:(id)arg2;
- (double)throwAnimationManagerTopHeaderHeight:(id)arg1;
- (struct CGRect)throwAnimationWindowFrame:(id)arg1;
- (struct CGRect)throwAnimationKeyboardFrame:(id)arg1;
- (double)throwAnimationManagerAccessoryViewHeight:(id)arg1;
- (id)throwAnimationManagerEntryView:(id)arg1;
- (void)throwAnimationManager:(id)arg1 canNowSendMessages:(id)arg2;
- (struct CGRect)_convertedNavigationBarFrameInSendAnimationContainerView:(id)arg1;
- (_Bool)_shouldHideNavigationBarForSendAnimationContext:(id)arg1;
- (void)_finishSendAnimation;
- (id)_fullscreenEffectsManager;
- (void)sendAnimationManagerDidStopAnimation:(id)arg1 context:(id)arg2;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (id)collectionViewControllerForImpactEffectManager:(id)arg1;
- (id)chatForSendAnimationManager:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)previewControllerDidCancelDismiss:(id)arg1;
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;
- (id)previewActionsForPreviewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect *)arg3 realSize:(struct CGSize *)arg4;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (void)previewController:(id)arg1 didTransitionToState:(long long)arg2;
- (void)previewController:(id)arg1 willTransitionToState:(long long)arg2;
- (_Bool)previewController:(id)arg1 canShareItem:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (_Bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (void)restoreContentOffsetChanges;
- (void)restoreEntryViewAfterPreview;
- (void)_showVCalViewerForMediaObject:(id)arg1;
- (void)_showVCardViewerForMediaObject:(id)arg1;
- (void)_showMapViewerForMediaObject:(id)arg1;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)_showPassbookCardViewForMediaObject:(id)arg1;
- (void)showAlternateViewerForMediaObject:(id)arg1;
- (void)showViewerForMediaObject:(id)arg1;
- (void)_dismissPresentedViewController:(id)arg1;
- (void)readerViewControllerWillDismiss:(id)arg1;
- (_Bool)_canReloadEntryView;
- (void)_showReaderForAggregateChatItem:(id)arg1;
- (_Bool)_displayPreviewItemForMediaObject:(id)arg1;
- (_Bool)_displayMediaObjectFullscreen:(id)arg1;
- (void)updateQLPreviewControllerIfVisible;
- (id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(long long *)arg2 containsRestoring:(_Bool *)arg3;
- (void)dismissVideoMessageRecordingViewController;
- (void)ckVideoMessageRecordingViewController:(id)arg1 mediaObjectCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1;
- (_Bool)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1;
- (_Bool)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1;
- (void)actionMenuGestureRecognizerButtonShowHint:(id)arg1;
- (_Bool)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1;
- (void)prewarmCamera:(id)arg1;
- (void)hideMediaPickerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideMediaPickerAnimated:(_Bool)arg1;
- (void)showMediaPicker:(id)arg1 animated:(_Bool)arg2;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (id)_supportedMediaTypesForPhotoPicker;
- (id)supportedMediaTypesForPhotoPicker:(id)arg1;
- (void)photoPickerControllerWillCancel:(id)arg1;
- (void)photoPickerControllerRequestPresentCamera:(id)arg1;
- (void)photoPickerControllerRequestPresentPhotoLibrary:(id)arg1;
- (void)photoPickerController:(id)arg1 requestsSendAssets:(id)arg2 sendImmediately:(_Bool)arg3;
- (void)_kickPhotoKit;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_showPhotoPickerController;
- (void)addMedia:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKChatControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

