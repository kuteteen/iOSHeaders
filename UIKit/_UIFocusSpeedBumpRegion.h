//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFocusRegion.h>

@interface _UIFocusSpeedBumpRegion : _UIFocusRegion
{
    unsigned long long _speedBumpEdges;
}

@property(nonatomic) unsigned long long speedBumpEdges; // @synthesize speedBumpEdges=_speedBumpEdges;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;
- (_Bool)_canBeOccludedByRegionsAbove;
- (_Bool)_canOccludeRegionsBelow;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 speedBumpEdges:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

