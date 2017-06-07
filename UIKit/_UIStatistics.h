//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatistics : NSObject
{
    NSString *_key;
    double _sampleValue;
    NSMutableSet *_children;
    double _sampleRate;
}

+ (unsigned long long)currentTime;
+ (id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3;
+ (id)recentsInputViewNewEntryCount;
+ (id)recentsInputViewItemSelectedCount;
+ (id)recentsInputViewNumberOfItems;
+ (id)recentsInputViewPresentationCount;
+ (id)scrollViewVerticalVelocityInteractive;
+ (id)scrollViewVerticalVelocityNoninteractive;
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1;
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)arg1;
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1;
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1;
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)arg1;
+ (id)feedbackEngineActivationDurationWithSuffix:(id)arg1;
+ (id)feedbackEngineActivationCountWithSuffix:(id)arg1;
+ (id)scrollBounceCount;
+ (id)zoomGestureCount;
+ (id)pinchGestureCount;
+ (id)alertButtonTapCount;
+ (id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2;
+ (id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2;
+ (id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2;
+ (id)scrubberUsageTime;
+ (id)scrubberUsageCount;
+ (id)maxForce;
+ (id)previewInteractionPopForce;
+ (id)previewInteractionPeekForce;
+ (id)previewInteractionAlertPresentationCount;
+ (id)previewInteractionTapCount;
+ (id)previewInteractionPopCount;
+ (id)previewInteractionPeekDuration;
+ (id)previewInteractionPeekCount;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (void).cxx_destruct;
- (id)description;
- (void)_incrementValueBy:(long long)arg1;
- (void)_setValue:(long long)arg1;
- (void)_resetValue;
- (void)_recordDistributionTime:(unsigned long long)arg1;
- (void)_recordDistributionValue:(double)arg1;
- (void)_resetDistributionToValue:(double)arg1;
- (void)_resetDistribution;
- (void)randomizeSampleValue;
- (_Bool)_shouldSample;
- (void)_removeChildStatistic:(id)arg1;
- (void)_addChildStatistic:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (id)_key;
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;
- (id)init;

@end

