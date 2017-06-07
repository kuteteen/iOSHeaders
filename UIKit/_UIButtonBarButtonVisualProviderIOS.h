//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIButtonBarButtonVisualProvider.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, UIButton, UIImageView, _UIBackButtonContainerView;
@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider
{
    UIButton *_backIndicatorButton;
    _UIBackButtonContainerView *_titleContainer;
    UIButton *_titleButton;
    UIButton *_imageButton;
    UIImageView *_backgroundImage;
    UIImageView *_selectedImage;
    NSMutableArray *_constraints;
    NSLayoutConstraint *_backButtonContentLeadingConstraint;
    NSLayoutConstraint *_backButtonContentTrailingContraint;
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    NSArray *_titleAttributes;
    NSMutableDictionary *_backgroundImages;
    _Bool _skipAttributedTitle;
    long long _barButtonStyle;
}

- (void).cxx_destruct;
- (void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2;
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_configureBackButtonButton:(id)arg1;
- (void)_configureTextBackButtonButton:(id)arg1 withOffset:(struct UIOffset)arg2;
- (void)_configureImageBackButtonButton:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)_configureTextButton:(id)arg1 withOffset:(struct UIOffset)arg2;
- (struct UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_configureImageButton:(id)arg1 withInsets:(struct UIEdgeInsets)arg2 paddingEdges:(unsigned long long)arg3 additionalPadding:(double)arg4;
- (void)_addVerticalConstraintsForImageButton:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)_addVerticalConstraintsForTextButton:(id)arg1 withOffset:(double)arg2;
- (void)_addVerticalConstraintsForBackIndicatorInButton:(id)arg1 withOffset:(double)arg2;
- (void)_addHorizontalConstraintsForImageButton:(id)arg1 withInsets:(struct UIEdgeInsets)arg2 paddingEdges:(unsigned long long)arg3 additionalPadding:(double)arg4;
- (void)_addHorizontalConstraintsForTextButton:(id)arg1 withOffset:(double)arg2;
- (void)_addHorizontalConstraintsForBackButton:(id)arg1 contentButton:(id)arg2 withOffset:(double)arg3;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (long long)_activeBarMetricsForButton:(id)arg1;
- (id)_backIndicatorMask;
- (id)_backIndicatorImageForBarMetrics:(long long)arg1;
- (id)_imageWithActiveStylesFromImage:(id)arg1;
- (struct UIEdgeInsets)_imageInsetsForBarButtonItem:(id)arg1 barMetrics:(long long)arg2 isBackButton:(_Bool)arg3;
- (double)_defaultPaddingForInsets:(struct UIEdgeInsets)arg1;
- (double)_offsetFromBackIndicatorToContentButton;
- (double)_offsetBelowBaselineForBackIndicatorForMetrics:(long long)arg1;
- (struct UIEdgeInsets)_insetsForBarMetrics:(long long)arg1;
- (void)_addConstraintsForBackgroundImageWithOffset:(double)arg1 isBackButton:(_Bool)arg2;
- (void)_configureBackgroundForButton:(id)arg1 fromBarButtonItem:(id)arg2 isBackButton:(_Bool)arg3;
- (void)_configureImageOrTitleFromBarButtonItem:(id)arg1 forMetrics:(long long)arg2;
- (void)_computeTextAttributesForBarButtonItem:(id)arg1;
- (id)_titleAttributesForState:(unsigned long long)arg1;
- (id)_defaultTitleAttributesForState:(unsigned long long)arg1 style:(long long)arg2;
- (void)_invalidateTextAttributes;
- (void)button:(id)arg1 traitCollectionDidChange:(id)arg2;
- (void)setBackButtonConstraintsActive:(_Bool)arg1;
- (_Bool)backButtonConstraintsActive;
- (id)contentView;
- (id)backIndicatorView;
- (_Bool)supportsBackButtons;
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;
- (_Bool)buttonSelectionState:(id)arg1 forRequestedState:(_Bool)arg2;
- (id)_appearanceStorage;
@property(nonatomic) _Bool backButtonMaskEnabled;
@property(readonly, nonatomic) UIImageView *backgroundImageView;
@property(readonly, nonatomic) UIButton *imageButton;
@property(readonly, nonatomic) UIButton *textButton;

@end

