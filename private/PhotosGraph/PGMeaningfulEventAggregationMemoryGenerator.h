//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSArray, NSDate;

@interface PGMeaningfulEventAggregationMemoryGenerator : PGFeaturedMemoryGenerator
{
    unsigned long long _numberOfUntimelyRejects;
    unsigned long long _extendedMeaning;
    NSArray *_graphRequiredTraitsArray;
    NSDate *_lowerBoundLocalDate;
    unsigned long long _eventType;
    unsigned long long _meaning;
}

+ (id)_mostSpecificLabelForMeaning:(unsigned long long)arg1;
@property(nonatomic) unsigned long long meaning; // @synthesize meaning=_meaning;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSDate *lowerBoundLocalDate; // @synthesize lowerBoundLocalDate=_lowerBoundLocalDate;
- (void).cxx_destruct;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forAreaNode:(id)arg3;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forCityNode:(id)arg3;
- (id)_filterAssets:(id)arg1 withPositiveLocations:(id)arg2 negativeLocations:(id)arg3 maximumDistance:(double)arg4;
- (id)_filterAssets:(id)arg1 withLocation:(id)arg2;
- (_Bool)_computeRelevantAssetsForPotentialMemory:(id)arg1;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_expandedPotentialMemoriesFromPotentialMemory:(id)arg1;
- (id)_potentialOverTheYearsMemoriesForMeaning:(unsigned long long)arg1;
- (_Bool)_canMakeMemoryWithCollectionNodes:(id)arg1 forMeaning:(unsigned long long)arg2 isOverTheYears:(_Bool)arg3;
- (id)_stringForExtendedMeaning:(unsigned long long)arg1;
- (_Bool)_supportsAggregationsForMeaning:(unsigned long long)arg1 primaryFeatureType:(unsigned long long)arg2 secondaryFeatureType:(unsigned long long)arg3;
- (unsigned long long)_extendedMeaningForActivityCollection:(id)arg1;
- (unsigned long long)_extendedMeaningForRestaurantCollection:(id)arg1;
- (unsigned long long)_extendedMeaningForMeaning:(unsigned long long)arg1 collectionNode:(id)arg2;
- (id)_extraFeatureNodesForCollectionNode:(id)arg1 meaning:(unsigned long long)arg2 featureType:(unsigned long long)arg3;
- (id)_nodesForFeaturesOfType:(unsigned long long)arg1 forCollectionNode:(id)arg2;

@end

