//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PXProtoMutableFeatureView.h"

@class NSString, UIColor, UIImageView;

@interface PXProtoFeatureView : UIView <PXProtoMutableFeatureView>
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool content;
    } _needsUpdateFlags;
    _Bool _selected;
    _Bool _disabled;
    _Bool _shouldUpdateContentOnResize;
    id <PXProtoFeature> _feature;
    UIImageView *__removeIconView;
    UIView *_contentView;
    struct UIEdgeInsets _minimumMargins;
}

@property(readonly, nonatomic) struct UIEdgeInsets minimumMargins; // @synthesize minimumMargins=_minimumMargins;
@property(readonly, nonatomic) _Bool shouldUpdateContentOnResize; // @synthesize shouldUpdateContentOnResize=_shouldUpdateContentOnResize;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIImageView *_removeIconView; // @synthesize _removeIconView=__removeIconView;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) id <PXProtoFeature> feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (void)_updateContentIfNeeded;
- (void)_invalidateContent;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setDisabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setFeature:(id)arg1;
- (struct UIEdgeInsets)_contentInsets;
- (struct CGRect)_contentViewFrame;
- (void)updateContent;
@property(readonly, nonatomic) _Bool wantsContentView;
@property(readonly, nonatomic) UIColor *preferredBackgroundColor;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGSize compactContentSize;
@property(readonly, nonatomic) struct CGSize regularContentSize;
@property(readonly, nonatomic) double recommendedCompactContentHeight;
- (struct CGSize)intrinsicContentSize;
- (_Bool)canBecomeFocused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

