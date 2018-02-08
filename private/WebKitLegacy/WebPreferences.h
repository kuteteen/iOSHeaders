//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, NSURL;

@interface WebPreferences : NSObject <NSCoding>
{
    struct WebPreferencesPrivate *_private;
}

+ (void)initialize;
+ (id)standardPreferences;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned long long)arg1;
+ (void)_clearNetworkLoaderSession;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (unsigned int)_systemCFStringEncoding;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_IBCreatorID;
@property(nonatomic) _Bool allowsAirPlayForMediaPlayback;
@property(nonatomic) _Bool suppressesIncrementalRendering;
@property(nonatomic) unsigned long long cacheModel;
- (void)_postCacheModelChangedNotification;
@property(nonatomic) _Bool usesPageCache;
- (void)_updatePrivateBrowsingStateTo:(_Bool)arg1;
@property(nonatomic) _Bool privateBrowsingEnabled;
@property(nonatomic) _Bool autosaves;
@property(nonatomic) _Bool loadsImagesAutomatically;
@property(nonatomic) _Bool allowsAnimatedImageLooping;
@property(nonatomic) _Bool allowsAnimatedImages;
@property(nonatomic, getter=arePlugInsEnabled) _Bool plugInsEnabled;
@property(nonatomic) _Bool javaScriptCanOpenWindowsAutomatically;
@property(nonatomic, getter=isJavaScriptEnabled) _Bool javaScriptEnabled;
@property(nonatomic, getter=isJavaEnabled) _Bool javaEnabled;
@property(retain, nonatomic) NSURL *userStyleSheetLocation;
@property(nonatomic) _Bool userStyleSheetEnabled;
@property(copy, nonatomic) NSString *defaultTextEncodingName;
@property(nonatomic) int minimumLogicalFontSize;
@property(nonatomic) int minimumFontSize;
@property(nonatomic) int defaultFixedFontSize;
@property(nonatomic) int defaultFontSize;
@property(copy, nonatomic) NSString *fantasyFontFamily;
@property(copy, nonatomic) NSString *cursiveFontFamily;
@property(copy, nonatomic) NSString *sansSerifFontFamily;
@property(copy, nonatomic) NSString *serifFontFamily;
@property(copy, nonatomic) NSString *fixedFontFamily;
@property(copy, nonatomic) NSString *standardFontFamily;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (long long)_longLongValueForKey:(id)arg1;
- (void)_setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)_boolValueForKey:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (float)_floatValueForKey:(id)arg1;
- (void)_setUnsignedIntValue:(unsigned int)arg1 forKey:(id)arg2;
- (unsigned int)_unsignedIntValueForKey:(id)arg1;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (int)_integerValueForKey:(id)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (id)_stringValueForKey:(id)arg1;
- (id)_valueForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(_Bool)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
@property(nonatomic) _Bool mediaCapabilitiesEnabled;
@property(nonatomic) _Bool accessibilityObjectModelEnabled;
@property(nonatomic) _Bool inspectorAdditionsEnabled;
@property(nonatomic) _Bool allowMediaContentTypesRequiringHardwareSupportAsFallback;
@property(nonatomic) _Bool constantPropertiesEnabled;
@property(nonatomic) _Bool viewportFitEnabled;
@property(nonatomic) _Bool encryptedMediaAPIEnabled;
@property(nonatomic) _Bool legacyEncryptedMediaAPIEnabled;
@property(nonatomic) _Bool isSecureContextAttributeEnabled;
@property(nonatomic) NSString *mediaContentTypesRequiringHardwareSupport;
@property(nonatomic) _Bool quickLookDocumentSavingEnabled;
@property(nonatomic) _Bool mediaUserGestureInheritsFromDocument;
@property(nonatomic) _Bool webAuthenticationEnabled;
@property(nonatomic) _Bool resourceTimingEnabled;
@property(nonatomic) _Bool userTimingEnabled;
@property(nonatomic) _Bool displayContentsEnabled;
@property(nonatomic) _Bool menuItemElementEnabled;
@property(nonatomic) _Bool intersectionObserverEnabled;
- (void)setModernMediaControlsEnabled:(_Bool)arg1;
- (_Bool)modernMediaControlsEnabled;
- (void)setFetchAPIKeepAliveEnabled:(_Bool)arg1;
- (_Bool)fetchAPIKeepAliveEnabled;
- (void)setWebAnimationsEnabled:(_Bool)arg1;
- (_Bool)webAnimationsEnabled;
@property(nonatomic) _Bool visualViewportAPIEnabled;
@property(nonatomic) _Bool visualViewportEnabled;
- (void)setCSSGridLayoutEnabled:(_Bool)arg1;
- (_Bool)isCSSGridLayoutEnabled;
- (_Bool)directoryUploadEnabled;
- (void)setDirectoryUploadEnabled:(_Bool)arg1;
- (void)setDownloadAttributeEnabled:(_Bool)arg1;
- (_Bool)downloadAttributeEnabled;
- (void)setWritableStreamAPIEnabled:(_Bool)arg1;
- (_Bool)writableStreamAPIEnabled;
- (void)setReadableByteStreamAPIEnabled:(_Bool)arg1;
- (_Bool)readableByteStreamAPIEnabled;
- (void)setFetchAPIEnabled:(_Bool)arg1;
- (_Bool)fetchAPIEnabled;
- (void)setCacheAPIEnabled:(_Bool)arg1;
- (_Bool)cacheAPIEnabled;
- (void)setCustomPasteboardDataEnabled:(_Bool)arg1;
- (_Bool)customPasteboardDataEnabled;
- (void)setDataTransferItemsEnabled:(_Bool)arg1;
- (_Bool)dataTransferItemsEnabled;
- (void)setCustomElementsEnabled:(_Bool)arg1;
- (_Bool)customElementsEnabled;
- (void)setShadowDOMEnabled:(_Bool)arg1;
- (_Bool)shadowDOMEnabled;
- (void)setMediaCaptureRequiresSecureConnection:(_Bool)arg1;
- (_Bool)mediaCaptureRequiresSecureConnection;
- (void)setIceCandidateFilteringEnabled:(_Bool)arg1;
- (_Bool)iceCandidateFilteringEnabled;
- (void)setEnumeratingAllNetworkInterfacesEnabled:(_Bool)arg1;
- (_Bool)enumeratingAllNetworkInterfacesEnabled;
- (void)setMockCaptureDevicesPromptEnabled:(_Bool)arg1;
- (_Bool)mockCaptureDevicesPromptEnabled;
- (void)setMockCaptureDevicesEnabled:(_Bool)arg1;
- (_Bool)mockCaptureDevicesEnabled;
@property(nonatomic) _Bool allowsInlineMediaPlaybackAfterFullscreen;
@property(nonatomic) _Bool attachmentElementEnabled;
@property(nonatomic) _Bool mediaDataLoadsAutomatically;
@property(nonatomic) _Bool javaScriptMarkupEnabled;
- (_Bool)httpEquivEnabled;
- (void)setHTTPEquivEnabled:(_Bool)arg1;
- (_Bool)metaRefreshEnabled;
- (void)setMetaRefreshEnabled:(_Bool)arg1;
- (void)setMediaPreloadingEnabled:(_Bool)arg1;
- (_Bool)mediaPreloadingEnabled;
@property(nonatomic) _Bool linkPreloadEnabled;
- (void)setWebRTCLegacyAPIEnabled:(_Bool)arg1;
- (_Bool)webRTCLegacyAPIEnabled;
- (void)setPeerConnectionEnabled:(_Bool)arg1;
- (_Bool)peerConnectionEnabled;
- (void)setMediaStreamEnabled:(_Bool)arg1;
- (_Bool)mediaStreamEnabled;
- (void)setMediaDevicesEnabled:(_Bool)arg1;
- (_Bool)mediaDevicesEnabled;
- (void)setMediaKeysStorageDirectory:(id)arg1;
- (id)mediaKeysStorageDirectory;
- (void)setShouldConvertPositionStyleOnCopy:(_Bool)arg1;
- (_Bool)shouldConvertPositionStyleOnCopy;
- (void)setGamepadsEnabled:(_Bool)arg1;
- (_Bool)gamepadsEnabled;
- (void)setServiceControlsEnabled:(_Bool)arg1;
- (_Bool)serviceControlsEnabled;
- (void)setImageControlsEnabled:(_Bool)arg1;
- (_Bool)imageControlsEnabled;
- (void)setMediaSourceEnabled:(_Bool)arg1;
- (_Bool)mediaSourceEnabled;
- (void)setUseLegacyTextAlignPositionedElementBehavior:(_Bool)arg1;
- (_Bool)useLegacyTextAlignPositionedElementBehavior;
- (void)setLowPowerVideoAudioBufferSizeEnabled:(_Bool)arg1;
- (_Bool)lowPowerVideoAudioBufferSizeEnabled;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(_Bool)arg1;
- (_Bool)hiddenPageCSSAnimationSuspensionEnabled;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(_Bool)arg1;
- (_Bool)hiddenPageDOMTimerThrottlingEnabled;
- (void)setPlugInSnapshottingEnabled:(_Bool)arg1;
- (_Bool)plugInSnapshottingEnabled;
- (int)storageBlockingPolicy;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setDiagnosticLoggingEnabled:(_Bool)arg1;
- (_Bool)diagnosticLoggingEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setRequestAnimationFrameEnabled:(_Bool)arg1;
- (_Bool)requestAnimationFrameEnabled;
- (_Bool)shouldRespectImageOrientation;
- (void)setShouldRespectImageOrientation:(_Bool)arg1;
- (_Bool)notificationsEnabled;
- (void)setNotificationsEnabled:(_Bool)arg1;
- (_Bool)shouldDisplayTextDescriptions;
- (void)setShouldDisplayTextDescriptions:(_Bool)arg1;
- (_Bool)shouldDisplayCaptions;
- (void)setShouldDisplayCaptions:(_Bool)arg1;
- (_Bool)shouldDisplaySubtitles;
- (void)setShouldDisplaySubtitles:(_Bool)arg1;
- (_Bool)wantsBalancedSetDefersLoadingBehavior;
- (void)setWantsBalancedSetDefersLoadingBehavior:(_Bool)arg1;
- (_Bool)backspaceKeyNavigationEnabled;
- (void)setBackspaceKeyNavigationEnabled:(_Bool)arg1;
- (void)_synchronizeWebStoragePolicyWithCookiePolicy;
- (void)_invalidateCachedPreferences;
- (void)setPageCacheSupportsPlugins:(_Bool)arg1;
- (_Bool)pageCacheSupportsPlugins;
- (void)setPictographFontFamily:(id)arg1;
- (id)pictographFontFamily;
- (void)setMockScrollbarsEnabled:(_Bool)arg1;
- (_Bool)mockScrollbarsEnabled;
- (void)setAllowsPictureInPictureMediaPlayback:(_Bool)arg1;
- (_Bool)allowsPictureInPictureMediaPlayback;
- (void)setAllowsAlternateFullscreen:(_Bool)arg1;
- (_Bool)allowsAlternateFullscreen;
- (void)setMediaControlsScaleWithPageZoom:(_Bool)arg1;
- (_Bool)mediaControlsScaleWithPageZoom;
- (void)setInvisibleAutoplayNotPermitted:(_Bool)arg1;
- (_Bool)invisibleAutoplayNotPermitted;
- (void)setInlineMediaPlaybackRequiresPlaysInlineAttribute:(_Bool)arg1;
- (_Bool)inlineMediaPlaybackRequiresPlaysInlineAttribute;
- (void)setMediaPlaybackAllowsInline:(_Bool)arg1;
- (_Bool)mediaPlaybackAllowsInline;
- (void)setOverrideUserGestureRequirementForMainContent:(_Bool)arg1;
- (_Bool)overrideUserGestureRequirementForMainContent;
- (void)setAudioPlaybackRequiresUserGesture:(_Bool)arg1;
- (_Bool)audioPlaybackRequiresUserGesture;
- (void)setVideoPlaybackRequiresUserGesture:(_Bool)arg1;
- (_Bool)videoPlaybackRequiresUserGesture;
- (void)setMediaPlaybackRequiresUserGesture:(_Bool)arg1;
- (_Bool)mediaPlaybackRequiresUserGesture;
- (void)setNetworkInterfaceName:(id)arg1;
- (id)networkInterfaceName;
- (void)setNetworkDataUsageTrackingEnabled:(_Bool)arg1;
- (_Bool)networkDataUsageTrackingEnabled;
- (void)setAVKitEnabled:(_Bool)arg1;
- (_Bool)avKitEnabled;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (unsigned int)audioSessionCategoryOverride;
- (void)setMediaPlaybackAllowsAirPlay:(_Bool)arg1;
- (_Bool)mediaPlaybackAllowsAirPlay;
- (void)setEnableInheritURIQueryComponent:(_Bool)arg1;
- (_Bool)isInheritURIQueryComponentEnabled;
- (_Bool)isHixie76WebSocketProtocolEnabled;
- (void)setHixie76WebSocketProtocolEnabled:(_Bool)arg1;
- (_Bool)isVideoPluginProxyEnabled;
- (void)setVideoPluginProxyEnabled:(_Bool)arg1;
- (_Bool)isQTKitEnabled;
- (void)setQTKitEnabled:(_Bool)arg1;
- (_Bool)isAVFoundationNSURLSessionEnabled;
- (void)setAVFoundationNSURLSessionEnabled:(_Bool)arg1;
- (_Bool)isAVFoundationEnabled;
- (void)setAVFoundationEnabled:(_Bool)arg1;
- (_Bool)loadsSiteIconsIgnoringImageLoadingPreference;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(_Bool)arg1;
- (_Bool)asynchronousSpellCheckingEnabled;
- (void)setAsynchronousSpellCheckingEnabled:(_Bool)arg1;
- (_Bool)fullScreenEnabled;
- (void)setFullScreenEnabled:(_Bool)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)willAddToWebView;
- (void)didRemoveFromWebView;
- (void)setUsePreHTML5ParserQuirks:(_Bool)arg1;
- (_Bool)usePreHTML5ParserQuirks;
- (void)setHyperlinkAuditingEnabled:(_Bool)arg1;
- (_Bool)hyperlinkAuditingEnabled;
- (void)setPaginateDuringLayoutEnabled:(_Bool)arg1;
- (_Bool)paginateDuringLayoutEnabled;
- (void)setSpatialNavigationEnabled:(_Bool)arg1;
- (_Bool)isSpatialNavigationEnabled;
- (void)setAsyncFrameScrollingEnabled:(_Bool)arg1;
- (_Bool)asyncFrameScrollingEnabled;
- (void)setFrameFlattening:(int)arg1;
- (int)frameFlattening;
- (void)setFrameFlatteningEnabled:(_Bool)arg1;
- (_Bool)isFrameFlatteningEnabled;
- (void)setDiskImageCacheEnabled:(_Bool)arg1;
- (void)setAccelerated2dCanvasEnabled:(_Bool)arg1;
- (_Bool)accelerated2dCanvasEnabled;
- (void)setWebGPUEnabled:(_Bool)arg1;
- (_Bool)webGPUEnabled;
- (void)setForceWebGLUsesLowPower:(_Bool)arg1;
- (_Bool)forceLowPowerGPUForWebGL;
- (void)setForceSoftwareWebGLRendering:(_Bool)arg1;
- (_Bool)forceSoftwareWebGLRendering;
- (void)setWebGL2Enabled:(_Bool)arg1;
- (_Bool)webGL2Enabled;
- (void)setWebGLEnabled:(_Bool)arg1;
- (_Bool)webGLEnabled;
- (void)setSubpixelCSSOMElementMetricsEnabled:(_Bool)arg1;
- (_Bool)subpixelCSSOMElementMetricsEnabled;
- (void)setWebAudioEnabled:(_Bool)arg1;
- (_Bool)webAudioEnabled;
- (void)setShowRepaintCounter:(_Bool)arg1;
- (_Bool)showRepaintCounter;
- (void)setSimpleLineLayoutDebugBordersEnabled:(_Bool)arg1;
- (_Bool)simpleLineLayoutDebugBordersEnabled;
- (void)setSimpleLineLayoutEnabled:(_Bool)arg1;
- (_Bool)simpleLineLayoutEnabled;
- (void)setSubpixelAntialiasedLayerTextEnabled:(_Bool)arg1;
- (_Bool)subpixelAntialiasedLayerTextEnabled;
- (void)setShowDebugBorders:(_Bool)arg1;
- (_Bool)showDebugBorders;
- (void)setAcceleratedCompositingEnabled:(_Bool)arg1;
- (_Bool)acceleratedCompositingEnabled;
- (void)setCanvasUsesAcceleratedDrawing:(_Bool)arg1;
- (_Bool)canvasUsesAcceleratedDrawing;
@property(nonatomic) _Bool animatedImageAsyncDecodingEnabled;
@property(nonatomic) _Bool largeImageAsyncDecodingEnabled;
- (void)setResourceLoadStatisticsEnabled:(_Bool)arg1;
- (_Bool)resourceLoadStatisticsEnabled;
- (void)setDisplayListDrawingEnabled:(_Bool)arg1;
- (_Bool)displayListDrawingEnabled;
- (void)setAcceleratedDrawingEnabled:(_Bool)arg1;
- (_Bool)acceleratedDrawingEnabled;
- (void)_setForceFTPDirectoryListings:(_Bool)arg1;
- (_Bool)_forceFTPDirectoryListings;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (id)_ftpDirectoryTemplatePath;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (id)_localStorageDatabasePath;
- (void)setDOMPasteAllowed:(_Bool)arg1;
- (_Bool)isDOMPasteAllowed;
- (void)_postPreferencesChangedAPINotification;
- (void)_postPreferencesChangedNotification;
- (void)setExperimentalNotificationsEnabled:(_Bool)arg1;
- (_Bool)experimentalNotificationsEnabled;
- (void)setLocalStorageEnabled:(_Bool)arg1;
- (_Bool)localStorageEnabled;
- (void)setStorageTrackerEnabled:(_Bool)arg1;
- (_Bool)storageTrackerEnabled;
- (void)setDatabasesEnabled:(_Bool)arg1;
- (_Bool)databasesEnabled;
- (void)_setUseSiteSpecificSpoofing:(_Bool)arg1;
- (_Bool)_useSiteSpecificSpoofing;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (int)textDirectionSubmenuInclusionBehavior;
- (void)setEditableLinkBehavior:(int)arg1;
- (int)editableLinkBehavior;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (long long)applicationCacheDefaultOriginQuota;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (long long)applicationCacheTotalQuota;
- (float)_passwordEchoDuration;
- (_Bool)_allowPasswordEcho;
- (int)_interpolationQuality;
- (void)_setInterpolationQuality:(int)arg1;
- (_Bool)_alwaysUseAcceleratedOverflowScroll;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(_Bool)arg1;
- (_Bool)_alwaysRequestGeolocationPermission;
- (void)_setAlwaysRequestGeolocationPermission:(_Bool)arg1;
- (_Bool)_allowMultiElementImplicitFormSubmission;
- (void)_setAllowMultiElementImplicitFormSubmission:(_Bool)arg1;
- (float)_maxParseDuration;
- (void)_setMaxParseDuration:(float)arg1;
- (int)_layoutInterval;
- (void)_setLayoutInterval:(int)arg1;
- (_Bool)_textAutosizingEnabled;
- (void)_setTextAutosizingEnabled:(_Bool)arg1;
- (float)_minimumZoomFontSize;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (_Bool)_telephoneNumberParsingEnabled;
- (void)_setTelephoneNumberParsingEnabled:(_Bool)arg1;
- (void)_setStandalone:(_Bool)arg1;
- (_Bool)_standalone;
- (double)_backForwardCacheExpirationInterval;
- (void)setNeedsStorageAccessFromFileURLsQuirk:(_Bool)arg1;
- (_Bool)needsStorageAccessFromFileURLsQuirk;
- (void)setAllowFileAccessFromFileURLs:(_Bool)arg1;
- (_Bool)allowFileAccessFromFileURLs;
- (void)setAllowUniversalAccessFromFileURLs:(_Bool)arg1;
- (_Bool)allowUniversalAccessFromFileURLs;
- (void)setWebSecurityEnabled:(_Bool)arg1;
- (_Bool)isWebSecurityEnabled;
- (void)setUsesEncodingDetector:(_Bool)arg1;
- (_Bool)usesEncodingDetector;
- (void)setAutomaticallyDetectsCacheModel:(_Bool)arg1;
- (_Bool)automaticallyDetectsCacheModel;
- (void)setShrinksStandaloneImagesToFit:(_Bool)arg1;
- (_Bool)shrinksStandaloneImagesToFit;
- (void)setXSSAuditorEnabled:(_Bool)arg1;
- (_Bool)isXSSAuditorEnabled;
- (void)setJavaScriptCanAccessClipboard:(_Bool)arg1;
- (_Bool)javaScriptCanAccessClipboard;
- (void)setZoomsTextOnly:(_Bool)arg1;
- (_Bool)zoomsTextOnly;
- (void)setOfflineWebApplicationCacheEnabled:(_Bool)arg1;
- (_Bool)offlineWebApplicationCacheEnabled;
- (void)setLocalFileContentSniffingEnabled:(_Bool)arg1;
- (_Bool)localFileContentSniffingEnabled;
- (void)setWebArchiveDebugModeEnabled:(_Bool)arg1;
- (_Bool)webArchiveDebugModeEnabled;
- (void)setDOMTimersThrottlingEnabled:(_Bool)arg1;
- (_Bool)domTimersThrottlingEnabled;
- (void)setApplicationChromeModeEnabled:(_Bool)arg1;
- (_Bool)applicationChromeModeEnabled;
- (void)setAuthorAndUserStylesEnabled:(_Bool)arg1;
- (_Bool)authorAndUserStylesEnabled;
- (void)setDeveloperExtrasEnabled:(_Bool)arg1;
- (void)setJavaScriptRuntimeFlags:(int)arg1;
- (int)javaScriptRuntimeFlags;
- (_Bool)developerExtrasEnabled;
- (void)setDNSPrefetchingEnabled:(_Bool)arg1;
- (_Bool)isDNSPrefetchingEnabled;

@end

