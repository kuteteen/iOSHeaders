//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXObservable.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, PLEditSource, PLPhotoEditModel, PUPhotoEditImageValues;

@interface PUPhotoEditValuesCalculator : PXObservable
{
    PUPhotoEditImageValues *_currentImageValues;
    PUPhotoEditImageValues *_initialImageValues;
    PLPhotoEditModel *_photoEditModelForCurrentValues;
    NSObject<OS_dispatch_queue> *_computationQueue;
    NSObject<OS_dispatch_group> *_computingValuesGroup;
    PLEditSource *_editSource;
    PLPhotoEditModel *_photoEditModel;
}

@property(retain, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property(retain, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
- (void).cxx_destruct;
- (void)_ensureInitialImageValuesAreComputed;
- (void)_ensureCurrentImageValuesAreComputed;
- (void)computeAutoEnhanceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
@property(readonly, nonatomic) _Bool hasImageValues;
- (void)precomputeImageValuesWithOptionalCompletion:(CDUnknownBlockType)arg1;
- (void)precomputeImageValuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)precomputeImageValues;
- (_Bool)_imageCurrentValuesCacheIsValid;
- (id)autoCropValuesWithAccuracy:(long long)arg1;
- (double)smartColorAutoSuggestion;
- (double)smartToneAutoSuggestion;
- (id)smartColorStatisticsWithAccuracy:(long long)arg1;
- (id)smartToneStatisticsWithAccuracy:(long long)arg1;
- (id)portraitValuesWithAccuracy:(long long)arg1;
- (id)mutableChangeObject;
- (id)init;

@end

