//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (AXPrivCategory)
+ (long long)_accessibilityUnitTestingOrientation;
+ (_Bool)_accessibilityHasUnitTestingOrientation;
+ (void)_accessibilityUnsetUnitTestingOrientation;
+ (void)_accessibilitySetUnitTestingOrientation:(long long)arg1;
+ (id)_accessibilityTextChecker;
+ (void)_accessibilityClearProcessedClasses:(id)arg1;
+ (void)_accessibilityUndoAttributedDecisionCaching:(id)arg1;
- (void)accessibilitySetUserDefinedOpaqueElementScrollsContentIntoView:(id)arg1;
- (id)accessibilityUserDefinedOpaqueElementScrollsContentIntoView;
- (id)accessibilityUserDefinedSize;
- (id)accessibilityUserDefinedNotFirstElement;
- (id)accessibilityUserDefinedServesAsFirstElement;
- (id)accessibilityUserDefinedIsMainWindow;
- (id)accessibilityUserDefinedWindowVisible;
- (id)isAccessibilityUserDefinedScrollAncestor;
- (_Bool)_accessibilityUseContextlessPassthroughForDrag;
- (id)_accessibilityAddToDragSessionCustomAction;
- (id)_accessibilityDropPointDescriptorDictionaryRepresentations;
- (id)_accessibilityAllDropPointDescriptors;
- (id)_accessibilityDragSourceDescriptorDictionaryRepresentations;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityFilterInteractionLocationDescriptorsForVisible:(id)arg1;
- (_Bool)_accessibilityRealtimeHasUnread;
- (_Bool)_accessibilityRealtimeCompleted;
- (_Bool)accessibilityIsAttachmentElement;
- (id)_accessibilityCustomActionGroupIdentifier;
- (_Bool)_accessibilityIsDraggableElementAttribute;
- (_Bool)_accessibilityHasDragDestinations;
- (_Bool)_accessibilityHasDragSources;
- (_Bool)_accessibilityScannerShouldUseActivateInPointMode;
- (_Bool)_accessibilityShouldPerformIncrementOrDecrement;
- (void)_accessibilityPostPasteboardTextForOperation:(id)arg1;
- (void)_accessibilityIgnoreNextPostPasteboardTextOperation:(id)arg1;
- (void)_accessibilityPostAnnouncement:(id)arg1;
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)_accessibilityHandleATFocused:(_Bool)arg1 assistiveTech:(id)arg2;
- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;
- (void)_accessibilityAnnouncementComplete:(id)arg1;
- (id)_accessibilityRecentlyActivatedApplicationBundleIdentifiers;
- (void)_accessibilityRemoveRecentlyActivatedBundleIdFromSwitcher:(id)arg1;
- (void)_accessibilityAddRecentlyActivatedBundleIdFromSwitcher:(id)arg1;
- (_Bool)_accessibilityApplicationIsRTL;
- (_Bool)_accessibilityIsRTL;
- (id)_accessibilitySupportedLanguages;
- (_Bool)accessibilityRequired;
- (long long)_accessibilityMapFeatureType;
- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint)arg1 forAngle:(float)arg2;
- (float)_accessibilityDistance:(struct CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3;
- (id)_accessibilityUpcomingRoadsForPoint:(struct CGPoint)arg1 forAngle:(float)arg2;
- (id)_accessibilityMapDetailedInfoAtPoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityRoadContainsTrackingPoint:(struct CGPoint)arg1;
- (id)_axDebugTraits;
- (id)_axSuperviews;
- (id)_accessibilityApplicationSemanticContext;
- (id)_accessibilitySemanticContextForElement:(id)arg1;
- (id)_accessibilitySemanticContext;
- (_Bool)_accessibilitySupportsSemanticContext;
- (id)_accessibilityString:(id)arg1 withSpeechHint:(id)arg2;
- (_Bool)_accessibilityLanguageOverriddesUser;
- (id)accessibilitySpeechHint;
- (id)_accessibilityWebAreaURL;
- (id)accessibilityURL;
- (id)accessibilityDatetimeValue;
- (id)_accessibilityUserTestingActionIdentifiers;
- (_Bool)_accessibilityPerformUserTestingAction:(id)arg1;
- (id)_accessibilityUserTestingActions;
- (id)_accessibilityUserTestingVisibleAncestor;
- (_Bool)_accessibilityHitTestsStatusBar;
- (long long)_accessibilityVerticalSizeClass;
- (long long)_accessibilityHorizontalSizeClass;
- (id)_accessibilityAutomaticIdentifier;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (long long)_accessibilityPickerType;
- (struct CGRect)_accessibilityGesturePracticeRegion;
- (id)_accessibilityDateTimePickerValues;
- (_Bool)_accessibilityWebViewIsLoading;
- (id)_accessibilityActiveURL;
- (_Bool)_accessibilityWebSearchResultsActive;
- (_Bool)accessibilityIsComboBox;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (_Bool)_accessibilityIsRealtimeElement;
- (id)accessibilityExpandedTextValue;
- (id)accessibilitySortDirection;
- (id)accessibilityInvalidStatus;
- (_Bool)_accessibilityBackingElementIsValid;
- (long long)_accessibilityIndexForPickerString:(id)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (id)_accessibilityUserTestingVisibleSections;
- (id)_accessibilityUserTestingVisibleCells;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (_Bool)_accessibilityDismissAlternativeKeyPicker;
- (_Bool)_accessibilityDispatchKeyboardAction:(id)arg1;
- (_Bool)_accessibilityHandwritingActivateKeyboardDeleteKey;
- (_Bool)_accessibilityHandwritingActivateKeyboardReturnKey;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (id)_accessibilityHandwritingAttributeLanguage;
- (_Bool)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (_Bool)_accessibilityHandwritingAttributeAcceptsRawInput;
- (_Bool)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (_Bool)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (_Bool)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSetsForKeyboardType:(long long)arg1;
- (int)_accessibilityHandwritingAttributePreferredCharacterSet;
- (int)_accessibilityHandwritingAttributePreferredCharacterSetForKeyboardType:(long long)arg1;
- (id)_accessibilityHandwritingAttributes;
- (_Bool)_accessibilitySupportsHandwriting;
- (id)_accessibilityHandwritingAncestor;
- (id)accessibilityNextTextNavigationElement;
- (id)accessibilityPreviousTextNavigationElement;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString *)arg1;
- (void)_accessibilityPostValueChangedNotificationWithInsertedText:(id)arg1;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString *)arg1 insertedText:(id)arg2;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;
- (void)_accessibilitySetNavigationControllerInset:(struct UIEdgeInsets)arg1;
- (void)_accessibilityConvertStyleAttributesToAccessibility:(id)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (_Bool)_accessibilityTextViewShouldBreakUpParagraphs;
- (void)_accessibilitySetTextViewShouldBreakUpParagraphs:(_Bool)arg1;
- (id)_accessibilityTextChecker;
- (_Bool)_accessibilitySupportsRangeForLineNumber;
- (_Bool)_accessibilitySupportsFrameForRange;
- (id)_accessibilityValueForRange:(struct _NSRange *)arg1;
- (_Bool)__accessibilityReadAllOnFocus;
- (_Bool)_accessibilityReadAllOnFocus;
- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;
- (id)_accessibilityMarkersForRange:(struct _NSRange)arg1;
- (id)_accessibilityMarkersForPoints:(id)arg1;
- (id)accessibilityLabelForRange:(struct _NSRange *)arg1;
- (struct CGRect)_accessibilityTextCursorFrame;
- (void)_setAccessibilityPhotoDescription:(id)arg1;
- (id)_accessibilityPhotoDescription;
- (_Bool)_accessibilityKeyboardSupportsGestureMode;
- (_Bool)_accessibilityBookShowsDualPages;
- (_Bool)_accessibilityKeyboardKeyAllowsTouchTyping;
- (_Bool)_accessibilityShouldAnnounceFontInfo;
- (id)_accessibilityPageContent;
- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;
- (_Bool)_accessibilityIncludeDuringContentReading;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint)arg1;
- (id)accessibilityPageContent;
- (struct CGPoint)_accessibilityVisibleScrollArea:(_Bool)arg1;
- (_Bool)_accessibilityReadAllContinuesWithScroll;
- (id)_accessibilityDOMAttributes;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (id)_accessibilityTextMarkerForPosition:(long long)arg1;
- (struct _NSRange)_accessibilitySelectedNSRangeForObject;
- (id)_accessibilityTextMarkerRangeForSelection;
- (struct _NSRange)_accessibilityRangeForTextMarker:(id)arg1;
- (id)_accessibilityFilenameForAttachmentCID:(id)arg1;
- (id)_accessibilityPageTextMarkerRange;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibiltyAvailableKeyplanes;
- (id)_accessibilityElementStoredUserLabel;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityMarkerForPoint:(struct CGPoint)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (long long)_accessibilityLineStartPosition;
- (long long)_accessibilityLineEndPosition;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (_Bool)_accessibilityTriggerDictationFromPath:(id)arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (struct _NSRange)_accessibilityRangeForLineNumber:(long long)arg1;
- (struct CGRect)_accessibilityFrameForRange:(struct _NSRange)arg1;
- (struct CGRect)accessibilityFrameForLineNumber:(long long)arg1;
- (id)accessibilityContentForLineNumber:(long long)arg1;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (struct CGRect)accessibilityBoundsForTextMarkers:(id)arg1;
- (void)_accessibilityDetectAnimationsNonActive;
- (void)_accessibilitySetAnimationsInProgress:(_Bool)arg1;
- (_Bool)_accessibilityAnimationsInProgress;
- (void)_accessibilityUnregister;
- (void)_cleanupRotorCache;
- (void)_accessibilityCleanupContainerElementReferences;
- (void)__accessibilityUnregister:(void *)arg1 shouldRelease:(_Bool)arg2;
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;
- (_Bool)accessibilityElementIsFocused;
- (_Bool)_accessibilityShouldReleaseAfterUnregistration;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (id)_accessibilityLoadAccessibilityInformationSupplementaryItems;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityPlayKeyboardClickSound;
- (void)_accessibilityPlaySystemSound:(int)arg1;
- (void)_accessibilitySetIsTourGuideRunning:(_Bool)arg1;
- (_Bool)_accessibilityIsTourGuideRunning;
- (void)_accessibilitySetCameraIrisOpen:(_Bool)arg1;
- (_Bool)_accessibilityCameraIrisOpen;
- (_Bool)_accessibilityBasePerformOrbGesture:(long long)arg1;
- (_Bool)_accessibilityPerformOrbGesture:(long long)arg1;
- (_Bool)_accessibilityHasTextOperations;
- (id)_accessibilityTextOperations;
- (void)_accessibilityCut;
- (void)_accessibilityReplace;
- (void)_accessibilityDelete;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (void)_accessibilityPaste;
- (_Bool)_accessibilityPerformEscape;
- (id)_accessibilityCustomRotorResultHelper:(id)arg1 array:(id)arg2;
- (_Bool)_accessibilityTextOperationAction:(id)arg1;
- (void)accessibilityDecreaseTrackingDetail;
- (void)accessibilityIncreaseTrackingDetail;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityPerformCustomActionWithIdentifier:(id)arg1;
- (_Bool)accessibilityPerformCustomAction:(long long)arg1;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (_Bool)accessibilityEditOperationAction:(id)arg1;
- (id)accessibilityMenuActions;
- (void)_accessibilitySetApplicationOrientation:(int)arg1;
- (int)_accessibilityApplicationOrientation;
- (_Bool)_accessibilityIsFrameOutOfBoundsConsideringScrollParents:(_Bool)arg1;
- (struct CGRect)_axFrameForBoundsCheck:(_Bool)arg1;
- (id)_axOutermostScrollParent;
- (struct CGRect)_axScreenBoundsForBoundsCheck;
- (_Bool)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
- (_Bool)_accessibilityIsFrameOutOfBounds;
- (_Bool)_accessibilityOverridesInvalidFrames;
- (id)_accessibilitySortPriorityContainer;
- (_Bool)_accessibilityIsSortPriorityContainer;
- (void)_accessibilitySetIsSortPriorityContainer:(_Bool)arg1;
- (long long)_accessibilitySortPriority;
- (void)_accessibilitySetSortPriority:(long long)arg1;
- (struct CGRect)_accessibilityCompareFrameForScrollParent:(id)arg1 frame:(struct CGRect)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4;
- (id)_accessibilityScrollParentForComparingByXAxis;
- (_Bool)_accessibilityOnlyComparesByXAxis;
- (struct CGRect)_accessibilityContentFrame;
- (void)_accessibilitySetVisibleContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_accessibilityVisibleContentInset;
- (struct CGAffineTransform)_accessibilityJailTransform;
- (id)_accessibilityCirclePathBasedOnBoundsWidth;
- (id)_accessibilityDisplayPathForScreenPath:(id)arg1;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (struct CGPoint)_accessibilityDisplayPointForSceneReferencePoint:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityDisplayRectForSceneReferenceRect:(struct CGRect)arg1;
- (id)_accessibilityConvertSystemBoundedPathToContextSpace:(id)arg1;
- (struct CGPoint)_accessibilityConvertSystemBoundedScreenPointToContextSpace:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(struct CGRect)arg1;
- (struct CGRect)_accessibilityVisibleFrame;
- (long long)accessibilityCompareGeometry:(id)arg1;
- (struct CGRect)_accessibilityFrameForSorting;
- (struct CGRect)_accessibilityChildrenUnionContentFrame;
- (_Bool)_accessibilityUsesChildrenFramesForSorting;
- (struct CGRect)_handleRotatingFrame:(struct CGRect)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (long long)_accessibilitySortPriorityWithReturningView:(id *)arg1;
- (_Bool)_accessibilityOverridesInvisibility;
- (void)_accessibilitySetOverridesInvisibility:(_Bool)arg1;
- (double)_accessibilityAllowedGeometryOverlapX;
- (double)_accessibilityAllowedGeometryOverlap;
- (void)_accessibilitySetAllowedGeometryOverlap:(double)arg1;
- (void)setAccessibilitySize:(struct CGSize)arg1;
- (id)_accessibilityScannerElementsGrouped:(_Bool)arg1 shouldIncludeNonScannerElements:(_Bool)arg2;
- (id)_accessibilityOrderedChildrenContainer;
- (_Bool)_accessibilityShouldScrollRemoteParent;
- (id)_accessibilityRemoteParent;
- (id)_accessibilityVisibleElements;
- (id)_accessibilityAuditIssuesWithOptions:(id)arg1;
- (void)_accessibilitySetAuditIssueForType:(unsigned long long)arg1;
- (id)_accessibilityControlDescendantWithAction:(SEL)arg1;
- (id)_accessibilityControlDescendantWithTarget:(id)arg1;
- (id)_accessibilityFindUnsortedDescendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindUnsortedSubviewDescendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindSubviewDescendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindSubviewDescendant:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindDescendant:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindAncestor:(CDUnknownBlockType)arg1 startWithSelf:(_Bool)arg2;
- (void)accessibilityEnumerateAncestorsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_accessibilityFindAXDescendants:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;
- (id)_accessibilityFindAnyAXDescendant:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;
- (id)_accessibilityAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityViewAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityFindViewAncestor:(CDUnknownBlockType)arg1 startWithSelf:(_Bool)arg2;
- (_Bool)_accessibilityIsDescendantOfElement:(id)arg1;
- (_Bool)_accessibilityIsViewDescendantOfElement:(id)arg1;
- (id)accessibilityViewWithIdentifier:(id)arg1;
- (id)_accessibilityUnignoredDescendant;
- (_Bool)_accessibilityHasDescendantOfType:(Class)arg1;
- (id)_accessibilityDescendantOfType:(Class)arg1;
- (id)_accessibilityVisibleOpaqueElements;
- (id)_accessibilitySearchSubtreesAfterChildElement:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 allowOutOfBoundsChild:(_Bool)arg4 range:(struct _NSRange)arg5;
- (id)_accessibilityFocusAbsoluteLastOpaqueElementForTechnology:(id)arg1;
- (id)_accessibilityFocusAbsoluteFirstOpaqueElementForTechnology:(id)arg1;
- (_Bool)_accessibilityOpaqueScrollViewSupportsLastResortScrollBeyondBounds;
- (id)_accessibilitySortedElementsWithin;
- (void)_accessibilityOpaqueElementScrollToDirection:(long long)arg1;
- (id)_accessibilityFindElementInDirection:(long long)arg1 searchType:(long long)arg2 allowOutOfBoundsChild:(_Bool)arg3;
- (void)_accessibilityOpaqueElementScrollCleanup;
- (double)_accessibilityLeftOpaqueScrollViewContentOffsetLimit;
- (double)_accessibilityRightOpaqueScrollViewContentOffsetLimit;
- (struct CGPoint)_accessibilityOffsetForOpaqueElementDirection:(long long)arg1;
- (void)_accessibilityScrollOpaqueElementIntoView:(long long)arg1 previousScroller:(id)arg2;
- (_Bool)_accessibilityOpaqueElementScrollsContentIntoView;
- (void)_accessibilitySetOpaqueElementScrollsContentIntoView:(_Bool)arg1;
- (id)_accessibilityMoveFocusToNextOpaqueElementForTechnology:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 range:(struct _NSRange)arg4;
- (id)_accessibilityOpaqueHeaderElementInDirection:(long long)arg1 childElement:(id)arg2;
- (id)_accessibilityLastOpaqueElement;
- (id)_accessibilityFirstOpaqueElementForFocus;
- (id)_accessibilityFirstOpaqueElement;
- (id)_accessibilityOpaqueElementParent;
- (_Bool)isAccessibilityOpaqueElementProvider;
- (void)_accessibilitySetWantsOpaqueElementProviders:(_Bool)arg1;
- (_Bool)_accessibilityWantsOpaqueElementProviders;
- (void)setIsAccessibilityOpaqueElementProvider:(_Bool)arg1;
- (_Bool)_accessibilityDidSetOpaqueElementProvider;
- (void)_accessibilitySetScrollAcrossPageBoundaries:(_Bool)arg1;
- (_Bool)_accessibilityScrollAcrossPageBoundaries;
- (_Bool)_accessibilityRetainsCustomRotorActionSetting;
- (id)_accessibilityElementsForSearchParameter:(id)arg1;
- (id)accessibilityTitleElement;
- (id)_accessibilityHeaderElement;
- (_Bool)_accessibilityDescendantElementAtIndexPathIsValid:(id)arg1;
- (_Bool)_accessibilityShouldAvoidScrollingCollectionViewCells;
- (_Bool)_accessibilitySortCollectionViewLogically;
- (long long)_accessibilityInterfaceOrientationForScreenCoordinates;
- (_Bool)_accessibilityIsUsingRemoteParentActivateAction;
- (id)_accessibilityElementCommunityIdentifier;
- (_Bool)_accessibilityIsIsolatedWindow;
- (_Bool)_accessibilityIsAccessibilityUIServer;
- (_Bool)_accessibilityIsInternationalKeyboardKey;
- (_Bool)_accessibilityAllowsAlternativeCharacterActivation;
- (id)_accessibilityInputIdentifierForKeyboard;
- (id)_accessibilityRetrieveImagePathLabel:(id)arg1;
- (id)_accessibilityStatusBar;
- (unsigned int)_accessibilityDisplayId;
- (id)_accessibilityApplicationWindowContextIDs;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityParentView;
- (id)_accessibilityWindow;
- (_Bool)_accessibilityUsesSpecialKeyboardDismiss;
- (id)_accessibilityRemoteApplication;
- (void)_accessibilityRegisterForDictationLifecycleNotifications;
- (id)_accessibilityApplication;
- (void)_setAccessibilityTableCellUsesDetailTextAsValue:(_Bool)arg1;
- (_Bool)_accessibilityTableCellUsesDetailTextAsValue;
- (void)_accessibilitySetObscuredScreenAllowedWindows:(id)arg1;
- (id)_accessibilityObscuredScreenAllowedWindows;
- (_Bool)_accessibilityAlternateActionForURL:(id)arg1;
- (id)_accessibilityHitTestingObscuredScreenAllowedViews;
- (id)_accessibilityObscuredScreenAllowedViews;
- (_Bool)_accessibilityIsAlertContainer;
- (void)_accessibilityChangeToKeyplane:(id)arg1;
- (id)_accessibilityKeyboardKeyForString:(id)arg1;
- (id)_accessibilityTableViewCellWithRowIndex:(long long)arg1 column:(long long)arg2 tableView:(id)arg3;
- (_Bool)_accessibilityRespectsTableScrollEnabledFlag;
- (_Bool)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (_Bool)_accessibilityHasVariantKeys;
- (id)_accessibilityVariantKeys;
- (_Bool)_accessibilityDidDeleteTableViewCell;
- (_Bool)_accessibilityCanDeleteTableViewCell;
- (_Bool)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;
- (_Bool)_accessibilityCanDismissPopoverController:(id)arg1;
- (_Bool)_accessibilityIsAwayAlertElementNew;
- (id)_accessibilityAwayAlertElements;
- (_Bool)_accessibilityIsAwayAlertElement;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (void)_accessibilityJumpToTableIndex:(id)arg1;
- (_Bool)_accessibilityLoadURL:(id)arg1;
- (void)_accessibilityFindSearchResult:(_Bool)arg1 withString:(id)arg2;
- (_Bool)_accessibilityIsInTableCell;
- (_Bool)_accessibilityIsTableCell;
- (id)_accessibilityResponderElement;
- (_Bool)_accessibilityServesAsFirstResponder;
- (id)_accessibilityCollectionViewCellContentSubviews;
- (id)_accessibilityTableViewCellContentSubviews;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (_Bool)_accessibilityIsFirstElementForFocus;
- (struct _NSRange)accessibilityColumnRange;
- (unsigned long long)_accessibilityRowCount;
- (_Bool)_accessibilityShouldIncludeRowRangeInElementDescription;
- (struct _NSRange)_accessibilityRowRange;
- (struct _NSRange)_accessibilityColumnRange;
- (unsigned long long)_accessibilityColumnCount;
- (void)_accessibilitySetRowRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRowRange;
- (id)_accessibilityParentTableView;
- (struct _NSRange)_accessibilityIndexPathAsRange;
- (id)_accessibilityIndexPath;
- (id)accessibilityDataTableCellElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)accessibilityElementForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2;
- (void)_accessibilitySetContextDescriptors:(id)arg1;
- (id)_accessibilityContextDescriptors;
- (id)_accessibilityAllContextDescriptors;
- (_Bool)_accessibilityCanBeFirstResponder;
- (_Bool)_accessibilityCanBeFirstResponderWhenNotAnElement;
- (_Bool)_accessibilityShouldSuppressCustomActionsHint;
- (_Bool)_accessibilityIsRemoteElement;
- (id)_accessibilityPreferredScrollActions;
- (id)_accessibilityTraitsInspectorHumanReadable;
- (id)_accessibilityTraitsAsHumanReadableStrings:(unsigned long long)arg1;
- (unsigned long long)_accessibilityInheritedTraits;
- (_Bool)_accessibilityShouldInheritTraits;
- (id)_accessibilityRetrieveLocalizedStringTableName;
- (id)_accessibilityRetrieveLocalizationBundlePath;
- (id)_accessibilityRetrieveLocalizationBundleID;
- (id)_accessibilityRetrieveLocalizedStringKey;
- (id)_getAccessibilityAttributedString;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(long long)arg2;
- (id)accessibilityAttributeValue:(long long)arg1;
- (long long)_accessibilityReinterpretVoiceOverCommand:(long long)arg1;
- (struct CGRect)accessibilityElementRect;
- (struct CGRect)_accessibilityFocusableFrameForZoom;
- (id)__accessibilityRetrieveFrameOrPathDelegate;
- (id)accessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (id)_accessibilityAXAttributedHint;
- (id)_accessibilityAXAttributedValue;
- (id)_accessibilityAXAttributedLabel;
- (id)_accessibilityPotentiallyAttributedValueForNonAttributedSelector:(SEL)arg1 attributedSelector:(SEL)arg2;
- (void)_accessibilityWarmPrefersNonAttributedLabelValueHintCache;
- (_Bool)_accessibilityPrefersNonAttributedHint;
- (_Bool)_accessibilityPrefersNonAttributedValue;
- (_Bool)_accessibilityPrefersNonAttributedLabel;
- (_Bool)_accessibilityPrefersNonAttributedAttributeWithOverrideSelector:(SEL)arg1 nonAttributedSelector:(SEL)arg2 attributedSelector:(SEL)arg3;
- (_Bool)_accessibilityAlwaysNo;
- (_Bool)_accessibilityAlwaysYes;
- (CDUnknownFunctionPointerType)impOrNullForSelector:(SEL)arg1;
- (SEL)_accessibilityPotentiallyAttributedSelectorForNonAttributedSelector:(SEL)arg1 attributedSelector:(SEL)arg2;
- (_Bool)_accessibilityOverridesLabelValueHintSelector:(SEL)arg1;
- (_Bool)_accessibilitySpeakThisIgnoresAccessibilityElementStatus;
- (id)_accessibilityPostProcessValueForAutomation:(id)arg1;
- (id)_accessibilityProcessedLabelAttribute;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilitySpeakThisStringValue;
- (void)_accessibilitySetIsSpeakThisElement:(_Bool)arg1;
- (_Bool)_accessibilityIsSpeakThisElement;
- (void)_accessibilityRawSetIsSpeakThisElement:(id)arg1;
- (id)_accessibilityRawIsSpeakThisElement;
- (void)_accessibilitySetRoleDescription:(id)arg1;
- (id)_accessibilityRoleDescription;
- (id)_accessibilityEquivalenceTag;
- (id)_accessibilityBriefLabel;
- (_Bool)_accessibilityUpdatesOnActivationAfterDelay;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (void)_setAccessibilityUpdatesOnActivationAfterDelay:(_Bool)arg1;
- (id)_accessibilityVisibleItemInList;
- (id)_accessibilityFirstVisibleItem;
- (id)_accessibilityCustomActionNamesAndIdentifiers;
- (id)_accessibilityPublicCustomRotors;
- (void)_addPublicRotorsToArray:(id)arg1 forElement:(id)arg2;
- (id)_accessibilityPublicCustomRotorName:(id)arg1;
- (_Bool)_accessibilityPublicCustomRotorVisibleInTouchRotor:(id)arg1;
- (id)_accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)_accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)_accessibilityPublicCustomRotorIdForSystemType:(id)arg1;
- (long long)_accessibilityCustomRotorTypeForString:(id)arg1;
- (id)_accessibilityRotorTypeStringForCustomRotor:(long long)arg1;
- (id)_accessibilityPerformPublicCustomRotorSearch:(id)arg1 searchDirection:(long long)arg2 currentItem:(id)arg3;
- (id)_accessibilityFirstElementForFocus;
- (void)_setAccessibilityIsNotFirstElement:(_Bool)arg1;
- (_Bool)_accessibilityIsNotFirstElement;
- (void)_setAccessibilityServesAsFirstElement:(_Bool)arg1;
- (_Bool)_accessibilityServesAsFirstElement;
- (_Bool)_accessibilityIsStarkElement;
- (_Bool)_accessibilityIsVisibleByCompleteHitTest;
- (struct CGPoint)_accessibilityVisiblePointHitTestingAnyElement:(_Bool)arg1;
- (struct CGPoint)_accessibilityVisiblePoint;
- (_Bool)_accessibilityVisiblePointHonorsScreenBounds;
- (_Bool)_accessibilityTouchContainerShouldOutputBraille;
- (id)_accessibilityTouchContainer;
- (_Bool)_accessibilityIsMap;
- (_Bool)_accessibilityIsGuideElement;
- (void)_accessibilitySetUserDefinedIsGuideElement:(_Bool)arg1;
- (_Bool)_accessibilityUserDefinedIsGuideElement;
- (_Bool)_accessibilityIsTouchContainer;
- (void)_accessibilityAddTrait:(unsigned long long)arg1;
- (void)_accessibilityRemoveTrait:(unsigned long long)arg1;
- (id)_accessibilityCustomActions;
- (id)_retrieveCustomActions;
- (_Bool)_accessibilityPerformLegacyCustomAction:(id)arg1;
- (id)_privateAccessibilityCustomActions;
- (_Bool)_accessibilityIsDictating;
- (id)_accessibilitySoftwareMimicKeyboard;
- (_Bool)_accessibilityIsSoftwareKeyboardMimic;
- (id)_accessibilityAccessibleAncestor;
- (id)_accessibilityStringForLabelKeyValues:(id)arg1;
- (id)_accessibilityWatchAutoSpeakElements;
- (id)_accessibilityAccessibleDescendants;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityInternalTextLinkCustomRotors;
- (id)_accessibilityInternalTextLinks;
- (unsigned long long)accessibilityARIAColumnCount;
- (unsigned long long)accessibilityARIARowCount;
- (unsigned long long)accessibilityColumnCount;
- (unsigned long long)accessibilityRowCount;
- (unsigned long long)accessibilityARIAColumnIndex;
- (unsigned long long)accessibilityARIARowIndex;
- (_Bool)_accessibilityCanDisplayMultipleControllers;
- (struct CGRect)_accessibilityDirectInteractionFrame;
- (_Bool)_accessibilityBannerIsSticky;
- (id)_accessibilityCurrentStatus;
- (id)_accessibilityViewController;
- (_Bool)_accessibilityOverridesInstructionsHint;
- (_Bool)_accessibilityOpaqueElementProvider;
- (unsigned long long)accessibilityBlockquoteLevel;
- (id)accessibilityFlowToElements;
- (_Bool)_accessibilityShouldAvoidAnnouncing;
- (_Bool)_accessibilityLastHitTestNearBorder;
- (id)_accessibilityBundleIdentifier;
- (id)accessibilityMathEquation;
- (_Bool)_accessibilityIsMathTouchExplorationView;
- (_Bool)_accessibilityShouldSpeakMathEquationTrait;
- (id)accessibilityMathMLSource;
- (id)accessibilitySecondaryLabel;
- (float)_accessibilityActivationDelay;
- (_Bool)_accessibilityIsUserInteractionEnabled;
- (_Bool)_allowCustomActionHintSpeakOverride;
- (_Bool)_accessibilitySupportsMultipleCustomRotorTitles;
- (id)_accessibilityAppSwitcherApps;
- (id)_accessibilityLaunchableApps;
- (id)_accessibilityContainerTypes;
- (_Bool)_accessibilityHasBadge;
- (_Bool)_accessibilityIsInFolder;
- (_Bool)_accessibilityIsInAppSwitcher;
- (_Bool)_accessibilityAlwaysSpeakTableHeaders;
- (_Bool)_accessibilityIsTitleElement;
- (_Bool)_accessibilityIsLastSiblingForType:(unsigned long long)arg1;
- (_Bool)_accessibilityIsFirstSiblingForType:(unsigned long long)arg1;
- (_Bool)_accessibilityIsLastSibling;
- (_Bool)_accessibilityIsFirstSibling;
- (_Bool)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3;
- (_Bool)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3 sawAXElement:(_Bool *)arg4;
- (id)_accessibilityAncestorForSiblingsWithType:(unsigned long long)arg1;
- (id)_axAncestorTypes;
- (unsigned long long)axContainerTypeFromUIKitContainerType:(long long)arg1;
- (_Bool)_accessibilityElementShouldBeInvalid;
- (_Bool)_accessibilityCanPerformEscapeAction;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)_accessibilityAlwaysOrderedFirst;
- (id)_accessibilitySupportGesturesAttributes;
- (id)accessibilityLinkedElement;
- (id)accessibilityPlaceholderValue;
- (_Bool)_accessibilitySupportsDirectioOrbManipulation;
- (id)_accessibilityUserDefinedGuideElementHeaderText;
- (void)_setAccessibilityGuideElementHeaderText:(id)arg1;
- (id)_accessibilityRetieveHeaderElementText;
- (id)_accessibilityGuideElementHeaderText;
- (id)_accessibilityUserDefinedLinkedUIElements;
- (void)_setAccessibilityLinkedUIElements:(id)arg1;
- (id)_accessibilityLinkedUIElements;
- (id)_accessibilityRetrieveLinkedUIElementsFromContainerChain;
- (id)accessibilityHeaderElements;
- (_Bool)_accessibilityCanPerformAction:(int)arg1;
- (_Bool)__accessibilitySupportsSecondaryActivateAction;
- (id)_accessibilityHeadingLevel;
- (_Bool)__accessibilitySupportsActivateAction;
- (void)_accessibilitySetShouldPreventOpaqueScrolling:(_Bool)arg1;
- (_Bool)_accessibilityShouldPreventOpaqueScrolling;
- (id)_accessibilitySwipeIslandIdentifier;
- (id)_accessibilitySwipeIsland;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1;
- (void)_accessibilitySetLastElementsUpdatedWithContainerElementReferences:(id)arg1;
- (id)_accessibilityLastElementsUpdatedWithContainerElementReferences;
- (id)_accessibilityElements;
- (id)_accessibilityGuideElementInDirection:(_Bool)arg1;
- (id)_accessibilityContainerInDirection:(_Bool)arg1;
- (id)_accessibilityContainingParentForOrdering;
- (_Bool)_accessibilityHasOrderedChildren;
- (void)accessibilityEnumerateContainerElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)accessibilityEnumerateContainerElementsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)accessibilityShouldEnumerateContainerElementsArrayDirectly;
- (void)_accessibilityResetContainerElements;
- (_Bool)_accessibilityUsesScrollParentForOrdering;
- (void)_accessibilitySetUsesScrollParentForOrdering:(_Bool)arg1;
- (_Bool)_accessibilityServesAsContainingParentForOrdering;
- (id)_accessibilityContainerForAccumulatingCustomRotorItems;
- (id)accessibilityContainerElements;
- (unsigned long long)_accessibilityVisionDetectionOptions;
- (void)_accessibilitySetSupportsMediaAnalysis:(_Bool)arg1;
- (_Bool)_accessibilitySupportsMediaAnalysis;
- (double)_accessibilityViewAlpha;
- (double)_accessibilityFontSize;
- (double)_accessibilityZoomScale;
- (id)_accessibilityParentForFindingScrollParent;
- (id)_accessibilityScrollParent;
- (_Bool)_accessibilityScrollDownPage;
- (_Bool)_accessibilityScrollUpPage;
- (_Bool)_accessibilityScrollPreviousPage;
- (_Bool)_accessibilityScrollNextPage;
- (_Bool)_accessibilityScrollRightPage;
- (_Bool)_accessibilityScrollLeftPage;
- (SEL)_accessibilityScrollSelectorForDirection:(long long)arg1;
- (_Bool)_accessibilityScrollPageInDirection:(long long)arg1 shouldSendScrollFailed:(_Bool)arg2;
- (_Bool)_accessibilityTryScrollWithSelector:(SEL)arg1 shouldSendScrollFailed:(_Bool)arg2;
- (void)_accessibilitySendPageScrollFailedIfNecessary;
- (_Bool)_accessibilityHandlePublicScroll:(long long)arg1;
- (struct CGPoint)_accessibilityScrollRectToVisible:(struct CGRect)arg1;
- (void)_accessibilityScrollToPoint:(struct CGPoint)arg1;
- (_Bool)_animateScrollViewWithMachPort:(unsigned int)arg1 amount:(double)arg2;
- (_Bool)_accessibilitySavePhotoLabel:(id)arg1;
- (_Bool)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (_Bool)_accessibilityBaseScrollToVisible;
- (_Bool)_accessibilityScrollToVisible;
- (_Bool)_accessibilityScrollToVisibleForNextElementRetrieval:(long long)arg1;
- (struct CGPoint)_accessibilityContentOffset;
- (_Bool)_accessibilityCanScrollInAtLeastOneDirection;
- (id)_accessibilityTabBarAncestor;
- (_Bool)_accessibilityIsInTabBar;
- (void)_axSetCachedHasTabBarAncestor:(id)arg1;
- (id)_axCachedHasTabBarAncestor;
- (_Bool)_accessibilityIsScrollable;
- (unsigned long long)_accessibilityNativeTraits;
- (_Bool)_accessibilityIsEscapable;
- (_Bool)_accessibilityIterateParentsForTestBlock:(CDUnknownBlockType)arg1;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1 alwaysAllowRefreshAction:(_Bool)arg2;
- (double)_accessibilityVisibleItemDenominator;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (id)_accessibilityScrollStatus;
- (_Bool)_accessibilityElementVisibilityAffectsLayout;
- (_Bool)_accessibilityShouldSpeakScrollStatusOnEntry;
- (void)setIsAccessibilityScrollAncestor:(_Bool)arg1;
- (id)_accessibilityScrollAncestor;
- (struct CGPoint)__accessibilityVisibleScrollArea:(_Bool)arg1;
- (void)_accessibilityIterateScrollParentsUsingBlock:(CDUnknownBlockType)arg1 includeSelf:(_Bool)arg2;
- (void)_accessibilityIterateScrollParentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_accessibilityTextFieldText;
- (id)_accessibilityResponderChainForKeyWindow;
- (id)_accessibilityResponderChainForWindow:(id)arg1;
- (id)_accessibilityFirstResponderForWindow:(id)arg1;
- (id)_accessibilityFirstResponderForKeyWindow;
- (_Bool)_accessibilityRepresentsInfiniteCollection;
- (long long)_accessibilityExpandedStatus;
- (_Bool)_accessibilityIsPressed;
- (_Bool)_accessibilitySupportsPressedState;
- (_Bool)_accessibilityIsWebDocumentView;
- (_Bool)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (_Bool)accessibilityScrollToTopSupported;
- (_Bool)accessibilityScrollUpPageSupported;
- (_Bool)accessibilityScrollDownPageSupported;
- (_Bool)accessibilityScrollRightPageSupported;
- (_Bool)accessibilityScrollLeftPageSupported;
- (_Bool)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (_Bool)_accessibilityIsScrollAncestor;
- (_Bool)_accessibilityScrollingEnabled;
- (long long)_accessibilityPageIndex;
- (long long)_accessibilityPageCount;
- (_Bool)accessibilityScrollLeftPage;
- (_Bool)accessibilityScrollRightPage;
- (_Bool)accessibilityScrollDownPage;
- (_Bool)accessibilityScrollUpPage;
- (struct CGRect)accessibilityFrameForScrolling;
- (struct _NSRange)_accessibilityRawRangeForUITextRange:(id)arg1;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilityTextInputElementRangeAsNSRange;
- (id)_accessibilityTextInputElementRange;
- (id)_accessibilityTextInputElement;
- (void)_setAccessibilityIsMainWindow:(_Bool)arg1;
- (_Bool)_accessibilityCanBeConsideredAsMainWindow;
- (_Bool)_accessibilityIsMainWindow;
- (void)_setAccessibilityWindowVisible:(_Bool)arg1;
- (_Bool)_accessibilityWindowVisible;
- (_Bool)_accessibilitySelfFoundByHitTesting;
- (id)_accessibilityBaseHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)_accessibilityHitTestSupplementaryViews:(struct CGPoint)arg1 event:(id)arg2;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilitySetShouldHitTestFallBackToNearestChild:(_Bool)arg1;
- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (_Bool)_accessibilityHitTestReverseOrder;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (_Bool)accessibilityActivate;
- (_Bool)accessibilityStartStopToggle;
- (_Bool)_accessibilitySecondaryActivate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
@end

