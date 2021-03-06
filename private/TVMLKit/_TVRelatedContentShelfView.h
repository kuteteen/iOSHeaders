//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class _TVRelatedWrappingView;

__attribute__((visibility("hidden")))
@interface _TVRelatedContentShelfView : UIView
{
    UIView *_lastFocusedView;
    _TVRelatedWrappingView *_relatedWrappingView;
    UIView *_shelfView;
    UIView *_relatedView;
    double _relatedHeight;
}

@property(nonatomic) double relatedHeight; // @synthesize relatedHeight=_relatedHeight;
@property(retain, nonatomic) UIView *relatedView; // @synthesize relatedView=_relatedView;
@property(nonatomic) __weak UIView *shelfView; // @synthesize shelfView=_shelfView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutRelatedView;
- (void)layoutSubviews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)initWithFrame:(struct CGRect)arg1;

@end

