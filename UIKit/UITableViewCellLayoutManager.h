//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UITableViewCellLayoutManager : NSObject
{
}

+ (id)_externalDetailTextColor;
+ (id)_externalTextColor;
+ (id)layoutManagerForTableViewCellStyle:(long long)arg1;
- (struct CGSize)optimumSizeForLabel:(id)arg1 inTotalTextRect:(struct CGRect)arg2 minimizeWidthOnVerticalOverflow:(_Bool)arg3 preferSingleLineWidth:(_Bool)arg4;
- (_Bool)shouldIncreaseMarginForImageViewInCell:(id)arg1;
- (_Bool)shouldApplyAccessibilityLargeTextLayoutForCell:(id)arg1;
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(_Bool)arg5;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(_Bool)arg3;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2;
- (double)requiredIndentationForFirstLineOfCell:(id)arg1 rowWidth:(double)arg2 forSizing:(_Bool)arg3;
- (double)requiredIndentationForFirstLineOfCell:(id)arg1 rowWidth:(double)arg2;
- (struct CGRect)textRectForCell:(id)arg1;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(_Bool)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(_Bool)arg2;
- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)selectedBackgroundEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)backgroundEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)backgroundStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)deleteConfirmationRectForCell:(id)arg1;
- (_Bool)editingAccessoryShouldFadeForCell:(id)arg1;
- (struct CGRect)editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)editingAccessoryShouldAppearForCell:(id)arg1;
- (_Bool)accessoryShouldFadeForCell:(id)arg1;
- (struct CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)accessoryShouldAppearForCell:(id)arg1;
- (_Bool)reorderSeparatorShouldFadeForCell:(id)arg1;
- (struct CGRect)reorderSeparatorEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)reorderSeparatorStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)reorderSeparatorShouldAppearForCell:(id)arg1;
- (_Bool)reorderControlShouldFadeForCell:(id)arg1;
- (struct CGRect)reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (struct CGRect)reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (_Bool)reorderControlShouldAppearForCell:(id)arg1;
- (_Bool)editControlShouldFadeForCell:(id)arg1;
- (struct CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (struct CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;
- (_Bool)editControlShouldAppearForCell:(id)arg1;
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 rowWidth:(double)arg3;
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateFocusGuidesForCell:(id)arg1 editing:(_Bool)arg2;
- (void)_layoutFocusGuidesForCell:(id)arg1;
- (void)cell:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)cell:(id)arg1 willTransitionToState:(unsigned long long)arg2;
- (void)layoutSubviewsOfCell:(id)arg1;
- (struct CGRect)standardLayoutImageViewFrameForCell:(id)arg1 forSizing:(_Bool)arg2;
- (double)contentIndentationForCell:(id)arg1;
- (id)badgeForCell:(id)arg1;
- (id)editableTextFieldForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (id)textLabelForCell:(id)arg1;
- (id)imageViewForCell:(id)arg1;
- (id)defaultBadgeForCell:(id)arg1;
- (id)defaultEditableTextFieldForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1;
- (void)applyCarPlayDefaultValuesToTextLabel:(id)arg1 inCell:(id)arg2;
- (id)defaultLabelForCell:(id)arg1 ofClass:(Class)arg2;
- (id)defaultDetailTextLabelFontForCell:(id)arg1;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (id)defaultImageViewForCell:(id)arg1;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;
- (double)defaultTextLabelFontSizeForCell:(id)arg1;
- (struct CGRect)_contentRectForCell:(id)arg1 forEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3 rowWidth:(double)arg4;
- (struct CGRect)_contentRectForCell:(id)arg1 forEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;
- (double)_contentRectLeadingOffsetForCell:(id)arg1 editingState:(_Bool)arg2 rowWidth:(double)arg3;
- (struct CGRect)_editingAccessoryRectForCell:(id)arg1 offscreen:(_Bool)arg2;
- (struct CGRect)_accessoryRectForCell:(id)arg1 offscreen:(_Bool)arg2;
- (struct CGRect)_accessoryRectForCell:(id)arg1 offscreen:(_Bool)arg2 rowWidth:(double)arg3;
- (_Bool)shouldStackAccessoryViewVerticallyForCell:(id)arg1 editing:(_Bool)arg2;
- (id)customAccessoryViewForCell:(id)arg1 editing:(_Bool)arg2;
- (struct CGRect)_reorderSeparatorRectForCell:(id)arg1 offscreen:(_Bool)arg2;
- (struct CGRect)_reorderControlRectForCell:(id)arg1 offscreen:(_Bool)arg2;
- (struct CGRect)_editControlRectForCell:(id)arg1 offscreen:(_Bool)arg2;
- (_Bool)_editControlOnSameSideAsReorderControlForCell:(id)arg1;
- (struct CGRect)_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(_Bool)arg2 rowWidth:(double)arg3;
- (struct CGRect)_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(_Bool)arg2;
- (struct CGRect)_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(_Bool)arg2 rowWidth:(double)arg3;
- (struct CGRect)_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(_Bool)arg2;
- (struct CGRect)_backgroundRectForCell:(id)arg1 forIndentedState:(_Bool)arg2 rowWidth:(double)arg3;
- (struct CGRect)_backgroundRectForCell:(id)arg1 forIndentedState:(_Bool)arg2;

@end

