//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSUUID, UIScreen, UIView, UIViewProgressAnimatableProperty, UIViewPropertyAnimator, UIVisualEffectView, _UIInteractiveHighlightEffectWindow;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightEnvironment : NSObject
{
    UIScreen *_containerScreen;
    _UIInteractiveHighlightEffectWindow *_containerWindow;
    UIView *_containerView;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_contentView;
    UIView *_contentClipView;
    UIViewPropertyAnimator *_backgroundEffectAnimator;
    UIViewProgressAnimatableProperty *_backgroundEffectProgress;
    NSArray *_viewRecords;
    _UIInteractiveHighlightEnvironment *_parentEnvironment;
    _UIInteractiveHighlightEnvironment *_childEnvironment;
    NSUUID *_backgroundAnimationIdentifier;
}

+ (id)interactiveHighlightEnvironmentForContainerView:(id)arg1;
+ (id)requestInteractiveHighlightEnvironmentForView:(id)arg1;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)finalizeContainerWindowIfNeeded;
- (void)finalizeContentViewIfNeeded;
- (void)finalizeBackgroundEffect;
- (id)backgroundVisualEffectForProgress:(double)arg1;
- (id)newBackgroundEffectAnimator;
- (void)initContentViewIfNeeded;
- (void)initBackgroundEffectViewIfNeeded;
- (void)initContainerWindowIfNeeded;
- (void)finalizeViewRecord:(id)arg1;
- (void)removeAllViewRecords;
- (void)removeViewRecordsIfNeeded;
- (long long)indexOfViewRecordForView:(id)arg1;
- (id)newViewRecordForView:(id)arg1 options:(unsigned long long)arg2;
- (void)applyLayoutGuide:(id)arg1;
- (void)reset;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)disableClippingForView:(id)arg1 ancestorView:(id)arg2;
- (void)setUserInteractionOnContainerEnabled:(_Bool)arg1;
- (void)removeInteractiveHighlightEffect:(id)arg1;
- (void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)interactiveHighlightEffectForView:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) UIView *contentClipView;
@property(readonly, nonatomic) UIView *contentView; // @dynamic contentView;
- (void)dealloc;
- (id)initWithParentEnvironment:(id)arg1;
- (id)initWithContainerScreen:(id)arg1;
- (id)initWithContainerView:(id)arg1;

@end

