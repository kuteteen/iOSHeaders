//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SGRecordId;

@protocol _SGDSuggestManagerMetricsProtocol
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(NSString *)arg1;
- (void)logMetricContactCreated:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricSuggestedContactDetailShown:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricSuggestedContactDetailUsed:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricContactSearchResultSelected:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricAutocompleteUserSelectedRecordId:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
@end
