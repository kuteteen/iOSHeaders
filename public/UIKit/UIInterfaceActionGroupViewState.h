//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInterfaceActionVisualStyleViewState.h>

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying>
{
    _Bool _isVerticalLayoutAxis;
    long long _resolvedPresentationStyle;
}

@property(readonly, nonatomic) long long resolvedPresentationStyle; // @synthesize resolvedPresentationStyle=_resolvedPresentationStyle;
@property(readonly, nonatomic) _Bool isVerticalLayoutAxis; // @synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis;
- (_Bool)_stateEqualToGroupViewState:(id)arg1;
- (void)_collectStateFromGroupViewState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyWithResolvedPresentationStyle:(long long)arg1;
- (id)copyWithVerticalLayoutAxis:(_Bool)arg1;
- (id)init;

@end

