//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFeedbackGenerator.h>

@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator
{
}

+ (id)impactBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (Class)_configurationClass;
- (id)_stats_key;
- (void)impactOccurred;
- (void)_impactOccurredWithIntensity:(double)arg1;
@property(readonly, nonatomic, getter=_impactConfiguration) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;
- (id)initWithStyle:(long long)arg1;

@end

