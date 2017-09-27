//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class MTLumaDodgePillSettings, NSMutableArray, NSString;

@interface MTLumaDodgePillView : UIView <CAAnimationDelegate>
{
    long long _style;
    MTLumaDodgePillSettings *_settings;
    id <MTLumaDodgePillBackgroundLuminanceObserver> _backgroundLumninanceObserver;
    long long _backgroundLuminance;
    long long _backgroundLuminanceBias;
    double _luma;
    _Bool _lumaIsValid;
    unsigned int _bounceAnimationsInFlight;
    NSMutableArray *_bounceAnimationKeys;
}

+ (struct CGSize)suggestedSizeForContentWidth:(double)arg1;
+ (double)suggestedEdgeSpacing;
+ (_Bool)supportsBackgroundLuminanceObserving;
+ (Class)layerClass;
+ (void)initialize;
@property(nonatomic) long long backgroundLuminanceBias; // @synthesize backgroundLuminanceBias=_backgroundLuminanceBias;
@property(readonly, nonatomic) long long backgroundLuminance; // @synthesize backgroundLuminance=_backgroundLuminance;
@property(nonatomic) __weak id <MTLumaDodgePillBackgroundLuminanceObserver> backgroundLumninanceObserver; // @synthesize backgroundLumninanceObserver=_backgroundLumninanceObserver;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)bounce;
- (void)resetBackgroundLuminanceHysteresis;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(readonly, copy) NSString *description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_shouldAnimatePropertyAdditivelyWithKey:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateStyle;
- (id)_styleSettings;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

