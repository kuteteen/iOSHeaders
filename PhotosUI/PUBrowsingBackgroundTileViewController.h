//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSString, PUBrowsingViewModel, UIColor, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver>
{
    _Bool _shouldDisplayEmptyPlaceholder;
    _Bool __needsUpdateColor;
    UIColor *_backgroundColorOverride;
    PUBrowsingViewModel *_viewModel;
    CDUnknownBlockType __nextColorUpdateAnimatorBlock;
    _UIContentUnavailableView *__emptyPlaceholderView;
}

@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property(copy, nonatomic, setter=_setNextColorUpdateAnimatorBlock:) CDUnknownBlockType _nextColorUpdateAnimatorBlock; // @synthesize _nextColorUpdateAnimatorBlock=__nextColorUpdateAnimatorBlock;
@property(nonatomic, setter=_setNeedsUpdateColor:) _Bool _needsUpdateColor; // @synthesize _needsUpdateColor=__needsUpdateColor;
@property(retain, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool shouldDisplayEmptyPlaceholder; // @synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder;
@property(retain, nonatomic) UIColor *backgroundColorOverride; // @synthesize backgroundColorOverride=_backgroundColorOverride;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateEmptyPlaceholderAnimated:(_Bool)arg1;
- (void)_updateColorIfNeeded;
- (void)_invalidateColorWithAnimatorBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateColor;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

