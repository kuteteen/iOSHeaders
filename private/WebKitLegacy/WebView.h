//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAKView.h"

@class DOMCSSStyleDeclaration, DOMDocument, DOMRange, NSData, NSString, NSURL, NSUndoManager, WAKWindow, WebBackForwardList, WebFrame, WebPreferences, WebScriptObject, WebUITextIndicatorData, WebViewPrivate;

@interface WebView : WAKView
{
    WebViewPrivate *_private;
}

+ (void)registerViewClass:(Class)arg1 representationClass:(Class)arg2 forMIMEType:(id)arg3;
+ (void)registerURLSchemeAsLocal:(id)arg1;
+ (void)setMIMETypesShownAsHTML:(id)arg1;
+ (id)MIMETypesShownAsHTML;
+ (_Bool)canShowMIMETypeAsHTML:(id)arg1;
+ (_Bool)canShowMIMEType:(id)arg1;
+ (_Bool)_canShowMIMEType:(id)arg1 allowingPlugins:(_Bool)arg2;
+ (void)initialize;
+ (void)_makeAllWebViewsPerformSelector:(SEL)arg1;
+ (void)_setTileCacheLayerPoolCapacity:(unsigned int)arg1;
+ (void)_setHTTPPipeliningEnabled:(_Bool)arg1;
+ (_Bool)_HTTPPipeliningEnabled;
+ (void)_setLoadResourcesSerially:(_Bool)arg1;
+ (void)_registerURLSchemeAsAllowingDatabaseAccessInPrivateBrowsing:(id)arg1;
+ (void)_registerURLSchemeAsAllowingLocalStorageAccessInPrivateBrowsing:(id)arg1;
+ (void)_registerURLSchemeAsSecure:(id)arg1;
+ (void)_setDomainRelaxationForbidden:(_Bool)arg1 forURLScheme:(id)arg2;
+ (void)_removeAllUserContentFromGroup:(id)arg1;
+ (void)_removeUserStyleSheetsFromGroup:(id)arg1 world:(id)arg2;
+ (void)_removeUserScriptsFromGroup:(id)arg1 world:(id)arg2;
+ (void)_removeUserStyleSheetFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3;
+ (void)_removeUserScriptFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3;
+ (void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectedFrames:(int)arg7;
+ (void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6;
+ (void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7 injectedFrames:(int)arg8;
+ (void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7;
+ (void)_resetOriginAccessWhitelists;
+ (void)_removeOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(_Bool)arg4;
+ (void)_addOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(_Bool)arg4;
+ (void)_doNotStartObservingNetworkReachability;
+ (id)_productivityDocumentMIMETypes;
+ (_Bool)_shouldUseFontSmoothing;
+ (void)_setShouldUseFontSmoothing:(_Bool)arg1;
+ (id)_decodeData:(id)arg1;
+ (_Bool)_canHandleRequest:(id)arg1;
+ (_Bool)_canHandleRequest:(id)arg1 forMainFrame:(_Bool)arg2;
+ (_Bool)_representationExistsForURLScheme:(id)arg1;
+ (id)_generatedMIMETypeForURLScheme:(id)arg1;
+ (void)_registerViewClass:(Class)arg1 representationClass:(Class)arg2 forURLScheme:(id)arg3;
+ (void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)arg1;
+ (_Bool)_hasRemoteInspectorSession;
+ (_Bool)_isRemoteInspectorEnabled;
+ (void)_disableAutoStartRemoteInspector;
+ (void)_disableRemoteInspector;
+ (void)_enableRemoteInspector;
+ (_Bool)_isIconLoadingEnabled;
+ (void)_setIconLoadingEnabled:(_Bool)arg1;
+ (id)_MIMETypeForFile:(id)arg1;
+ (_Bool)_isUnderMemoryPressure;
+ (_Bool)_allowCookies;
+ (void)_setAllowCookies:(_Bool)arg1;
+ (_Bool)canShowFile:(id)arg1;
+ (void)closeAllWebViews;
+ (_Bool)canCloseAllWebViews;
+ (void)_setAlwaysUsesComplexTextCodePath:(_Bool)arg1;
+ (_Bool)_viewClass:(Class *)arg1 andRepresentationClass:(Class *)arg2 forMIMEType:(id)arg3 allowingPlugins:(_Bool)arg4;
+ (void)_unregisterPluginMIMEType:(id)arg1;
+ (void)_registerPluginMIMEType:(id)arg1;
+ (_Bool)isCharacterSmartReplaceExempt:(unsigned short)arg1 isPreviousCharacter:(_Bool)arg2;
+ (void)willEnterBackgroundWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_releaseMemoryNow;
+ (void)enableWebThread;
+ (id)_supportedMIMETypes;
+ (void)_reportException:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
+ (id)_standardUserAgentWithApplicationName:(id)arg1;
+ (void)_preflightSpellChecker;
+ (void)_preflightSpellCheckerNow:(id)arg1;
+ (void)_preferencesRemovedNotification:(id)arg1;
+ (void)_cacheModelChangedNotification:(id)arg1;
+ (unsigned long long)_maxCacheModelInAnyInstance;
+ (_Bool)_didSetCacheModel;
+ (unsigned long long)_cacheModel;
+ (void)_setCacheModel:(unsigned long long)arg1;
+ (_Bool)shouldIncludeInWebKitStatistics;
+ (void)_setFontWhitelist:(id)arg1;
+ (void)_setPDFViewClass:(Class)arg1;
+ (Class)_getPDFViewClass;
+ (void)_setPDFRepresentationClass:(Class)arg1;
+ (Class)_getPDFRepresentationClass;
- (id)previousValidKeyView;
- (id)currentNodeHighlight;
- (void)setCurrentNodeHighlight:(id)arg1;
@property(nonatomic) _Bool shouldUpdateWhileOffscreen;
@property(nonatomic) _Bool drawsBackground;
@property(readonly, nonatomic) DOMDocument *mainFrameDocument;
- (id)mainFrameIconURL;
@property(readonly, copy, nonatomic) NSString *mainFrameTitle;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(copy, nonatomic) NSString *mainFrameURL;
@property(readonly, nonatomic) double estimatedProgress;
@property(copy, nonatomic) NSString *groupName;
- (_Bool)searchFor:(id)arg1 direction:(_Bool)arg2 caseSensitive:(_Bool)arg3 wrap:(_Bool)arg4;
- (void)setNextKeyView:(id)arg1;
- (id)_webcore_effectiveFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)acceptsFirstResponder;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (id)_elementAtWindowPoint:(struct CGPoint)arg1;
- (id)documentViewAtWindowPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) WAKWindow *hostWindow;
- (id)userAgentForURL:(id)arg1;
- (struct String)_userAgentString;
@property(readonly, nonatomic) WebScriptObject *windowScriptObject;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
@property(copy, nonatomic) NSString *customTextEncodingName;
- (id)_mainFrameOverrideEncoding;
@property(readonly, nonatomic) _Bool supportsTextEncoding;
@property(copy, nonatomic) NSString *mediaStyle;
@property(copy, nonatomic) NSString *customUserAgent;
@property(copy, nonatomic) NSString *applicationNameForUserAgent;
- (void)_resetZoom:(id)arg1 isTextOnly:(_Bool)arg2;
- (_Bool)_canResetZoom:(_Bool)arg1;
- (void)_zoomIn:(id)arg1 isTextOnly:(_Bool)arg2;
- (void)_zoomOut:(id)arg1 isTextOnly:(_Bool)arg2;
- (_Bool)_canZoomIn:(_Bool)arg1;
- (_Bool)_canZoomOut:(_Bool)arg1;
- (_Bool)_realZoomMultiplierIsTextOnly;
- (float)_realZoomMultiplier;
- (float)_zoomMultiplier:(_Bool)arg1;
- (void)_setZoomMultiplier:(float)arg1 isTextOnly:(_Bool)arg2;
@property(nonatomic) float textSizeMultiplier;
- (_Bool)goToBackForwardItem:(id)arg1;
- (_Bool)goForward;
- (_Bool)goBack;
- (void)setMaintainsBackForwardList:(_Bool)arg1;
@property(readonly, nonatomic) WebBackForwardList *backForwardList;
@property(readonly, nonatomic) WebFrame *selectedFrame;
@property(readonly, nonatomic) WebFrame *mainFrame;
@property(nonatomic) id <WebFrameLoadDelegate> frameLoadDelegate;
- (id)_frameLoadDelegateForwarder;
@property(nonatomic) id <WebPolicyDelegate> policyDelegate;
@property(nonatomic) id <WebDownloadDelegate> downloadDelegate;
@property(nonatomic) id <WebResourceLoadDelegate> resourceLoadDelegate;
- (id)_resourceLoadDelegateForwarder;
@property(nonatomic) id <WebUIDelegate> UIDelegate;
@property(copy, nonatomic) NSString *preferencesIdentifier;
@property(retain, nonatomic) WebPreferences *preferences;
- (void)_updateScreenScaleFromWindow;
- (void)_wakWindowVisibilityChanged:(id)arg1;
- (void)_wakWindowScreenScaleChanged:(id)arg1;
- (void)viewDidMoveToWindow;
@property(nonatomic) _Bool shouldCloseWithWindow;
- (void)close;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithArguments:(id)arg1;
- (_Bool)_isMIMETypeRegisteredAsPlugin:(id)arg1;
- (id)_pluginForExtension:(id)arg1;
- (id)_pluginForMIMEType:(id)arg1;
- (_Bool)_canShowMIMEType:(id)arg1;
- (void)_addToAllWebViewsSet;
- (void)_removeFromAllWebViewsSet;
- (_Bool)shouldRequestCandidates;
- (void)forceRequestCandidatesForTesting;
- (void)showCandidates:(id)arg1 forString:(id)arg2 inRect:(struct CGRect)arg3 forSelectedRange:(struct _NSRange)arg4 view:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_setFontFallbackPrefersPictographs:(_Bool)arg1;
@property(copy, nonatomic, getter=_sourceApplicationAuditData, setter=_setSourceApplicationAuditData:) NSData *sourceApplicationAuditData;
@property(nonatomic, setter=_setUnobscuredSafeAreaInsets:) struct WebEdgeInsets _unobscuredSafeAreaInsets;
- (void)_setWebGLEnabled:(_Bool)arg1;
- (_Bool)_webGLEnabled;
- (void)_setWantsTelephoneNumberParsing:(_Bool)arg1;
- (_Bool)_wantsTelephoneNumberParsing;
- (void)_documentScaleChanged;
- (id)_fixedPositionContent;
- (void)_didScrollDocumentInFrameView:(id)arg1;
- (_Bool)searchFor:(id)arg1 direction:(_Bool)arg2 caseSensitive:(_Bool)arg3 wrap:(_Bool)arg4 startInSelection:(_Bool)arg5;
- (unsigned long long)countMatchesForText:(id)arg1 caseSensitive:(_Bool)arg2 highlight:(_Bool)arg3 limit:(unsigned long long)arg4 markMatches:(_Bool)arg5;
- (unsigned long long)markAllMatchesForText:(id)arg1 caseSensitive:(_Bool)arg2 highlight:(_Bool)arg3 limit:(unsigned long long)arg4;
- (unsigned long long)_pageCount;
- (_Bool)_paginationLineGridEnabled;
- (void)_setPaginationLineGridEnabled:(_Bool)arg1;
- (double)_gapBetweenPages;
- (void)_setGapBetweenPages:(double)arg1;
- (double)_pageLength;
- (void)_setPageLength:(double)arg1;
- (_Bool)_paginationBehavesLikeColumns;
- (void)_setPaginationBehavesLikeColumns:(_Bool)arg1;
- (void)_setVisibilityState:(int)arg1 isInitialState:(_Bool)arg2;
- (void)_setIsVisible:(_Bool)arg1;
- (int)_visibilityState;
- (unsigned long long)_layoutMilestones;
- (void)_listenForLayoutMilestones:(unsigned long long)arg1;
- (int)_paginationMode;
- (void)_setPaginationMode:(int)arg1;
- (_Bool)_useFixedLayout;
- (void)_setUseFixedLayout:(_Bool)arg1;
- (float)_viewScaleFactor;
- (void)_scaleWebView:(float)arg1 atOrigin:(struct CGPoint)arg2;
- (void)setCSSAnimationsSuspended:(_Bool)arg1;
- (_Bool)cssAnimationsSuspended;
- (void)setAllowsNewCSSAnimationsWhileSuspended:(_Bool)arg1;
- (_Bool)allowsNewCSSAnimationsWhileSuspended;
- (void)_updateActiveState;
- (void)_updateVisibilityState;
- (_Bool)_isViewVisible;
- (id)trackedRepaintRects;
- (void)resetTrackedRepaints;
- (_Bool)isTrackingRepaints;
- (void)setTracksRepaints:(_Bool)arg1;
- (_Bool)_isSoftwareRenderable;
- (id)_contentsOfUserInterfaceItem:(id)arg1;
- (void)setValidationMessageTimerMagnification:(int)arg1;
- (int)validationMessageTimerMagnification;
- (void)setInteractiveFormValidationEnabled:(_Bool)arg1;
- (_Bool)interactiveFormValidationEnabled;
- (void)_setBaseCTM:(struct CGAffineTransform)arg1 forContext:(struct CGContext *)arg2;
- (_Bool)_isUsingAcceleratedCompositing;
- (void)_setPostsAcceleratedCompositingNotifications:(_Bool)arg1;
- (_Bool)_postsAcceleratedCompositingNotifications;
- (_Bool)areMemoryCacheDelegateCallsEnabled;
- (void)setMemoryCacheDelegateCallsEnabled:(_Bool)arg1;
- (_Bool)isSelectTrailingWhitespaceEnabled;
- (void)setSelectTrailingWhitespaceEnabled:(_Bool)arg1;
- (void)_clearMainFrameName;
- (void)_executeCoreCommandByName:(id)arg1 value:(id)arg2;
- (id)textIteratorForRect:(struct CGRect)arg1;
- (void)_setGlobalHistoryItem:(struct HistoryItem *)arg1;
- (id)_globalHistoryItem;
- (void)setUsesPageCache:(_Bool)arg1;
- (_Bool)usesPageCache;
- (id)_touchEventRegions;
- (void)_overflowScrollPositionChangedTo:(struct CGPoint)arg1 forNode:(id)arg2 isUserScroll:(_Bool)arg3;
- (void)_viewGeometryDidChange;
- (_Bool)_fetchCustomFixedPositionLayoutRect:(struct CGRect *)arg1;
- (void)_setCustomFixedPositionLayoutRect:(struct CGRect)arg1;
- (void)_setCustomFixedPositionLayoutRectInWebThread:(struct CGRect)arg1 synchronize:(_Bool)arg2;
- (void)_synchronizeCustomFixedPositionLayoutRect;
- (struct CGSize)_fixedLayoutSize;
- (void)_setFixedLayoutSize:(struct CGSize)arg1;
- (_Bool)_allowsMessaging;
- (void)_setAllowsMessaging:(_Bool)arg1;
- (unsigned long long)_deviceOrientation;
- (void)_setDeviceOrientation:(unsigned long long)arg1;
- (_Bool)_isClosing;
- (_Bool)_isStopping;
- (id)quickLookContentForURL:(id)arg1;
- (void)setDefersCallbacks:(_Bool)arg1;
- (_Bool)defersCallbacks;
- (struct CGColor *)backgroundColor;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)_detachScriptDebuggerFromAllFrames;
- (void)_attachScriptDebuggerToAllFrames;
- (void)_setNeedsUnrestrictedGetMatchedCSSRules:(_Bool)arg1;
- (_Bool)_setMediaLayer:(id)arg1 forPluginView:(id)arg2;
- (void)_restorePlugInsFromCache;
- (void)_stopAllPlugInsForPageCache;
- (void)_stopAllPlugIns;
- (void)_startAllPlugIns;
- (void)_destroyAllPlugIns;
- (void)_locked_recursivelyPerformPlugInSelector:(SEL)arg1 inFrame:(id)arg2;
- (_Bool)_pluginsAreRunning;
- (_Bool)_locked_plugInsAreRunningInFrame:(id)arg1;
- (void)_setCookieEnabled:(_Bool)arg1;
- (_Bool)_cookieEnabled;
- (_Bool)_inFastImageScalingMode;
- (void)_setUseFastImageScalingMode:(_Bool)arg1;
- (id)_displayURL;
- (void)_clearDelegates;
- (void)caretChanged;
- (void)removeAllCaretChangeListeners;
- (void)removeCaretChangeListener:(id)arg1;
- (void)addCaretChangeListener:(id)arg1;
- (id)caretChangeListeners;
- (void)setCaretChangeListener:(id)arg1;
- (id)caretChangeListener;
- (id)_webMailDelegate;
- (void)setWebMailDelegate:(id)arg1;
- (id)_UIKitDelegate;
- (void)_setUIKitDelegate:(id)arg1;
- (void)_didCommitLoadForFrame:(id)arg1;
- (_Bool)_isPerformingProgrammaticFocus;
- (void)_popPerformingProgrammaticFocus;
- (void)_pushPerformingProgrammaticFocus;
- (void)_closeWindow;
- (id)_editingDelegateForwarder;
- (id)_UIDelegateForSelector:(SEL)arg1;
- (id)_UIDelegateForwarder;
- (id)_policyDelegateForwarder;
- (void)_cacheHistoryDelegateImplementations;
- (void)_cacheScriptDebugDelegateImplementations;
- (void)_cacheFrameLoadDelegateImplementations;
- (void)_cacheResourceLoadDelegateImplementations;
- (id)_UIKitDelegateForwarder;
- (void)_preferencesChanged:(id)arg1;
- (void)_preferencesChangedNotification:(id)arg1;
- (_Bool)_needsPreHTML5ParserQuirks;
- (id)_formDelegateForSelector:(SEL)arg1;
- (id)_formDelegateForwarder;
- (id)_formDelegate;
- (void)_setFormDelegate:(id)arg1;
- (void)_loadBackForwardListFromOtherView:(id)arg1;
- (void)_mouseDidMoveOverElement:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (struct Page *)page;
- (void)_setHostApplicationProcessIdentifier:(int)arg1 auditToken:(CDStruct_6ad76789)arg2;
- (void)setShowingInspectorIndication:(_Bool)arg1;
- (void)setAllowsRemoteInspection:(_Bool)arg1;
- (_Bool)allowsRemoteInspection;
- (id)inspector;
- (id)_openNewWindowWithRequest:(id)arg1;
- (id)_downloadURL:(id)arg1;
- (_Bool)_isProcessingUserGesture;
- (void)_close;
- (void)_closeWithFastTeardown;
- (void)_closePluginDatabases;
- (void)_setResourceLoadSchedulerSuspended:(_Bool)arg1;
- (void)_didFinishScrollingOrZooming;
- (void)_willStartScrollingOrZooming;
- (void)_dispatchTileDidDraw:(id)arg1;
- (unsigned long long)_renderTreeSize;
- (id)styleAtSelectionStart;
- (void)_dispatchUnloadEvent;
- (_Bool)_isClosed;
- (_Bool)_viewClass:(Class *)arg1 andRepresentationClass:(Class *)arg2 forMIMEType:(id)arg3;
- (void)_didConcludeEditDataInteraction;
- (void)_endedDataInteraction:(struct CGPoint)arg1 global:(struct CGPoint)arg2;
- (_Bool)_tryToPerformDataInteraction:(id)arg1 client:(struct CGPoint)arg2 global:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)_performDataInteraction:(id)arg1 client:(struct CGPoint)arg2 global:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)_exitedDataInteraction:(id)arg1 client:(struct CGPoint)arg2 global:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (unsigned long long)_updatedDataInteraction:(id)arg1 client:(struct CGPoint)arg2 global:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (unsigned long long)_enteredDataInteraction:(id)arg1 client:(struct CGPoint)arg2 global:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (struct DragData)dragDataForSession:(id)arg1 client:(struct CGPoint)arg2 global:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (unsigned long long)dragDestinationActionMaskForSession:(id)arg1;
- (id)_getDataInteractionData;
@property(readonly, nonatomic) struct CGRect _draggedElementBounds;
@property(readonly, nonatomic) NSURL *_draggedLinkURL;
@property(readonly, nonatomic) NSString *_draggedLinkTitle;
@property(readonly, nonatomic) unsigned long long _dragSourceAction;
@property(readonly, nonatomic, getter=_dataOperationTextIndicator) WebUITextIndicatorData *dataOperationTextIndicator;
@property(readonly, nonatomic, getter=_dataInteractionCaretRect) struct CGRect dataInteractionCaretRect;
- (void)_startDrag:(const struct DragItem *)arg1;
- (_Bool)_requestStartDataInteraction:(struct CGPoint)arg1 globalPosition:(struct CGPoint)arg2;
- (void)updateLayoutIgnorePendingStyleSheets;
- (void)_replaceCurrentHistoryItem:(id)arg1;
- (id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(struct CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4;
- (void)_viewWillDrawInternal;
- (id)_initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;
- (void)_commonInitializationWithFrameName:(id)arg1 groupName:(id)arg2;
- (void)_dispatchPendingLoadRequests;
- (void)_setUIWebViewUserAgentWithBuildVersion:(id)arg1;
- (void)_setBrowserUserAgentProductVersion:(id)arg1 buildVersion:(id)arg2 bundleVersion:(id)arg3;
- (void)makeTextStandardSize:(id)arg1;
@property(readonly, nonatomic) _Bool canMakeTextStandardSize;
- (void)makeTextLarger:(id)arg1;
@property(readonly, nonatomic) _Bool canMakeTextLarger;
- (void)makeTextSmaller:(id)arg1;
@property(readonly, nonatomic) _Bool canMakeTextSmaller;
- (void)reloadFromOrigin:(id)arg1;
- (void)reload:(id)arg1;
- (void)stopLoadingAndClear;
- (void)stopLoading:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) _Bool canGoBack;
- (void)takeStringURLFrom:(id)arg1;
- (void)removeVisitedLink:(id)arg1;
- (void)addVisitedLinks:(id)arg1;
- (float)mediaVolume;
- (void)setMediaVolume:(float)arg1;
- (void)resetPageZoom:(id)arg1;
- (_Bool)canResetPageZoom;
- (void)zoomPageOut:(id)arg1;
- (_Bool)canZoomPageOut;
- (void)zoomPageIn:(id)arg1;
- (_Bool)canZoomPageIn;
- (float)pageSizeMultiplier;
- (void)setPageSizeMultiplier:(float)arg1;
- (void)setAllowsUndo:(_Bool)arg1;
- (_Bool)allowsUndo;
- (void)scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2;
- (void)scrollDOMRangeToVisible:(id)arg1;
- (id)rectsForTextMatches;
- (void)unmarkAllTextMatches;
- (unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 highlight:(_Bool)arg4 limit:(unsigned long long)arg5 markMatches:(_Bool)arg6;
- (unsigned long long)countMatchesForText:(id)arg1 options:(unsigned long long)arg2 highlight:(_Bool)arg3 limit:(unsigned long long)arg4 markMatches:(_Bool)arg5;
- (_Bool)canMarkAllTextMatches;
- (_Bool)shouldClose;
- (id)historyDelegate;
- (void)setHistoryDelegate:(id)arg1;
- (id)scriptDebugDelegate;
- (void)setScriptDebugDelegate:(id)arg1;
- (_Bool)tabKeyCyclesThroughElements;
- (void)setTabKeyCyclesThroughElements:(_Bool)arg1;
- (void)setMainFrameDocumentReady:(_Bool)arg1;
- (id)DOMRangeOfString:(id)arg1 relativeTo:(id)arg2 options:(unsigned long long)arg3;
- (_Bool)findString:(id)arg1 options:(unsigned long long)arg2;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (id)computedStyleForElement:(id)arg1 pseudoElement:(id)arg2;
- (id)styleDeclarationWithText:(id)arg1;
@property(nonatomic) id <WebEditingDelegate> editingDelegate;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
@property(readonly, nonatomic) NSUndoManager *undoManager;
@property(nonatomic, getter=isContinuousSpellCheckingEnabled) _Bool continuousSpellCheckingEnabled;
@property(nonatomic) _Bool smartInsertDeleteEnabled;
@property(retain, nonatomic) DOMCSSStyleDeclaration *typingStyle;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(readonly, nonatomic) int selectionAffinity;
@property(readonly, nonatomic) DOMRange *selectedDOMRange;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2;
@property(readonly, nonatomic) _Bool maintainsInactiveSelection;
- (void)_setMaintainsInactiveSelection:(_Bool)arg1;
- (_Bool)_shouldChangeSelectedDOMRange:(id)arg1 toDOMRange:(id)arg2 affinity:(int)arg3 stillSelecting:(_Bool)arg4;
- (id)editableDOMRangeForPoint:(struct CGPoint)arg1;
- (_Bool)isAutomaticSpellingCorrectionEnabled;
- (_Bool)isAutomaticTextReplacementEnabled;
- (_Bool)isAutomaticDashSubstitutionEnabled;
- (_Bool)isAutomaticLinkDetectionEnabled;
- (_Bool)isAutomaticQuoteSubstitutionEnabled;
- (void)applyStyle:(id)arg1;
- (void)deleteSelection;
- (void)replaceSelectionWithArchive:(id)arg1;
- (void)replaceSelectionWithMarkupString:(id)arg1;
- (void)replaceSelectionWithText:(id)arg1;
- (void)replaceSelectionWithNode:(id)arg1;
- (id)typingAttributes;
- (void)insertText:(id)arg1;
- (void)insertDictationPhrases:(id)arg1 metadata:(id)arg2;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalic:(id)arg1;
- (void)toggleBold:(id)arg1;
- (void)clearText:(id)arg1;
- (void)yankAndSelect:(id)arg1;
- (void)yank:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)unscript:(id)arg1;
- (void)underline:(id)arg1;
- (void)transpose:(id)arg1;
- (void)toggleBaseWritingDirection:(id)arg1;
- (void)takeFindStringFromSelection:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (void)superscript:(id)arg1;
- (void)subscript:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)showGuessPanel:(id)arg1;
- (void)setMark:(id)arg1;
- (void)selectWord:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectSentence:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectLine:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)pasteFont:(id)arg1;
- (void)pasteAsRichText:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)paste:(id)arg1;
- (void)pageUpAndModifySelection:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)pageDownAndModifySelection:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)overWrite:(id)arg1;
- (void)outdent:(id)arg1;
- (void)orderFrontSubstitutionsPanel:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveToRightEndOfLineAndModifySelection:(id)arg1;
- (void)moveToRightEndOfLine:(id)arg1;
- (void)moveToLeftEndOfLineAndModifySelection:(id)arg1;
- (void)moveToLeftEndOfLine:(id)arg1;
- (void)moveToEndOfSentenceAndModifySelection:(id)arg1;
- (void)moveToEndOfSentence:(id)arg1;
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToEndOfLineAndModifySelection:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)arg1;
- (void)moveToBeginningOfSentence:(id)arg1;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeBaseWritingDirectionRightToLeft:(id)arg1;
- (void)makeBaseWritingDirectionLeftToRight:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)indent:(id)arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)delete:(id)arg1;
- (void)cut:(id)arg1;
- (void)copyFont:(id)arg1;
- (void)copy:(id)arg1;
- (void)complete:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)changeSpelling:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)changeDocumentBackgroundColor:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)changeBaseWritingDirectionToRTL:(id)arg1;
- (void)changeBaseWritingDirectionToLTR:(id)arg1;
- (void)changeBaseWritingDirection:(id)arg1;
- (void)changeAttributes:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)_performResponderOperation:(SEL)arg1 with:(id)arg2;
- (void)_simplifyMarkup:(id)arg1 endNode:(id)arg2;
- (_Bool)_selectionIsAll;
- (_Bool)_selectionIsCaret;
- (void)_replaceSelectionWithNode:(id)arg1 matchStyle:(_Bool)arg2;
- (void)_insertNewlineInQuotedContent;
- (id)_responderForResponderOperations;
- (_Bool)_continuousCheckingAllowed;
- (id)_frameViewAtWindowPoint:(struct CGPoint)arg1;
- (_Bool)_isLoading;
- (id)_focusedFrame;
- (id)candidateList;
- (void)prepareForMouseUp;
- (void)prepareForMouseDown;
- (void)updateTouchBar;
- (void)hideFormValidationMessage;
- (void)showFormValidationMessage:(id)arg1 withAnchorRect:(struct CGRect)arg2;
- (struct CGRect)_convertRectFromRootView:(struct CGRect)arg1;
- (struct CGPoint)_convertPointFromRootView:(struct CGPoint)arg1;
- (void)_exitVideoFullscreen;
- (void)_enterVideoFullscreenForVideoElement:(struct HTMLVideoElement *)arg1 mode:(unsigned int)arg2;
- (void)_scheduleLayerFlushForPendingTileCacheRepaint;
- (_Bool)_flushCompositingChanges;
- (void)_scheduleCompositingLayerFlush;
- (void)_setNeedsOneShotDrawingSynchronization:(_Bool)arg1;
- (_Bool)_needsOneShotDrawingSynchronization;
- (void)_clearCredentials;
- (id)_selectedOrMainFrame;
-     // Error parsing type: ^{Frame=^^?{atomic<unsigned int>=AI}{HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >={HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >=^^{FrameDestructionObserver}IIII}}^{MainFrame}^{Page}{RefPtr<WebCore::Settings, WTF::DumbPtrTraits<WebCore::Settings> >=^{Settings}}{FrameTree=^{Frame}^{Frame}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}{RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> >=^{Frame}}^{Frame}I}{UniqueRef<WebCore::FrameLoader>={unique_ptr<WebCore::FrameLoader, std::__1::default_delete<WebCore::FrameLoader> >={__compressed_pair<WebCore::FrameLoader *, std::__1::default_delete<WebCore::FrameLoader> >=^{FrameLoader}}}}{UniqueRef<WebCore::NavigationScheduler>={unique_ptr<WebCore::NavigationScheduler, std::__1::default_delete<WebCore::NavigationScheduler> >={__compressed_pair<WebCore::NavigationScheduler *, std::__1::default_delete<WebCore::NavigationScheduler> >=^{NavigationScheduler}}}}^{HTMLFrameOwnerElement}{RefPtr<WebCore::FrameView, WTF::DumbPtrTraits<WebCore::FrameView> >=^{FrameView}}{RefPtr<WebCore::Document, WTF::DumbPtrTraits<WebCore::Document> >=^{Document}}{UniqueRef<WebCore::ScriptController>={unique_ptr<WebCore::ScriptController, std::__1::default_delete<WebCore::ScriptController> >={__compressed_pair<WebCore::ScriptController *, std::__1::default_delete<WebCore::ScriptController> >=^{ScriptController}}}}{UniqueRef<WebCore::Editor>={unique_ptr<WebCore::Editor, std::__1::default_delete<WebCore::Editor> >={__compressed_pair<WebCore::Editor *, std::__1::default_delete<WebCore::Editor> >=^{Editor}}}}{UniqueRef<WebCore::FrameSelection>={unique_ptr<WebCore::FrameSelection, std::__1::default_delete<WebCore::FrameSelection> >={__compressed_pair<WebCore::FrameSelection *, std::__1::default_delete<WebCore::FrameSelection> >=^{FrameSelection}}}}{UniqueRef<WebCore::CSSAnimationController>={unique_ptr<WebCore::CSSAnimationController, std::__1::default_delete<WebCore::CSSAnimationController> >={__compressed_pair<WebCore::CSSAnimationController *, std::__1::default_delete<WebCore::CSSAnimationController> >=^{CSSAnimationController}}}}{RetainPtr<NSArray>=^v}{Timer=^^?{MonotonicTime=d}{MonotonicTime=d}{Seconds=d}iIB^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>}{Ref<WTF::Thread, WTF::DumbPtrTraits<WTF::Thread> >=^{Thread}}{Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase}}}}}f{IntPoint=ii}{ViewportArguments=iffffffffffffiB}B{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}{VisibleSelection={Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >=^{Node}}ib3b1}iib1b1}ffiBB{UniqueRef<WebCore::EventHandler>={unique_ptr<WebCore::EventHandler, std::__1::default_delete<WebCore::EventHandler> >={__compressed_pair<WebCore::EventHandler *, std::__1::default_delete<WebCore::EventHandler> >=^{EventHandler}}}}}16@0:8, name: _mainCoreFrame
- (int)_keyboardUIMode;
- (void)_retrieveKeyboardUIModeFromPreferences:(id)arg1;
- (void)_removeObjectForIdentifier:(unsigned long long)arg1;
- (id)_objectForIdentifier:(unsigned long long)arg1;
- (void)_addObject:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (_Bool)_becomingFirstResponderFromOutside;
- (id)_deviceOrientationProvider;
- (void)_setDeviceOrientationProvider:(id)arg1;
- (id)_userMediaClient;
- (void)_setUserMediaClient:(id)arg1;
- (void)_resetAllGeolocationPermission;
- (void)_geolocationDidFailWithMessage:(id)arg1;
- (void)_geolocationDidChangePosition:(id)arg1;
- (id)_geolocationProvider;
- (void)_setGeolocationProvider:(id)arg1;
- (unsigned long long)_notificationIDForTesting:(struct OpaqueJSValue *)arg1;
- (void)_notificationsDidClose:(id)arg1;
- (void)_notificationDidClick:(unsigned long long)arg1;
- (void)_notificationDidShow:(unsigned long long)arg1;
- (id)_notificationProvider;
- (void)_setNotificationProvider:(id)arg1;
- (id)fullScreenPlaceholderView;

@end

