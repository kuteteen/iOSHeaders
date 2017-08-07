//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIScrollViewScrollObserver-Protocol.h>

@class UIScrollView;

@protocol _UIScrollViewScrollObserver_Internal <_UIScrollViewScrollObserver>

@optional
- (void)_observeScrollView:(UIScrollView *)arg1 didBeginTransitionToDeferredContentOffset:(struct CGPoint)arg2;
- (void)_didScroll;
- (void)_observeScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)_observeScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)_observeScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (struct UIEdgeInsets)_collapsableContentPaddingForObservedScrollView:(UIScrollView *)arg1;
- (struct UIEdgeInsets)_revealableContentPaddingForObservedScrollView:(UIScrollView *)arg1 includeContentWithCollapsedAffinity:(_Bool)arg2;
- (void)_observeScrollView:(UIScrollView *)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3 unclampedOriginalTarget:(struct CGPoint)arg4;
@end

