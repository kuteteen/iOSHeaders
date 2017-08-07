//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSDate, NSString, UIButton, UIImageView, UILabel, UIView, _UIBackdropView;
@protocol PUPhotosSectionHeaderViewDelegate;

@interface PUPhotosSectionHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UILabel *_locationsLabel;
    UILabel *_separatorLabel;
    UILabel *_dateLabel;
    UIImageView *_disclosureIconView;
    UIButton *_actionButton;
    struct CGSize _actionButtonInitialSize;
    double _actionButtonLabelInitialMaxY;
    struct UIEdgeInsets _actionButtonInitialContentInsets;
    _Bool _highlightViewVisible;
    _Bool _inLayoutTransition;
    _Bool _performingBatchDateDependentUpdate;
    _UIBackdropView *_backdropView;
    _Bool _usingBackgroundBlur;
    UIView *_highlightView;
    _Bool _useYearOnlyForDefaultTitle;
    _Bool _showsActionButton;
    _Bool _allowsPhotosDetailsInteraction;
    NSString *_backdropViewGroupName;
    id <PUPhotosSectionHeaderViewDelegate> _delegate;
    long long _style;
    unsigned long long _backgroundStyle;
    long long _sectionIndex;
    NSString *_sectionTitle;
    NSArray *_sectionLocations;
    NSDate *_sectionStartDate;
    NSDate *_sectionEndDate;
    NSString *_actionButtonTitle;
    struct UIEdgeInsets _highlightInsets;
}

+ (_Bool)_hasAccessibilityLargeText;
@property(nonatomic) _Bool allowsPhotosDetailsInteraction; // @synthesize allowsPhotosDetailsInteraction=_allowsPhotosDetailsInteraction;
@property(copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(nonatomic) _Bool showsActionButton; // @synthesize showsActionButton=_showsActionButton;
@property(readonly, nonatomic) NSDate *sectionEndDate; // @synthesize sectionEndDate=_sectionEndDate;
@property(readonly, nonatomic) NSDate *sectionStartDate; // @synthesize sectionStartDate=_sectionStartDate;
@property(retain, nonatomic) NSArray *sectionLocations; // @synthesize sectionLocations=_sectionLocations;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(nonatomic) struct UIEdgeInsets highlightInsets; // @synthesize highlightInsets=_highlightInsets;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <PUPhotosSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
- (void).cxx_destruct;
- (void)_hideHighlightView;
- (void)_updateHighlightView;
- (void)_setHighlightViewVisible:(_Bool)arg1;
- (_Bool)allowLocationTapForTouch:(id)arg1;
- (struct CGSize)_preferredSizeForText:(id)arg1 withFont:(id)arg2;
- (struct CGSize)_preferredSizeForLabel:(id)arg1;
- (void)prepareForReuse;
- (void)didEndDisplaying;
- (void)_layoutSubviewsForCurentStyle;
- (void)layoutSubviews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (id)_dateRangeYearFormatter;
- (id)_dateRangeLongFormatter;
- (id)_dateRangeCompactFormatter;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackground;
- (void)_updateActionButton;
- (void)_updateDateLabel;
- (void)_updateLocationsLabelVisibility;
- (void)_updateDisclosureIconVisibility;
- (void)_updateTitleLabel;
- (void)_updateDateDependentLabels;
- (void)_handleActionButton:(id)arg1;
- (void)_handleSignificantDateChange:(id)arg1;
- (_Bool)_disableRasterizeInAnimations;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_updateLabelsForTextStyle;
- (void)setSectionStartDate:(id)arg1 endDate:(id)arg2;
@property(nonatomic) _Bool useYearOnlyForDefaultTitle;
- (void)performBatchUpdateOfDateDependentPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_usingDateAsTitle;
@property(readonly, nonatomic) NSString *synthesizedSectionTitle;
- (void)_setUsingBackgroundBlur:(_Bool)arg1;
- (void)layoutMarginsDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

