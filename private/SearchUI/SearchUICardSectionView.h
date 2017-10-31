//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NUIContainerStackView.h"

#import "NUIContainerStackViewDelegate.h"

@class NSString, SFCardSection, SearchUICardSectionRowModel, UIView;

@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerStackViewDelegate>
{
    _Bool _spansFullWidth;
    unsigned long long _style;
    id <SearchUIFeedbackDelegate> _feedbackDelegate;
    UIView *_contentView;
    SearchUICardSectionRowModel *_rowModel;
    UIView *_chevronView;
}

+ (Class)layerClass;
+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (int)separatorStyleForCardSection:(id)arg1;
+ (double)separatorInsetForLeadingImageForSection:(id)arg1;
@property(retain) UIView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) SearchUICardSectionRowModel *rowModel; // @synthesize rowModel=_rowModel;
@property(retain) UIView *contentView; // @synthesize contentView=_contentView;
@property __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(readonly) _Bool spansFullWidth; // @synthesize spansFullWidth=_spansFullWidth;
@property unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1;
- (void)didInvalidateSizeAnimate:(_Bool)arg1;
- (id)sendFeedbackForPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (void)openPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (void)updateWithRowModel:(id)arg1;
@property(readonly, nonatomic) SFCardSection *section;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

