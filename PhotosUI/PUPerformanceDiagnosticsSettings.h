//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PUPerformanceDiagnosticsSettings : PXSettings
{
    _Bool _shouldTracePerformance;
    double _scrollTestRampUpDuration;
    double _scrollTestCPUWarmupDuration;
    double _scrollTestCPUSustainDuration;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) double scrollTestCPUSustainDuration; // @synthesize scrollTestCPUSustainDuration=_scrollTestCPUSustainDuration;
@property(nonatomic) double scrollTestCPUWarmupDuration; // @synthesize scrollTestCPUWarmupDuration=_scrollTestCPUWarmupDuration;
@property(nonatomic) double scrollTestRampUpDuration; // @synthesize scrollTestRampUpDuration=_scrollTestRampUpDuration;
@property(nonatomic) _Bool shouldTracePerformance; // @synthesize shouldTracePerformance=_shouldTracePerformance;
- (void)setDefaultValues;
- (id)parentSettings;

@end

