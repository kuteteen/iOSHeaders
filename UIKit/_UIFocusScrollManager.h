//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, UIScreen, _UIFocusDisplayLinkScrollAnimator;

__attribute__((visibility("hidden")))
@interface _UIFocusScrollManager : NSObject
{
    UIScreen *_screen;
    _UIFocusDisplayLinkScrollAnimator *_scrollViewAnimator;
    NSHashTable *_activelyScrollingScrollViews;
}

@property(readonly, nonatomic) NSHashTable *activelyScrollingScrollViews; // @synthesize activelyScrollingScrollViews=_activelyScrollingScrollViews;
@property(readonly, nonatomic) _UIFocusDisplayLinkScrollAnimator *scrollViewAnimator; // @synthesize scrollViewAnimator=_scrollViewAnimator;
@property(readonly, nonatomic) __weak UIScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (struct CGPoint)_contentOffsetForScrollView:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(struct CGRect)arg3 targetOffset:(struct CGPoint)arg4 targetBounds:(struct CGRect)arg5;
- (struct CGPoint)_contentOffsetForScrollView:(id)arg1 toShowFocusItemWithInfo:(id)arg2;
- (struct CGPoint)contentOffsetForScrollView:(id)arg1 toShowRect:(struct CGRect)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;
- (struct CGPoint)contentOffsetForScrollView:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;
- (void)_ensureFocusItemIsOnscreen:(id)arg1 inScrollView:(id)arg2;
- (void)_scrollToFocusItemWithInfo:(id)arg1 offset:(struct CGPoint)arg2 inScrollView:(id)arg3;
- (void)animateOffsetOfScrollView:(id)arg1 toShowFocusItem:(id)arg2;
- (struct CGPoint)currentVelocityForScrollView:(id)arg1;
- (struct CGPoint)targetContentOffsetForScrollView:(id)arg1;
- (void)cancelScrollingForScrollView:(id)arg1;
- (_Bool)isScrollingScrollView:(id)arg1;
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1;
- (id)initWithScreen:(id)arg1;

@end

