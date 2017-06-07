//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAsset.h>

#import <MediaMiningKit/CLSInvestigationItem-Protocol.h>
#import <MediaMiningKit/CLSSnapshotSupportProtocol-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDateComponents, NSSet, NSString;

@interface PHAsset (Clouseau) <CLSInvestigationItem, CLSSnapshotSupportProtocol>
+ (id)clsAllAssetsFromFetchResult:(id)arg1 prefetchPersons:(_Bool)arg2 prefetchPersonCount:(_Bool)arg3 prefetchScenes:(_Bool)arg4 prefetchMediaAnalyses:(_Bool)arg5;
+ (void)prefetchPersonsForFetchedAssets:(id)arg1 orFetchResult:(id)arg2;
+ (double)scoreForAsset:(id)arg1 withContext:(id)arg2;
+ (_Bool)isUtilityForAsset:(id)arg1;
+ (id)contextForItems:(id)arg1;
+ (float)clsSharpnessScoreThresholdToNotBeBlurry;
- (struct CGImage *)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(_Bool)arg2 networkAllowed:(_Bool)arg3;
- (id)_256SpecificAssetResource;
- (id)_imageDataForAssetResource:(id)arg1 networkAccessAllowed:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSDate *localDate;
@property(readonly, nonatomic) NSDateComponents *dateComponents;
@property(readonly, nonatomic) NSDate *universalDate;
- (double)scoreWithContext:(id)arg1;
@property(readonly, nonatomic) double clsContentScore;
@property(readonly, nonatomic) _Bool isScreenshot;
@property(readonly, nonatomic) _Bool isUtility;
- (_Bool)isSubtype:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool clsIsHDR;
@property(readonly, nonatomic) _Bool clsIsSDOF;
- (_Bool)isBlurryForcingAnalysisIfNeeded;
@property(readonly, nonatomic) _Bool isBlurry;
- (id)clsUnprefetchedSceneClassifications;
- (void)clsSetSceneClassifications:(id)arg1;
- (_Bool)clsSceneClassificationsArePrefetched;
@property(readonly, copy, nonatomic) NSSet *clsSceneClassifications;
@property(readonly, nonatomic) NSData *clsDistanceIdentity;
@property(readonly, nonatomic) long long clsShareCount;
@property(readonly, nonatomic) long long clsPlayCount;
@property(readonly, nonatomic) long long clsViewCount;
- (unsigned long long)facesCount;
@property(readonly, nonatomic) NSArray *peopleNames;
@property(readonly, nonatomic) NSDate *date;
- (void)_clsSetVideoScore:(float)arg1;
- (float)_clsUnprefetchedVideoScore;
- (float)clsVideoScore;
- (_Bool)hasSharpnessScore;
- (void)_clsSetSharpnessScore:(float)arg1;
- (float)_clsUnprefetchedSharpnessScore:(_Bool)arg1;
- (float)_clsSharpnessScore:(_Bool)arg1;
- (float)clsSharpnessScore;
- (_Bool)clsMediaAnalysisIsPrefetched;
- (void)clsSetPeopleCount:(id)arg1;
- (_Bool)clsPeopleCountIsPrefetched;
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
@property(readonly, nonatomic) NSArray *clsUnprefetchedPeopleNames;
- (void)clsSetPeopleNames:(id)arg1;
- (_Bool)clsPeopleNamesArePrefetched;
@property(readonly, nonatomic) NSArray *clsPeopleNames;
@property(readonly, nonatomic) CLLocation *clsLocation;
@property(readonly, nonatomic) NSDate *clsDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly) Class superclass;
@end
