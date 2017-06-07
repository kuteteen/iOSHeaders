//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol _UIButtonBarLayoutMetricsData;

__attribute__((visibility("hidden")))
@interface _UIButtonBarLayout : NSObject
{
    id <_UIButtonBarLayoutMetricsData> _layoutMetrics;
    _Bool _dirty;
}

@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
- (void).cxx_destruct;
- (id)description;
- (void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)addLayoutGuides:(id)arg1;
- (void)_addLayoutGuides:(id)arg1;
- (void)addLayoutViews:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4;
- (_Bool)compact;
- (void)configure;
- (id)_item;
- (_Bool)_isGroup;
- (_Bool)_isSpace;
- (void)_configure;
- (_Bool)_shouldBeDirty;
- (id)initWithLayoutMetrics:(id)arg1;
- (id)init;

@end

