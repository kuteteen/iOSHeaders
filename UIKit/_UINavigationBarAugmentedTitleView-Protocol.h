//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UINavigationItem;
@protocol _UINavigationBarTitleViewDataSource;

@protocol _UINavigationBarAugmentedTitleView <NSObject>
@property(readonly, copy, nonatomic) NSArray *contentOverlayRects;
@property(nonatomic) _Bool hideTrailingBarButtons;
@property(nonatomic) _Bool hideStandardTitle;
@property(nonatomic) _Bool hideLeadingBarButtons;
@property(nonatomic) _Bool hideBackButton;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) _Bool underlayBarContent;
@property(nonatomic) long long titleLocation;
@property(nonatomic) __weak UINavigationItem *navigationItem;
@property(nonatomic, getter=_dataSource, setter=_setDataSource:) __weak id <_UINavigationBarTitleViewDataSource> _dataSource;
- (void)transitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)performTransition:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)transitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (long long)preferredContentSizeForSize:(long long)arg1;
@end

