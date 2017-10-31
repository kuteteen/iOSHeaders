//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXComponentView;

@interface SXComponentExposureTracking : NSObject
{
    SXComponentView *_componentView;
    CDUnknownBlockType _exposureStateChangeBlock;
    double _visibilityFactor;
    double _minimumVisibleY;
    double _maximumVisibleY;
    long long _lastObservedVisibilityState;
}

+ (id)exposureTrackingWithComponent:(id)arg1 exposureStateChangeBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) long long lastObservedVisibilityState; // @synthesize lastObservedVisibilityState=_lastObservedVisibilityState;
@property(nonatomic) double maximumVisibleY; // @synthesize maximumVisibleY=_maximumVisibleY;
@property(nonatomic) double minimumVisibleY; // @synthesize minimumVisibleY=_minimumVisibleY;
@property(readonly, nonatomic) double visibilityFactor; // @synthesize visibilityFactor=_visibilityFactor;
@property(readonly, copy, nonatomic) CDUnknownBlockType exposureStateChangeBlock; // @synthesize exposureStateChangeBlock=_exposureStateChangeBlock;
@property(readonly, nonatomic) __weak SXComponentView *componentView; // @synthesize componentView=_componentView;
- (void).cxx_destruct;
- (void)calculateVisibilityFactor;
- (id)initWithComponent:(id)arg1 exposureStateChangeBlock:(CDUnknownBlockType)arg2;

@end

