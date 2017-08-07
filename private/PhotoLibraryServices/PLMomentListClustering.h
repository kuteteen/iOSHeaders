//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSMapTable, NSMutableDictionary, NSMutableSet;

@interface PLMomentListClustering : NSObject
{
    _Bool _allowsCollectionInfluencing;
    _Bool _allowsCollectionAccumulation;
    _Bool _allowsYearAccumulation;
    double __maximumTimeThreshold;
    double __maximumTimeThresholdBetweenMomentsWithLocation;
    double __maximumTimeThresholdFromPeakMatch;
    double __maximumTimeThresholdBetweenMomentsWithoutLocation;
    double __maximumTimeThresholdFromPeakWithoutLocation;
    double __maximumDistanceThresholdBetweenMoments;
    double __maximumDistanceThresholdFromPeak;
    double __maximumDistanceBetweenAccumulatedMoments;
    unsigned long long __defaultNumberOfAssetsRequiredForSeeding;
    unsigned long long __defaultMaxFailuresForExpansion;
    double __megamomentAccumulationMaximumTimeThreshold;
    unsigned long long __minimumNumberOfAssetsToAvoidMegamomentAccumulation;
    unsigned long long __minimumNumberOfAssetsToAvoidYearAccumulation;
    NSMutableDictionary *__clustersByYearAndMonth;
    NSMutableSet *__visitedMoments;
    NSMapTable *__cachedLocationsByMoment;
    NSMutableDictionary *__cachedCollectionTagByMomentID;
    NSDateFormatter *__debugDateFormatter;
}

+ (double)maximumTimeThresholdBetweenMoments;
@property(readonly, nonatomic) NSDateFormatter *_debugDateFormatter; // @synthesize _debugDateFormatter=__debugDateFormatter;
@property(retain, nonatomic, setter=_setCachedCollectionTagByMomentID:) NSMutableDictionary *_cachedCollectionTagByMomentID; // @synthesize _cachedCollectionTagByMomentID=__cachedCollectionTagByMomentID;
@property(retain, nonatomic, setter=_setCachedLocationsByMoment:) NSMapTable *_cachedLocationsByMoment; // @synthesize _cachedLocationsByMoment=__cachedLocationsByMoment;
@property(readonly, nonatomic) NSMutableSet *_visitedMoments; // @synthesize _visitedMoments=__visitedMoments;
@property(readonly, nonatomic) NSMutableDictionary *_clustersByYearAndMonth; // @synthesize _clustersByYearAndMonth=__clustersByYearAndMonth;
@property(readonly, nonatomic) unsigned long long _minimumNumberOfAssetsToAvoidYearAccumulation; // @synthesize _minimumNumberOfAssetsToAvoidYearAccumulation=__minimumNumberOfAssetsToAvoidYearAccumulation;
@property(readonly, nonatomic) unsigned long long _minimumNumberOfAssetsToAvoidMegamomentAccumulation; // @synthesize _minimumNumberOfAssetsToAvoidMegamomentAccumulation=__minimumNumberOfAssetsToAvoidMegamomentAccumulation;
@property(readonly, nonatomic) double _megamomentAccumulationMaximumTimeThreshold; // @synthesize _megamomentAccumulationMaximumTimeThreshold=__megamomentAccumulationMaximumTimeThreshold;
@property(readonly, nonatomic) unsigned long long _defaultMaxFailuresForExpansion; // @synthesize _defaultMaxFailuresForExpansion=__defaultMaxFailuresForExpansion;
@property(readonly, nonatomic) unsigned long long _defaultNumberOfAssetsRequiredForSeeding; // @synthesize _defaultNumberOfAssetsRequiredForSeeding=__defaultNumberOfAssetsRequiredForSeeding;
@property(readonly, nonatomic) double _maximumDistanceBetweenAccumulatedMoments; // @synthesize _maximumDistanceBetweenAccumulatedMoments=__maximumDistanceBetweenAccumulatedMoments;
@property(readonly, nonatomic) double _maximumDistanceThresholdFromPeak; // @synthesize _maximumDistanceThresholdFromPeak=__maximumDistanceThresholdFromPeak;
@property(readonly, nonatomic) double _maximumDistanceThresholdBetweenMoments; // @synthesize _maximumDistanceThresholdBetweenMoments=__maximumDistanceThresholdBetweenMoments;
@property(readonly, nonatomic) double _maximumTimeThresholdFromPeakWithoutLocation; // @synthesize _maximumTimeThresholdFromPeakWithoutLocation=__maximumTimeThresholdFromPeakWithoutLocation;
@property(readonly, nonatomic) double _maximumTimeThresholdBetweenMomentsWithoutLocation; // @synthesize _maximumTimeThresholdBetweenMomentsWithoutLocation=__maximumTimeThresholdBetweenMomentsWithoutLocation;
@property(readonly, nonatomic) double _maximumTimeThresholdFromPeakMatch; // @synthesize _maximumTimeThresholdFromPeakMatch=__maximumTimeThresholdFromPeakMatch;
@property(readonly, nonatomic) double _maximumTimeThresholdBetweenMomentsWithLocation; // @synthesize _maximumTimeThresholdBetweenMomentsWithLocation=__maximumTimeThresholdBetweenMomentsWithLocation;
@property(readonly, nonatomic) double _maximumTimeThreshold; // @synthesize _maximumTimeThreshold=__maximumTimeThreshold;
@property(nonatomic) _Bool allowsYearAccumulation; // @synthesize allowsYearAccumulation=_allowsYearAccumulation;
@property(nonatomic) _Bool allowsCollectionAccumulation; // @synthesize allowsCollectionAccumulation=_allowsCollectionAccumulation;
@property(nonatomic) _Bool allowsCollectionInfluencing; // @synthesize allowsCollectionInfluencing=_allowsCollectionInfluencing;
- (id)generateYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManager:(id)arg4;
- (id)generateMegaMomentListsForMoments:(id)arg1 inManager:(id)arg2;
- (id)_cachedLocationForMoment:(id)arg1;
- (void)_verifyMomentsAreSorted:(id)arg1;
- (void)_createMomentListTagCacheForMoments:(id)arg1;
- (void)_createMomentListClusterCacheForMoments:(id)arg1;
- (void)_updateMomentList:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3;
- (_Bool)_updateMegaMomentList:(id)arg1 withRejectedMoments:(id)arg2;
- (unsigned long long)_expandMegaMomentList:(id)arg1 fromPeakMoment:(id)arg2 towardMoments:(id)arg3 forwards:(_Bool)arg4 outRejectedMoments:(id)arg5;
- (_Bool)_isDateInMoment:(id)arg1 inDateRangeOfLastMoment:(id)arg2 withDelta:(double)arg3 forwards:(_Bool)arg4;
- (_Bool)_shouldMegaMomentList:(id)arg1 includeMoment:(id)arg2 withPeakMoment:(id)arg3 recentMoment:(id)arg4 recentMomentWithLocation:(id)arg5 forwards:(_Bool)arg6 haveRejectedMomentsForDistance:(_Bool)arg7;
- (id)_insertNewMegaMomentListWithMoment:(id)arg1 inManager:(id)arg2;
- (void)dealloc;
- (id)init;

@end

