//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UILegacyEffectConverter : NSObject
{
}

+ (id)sharedConverter;
- (void)applyVibrancyConfig:(id)arg1 toEffectNode:(id)arg2;
- (void)applyBackdropSettings:(id)arg1 toEffectNode:(id)arg2;
- (id)vibrancyConfigForReducedTransperancyVibrancyStyle:(long long)arg1;
- (id)vibrancyConfigForLowQualityVibrancyStyle:(long long)arg1;
- (id)vibrancyConfigForHighQualityVibrancyStyle:(long long)arg1;
- (id)backdropSettingsForBlurStyle:(long long)arg1;

@end

