//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSLayoutAnchor, NSLayoutDimension, _UIButtonBarLayoutMetrics;

@protocol _UIButtonBarLayoutMetricsData <NSObject>
@property(retain, nonatomic) NSLayoutDimension *groupSpacingGuide;
@property(readonly, nonatomic) NSLayoutDimension *groupSizeGuide;
@property(readonly, nonatomic) NSLayoutAnchor *popoverGuideTopAnchor;
@property(readonly, nonatomic) NSLayoutDimension *flexibleSpaceGuide;
@property(readonly, nonatomic) NSLayoutDimension *minimumSpaceGuide;
@property(readonly, nonatomic) NSLayoutDimension *verticalSizeGuide;
- (_UIButtonBarLayoutMetrics *)_upcastIfReadOnly;
@end

