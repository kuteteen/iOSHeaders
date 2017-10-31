//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BFFStyle : NSObject
{
}

+ (id)sharedStyle;
- (void)applyThemeToSectionHeaderLabel:(id)arg1;
- (void)applyThemeToTableCell:(id)arg1;
- (void)applyThemeToTitleLabel:(id)arg1;
- (void)applyThemeToAllTableViews;
- (void)applyThemeToRemoteUIWebViewController:(id)arg1;
- (void)applyThemeToTextView:(id)arg1;
- (void)applyThemeToLabel:(id)arg1;
- (double)tallRowHeight;
- (struct CGSize)sizeForContinueButtonInAncestor:(id)arg1;
- (id)continueButtonWithTitle:(id)arg1 inView:(id)arg2;
- (void)applyThemeToNavigationController:(id)arg1;
- (void)applyThemeToNavigationController:(id)arg1 allowUnderlap:(_Bool)arg2;
- (id)backgroundColor;
- (struct UIEdgeInsets)edgeInsetsForTable:(id)arg1;
- (struct UIEdgeInsets)horizontalInsetsForContainingInView:(id)arg1 width:(double)arg2;
- (double)horizontalMarginForView:(id)arg1;
- (double)nonTableHorizontalMargin;
- (double)singleLineCellHeightForTable:(id)arg1;
- (id)tableCellFont;
- (struct UIEdgeInsets)edgeInsetsForHeaderView:(id)arg1;
- (double)baselineInsetForHeaderTitle;
- (double)screenHeaderFooterSideInsetForView:(id)arg1;
- (double)screenHeaderHeightForView:(id)arg1;
- (double)headerSubheaderBaselineSpacingForView:(id)arg1;
- (double)headerTitleBaselineOffsetHasIcon:(_Bool)arg1;
- (double)headerTitleBaselineOffsetForView:(id)arg1 hasIcon:(_Bool)arg2;
- (double)headerIconBaselineOffset;
- (double)headerIconBaselineOffsetForView:(id)arg1;
- (double)headerTitleBaselineOffsetForView:(id)arg1 icon:(id)arg2;
- (double)headerYOffsetForIcon:(id)arg1 inView:(id)arg2;
- (struct CGSize)_effectiveSizeForIcon:(id)arg1 inView:(id)arg2;
- (id)headerTitleFont;

@end

