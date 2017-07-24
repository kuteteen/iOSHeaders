//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PGCurationIndexSetTrait, PGCurationPartOfDayTrait, PGCurationSetTrait, PGGraph;

@interface PGCurationCriteria : NSObject
{
    _Bool _requiresPeople;
    double _minimumAssetsRatio;
    PGCurationIndexSetTrait *_scenesTrait;
    PGCurationPartOfDayTrait *_partOfDayTrait;
    PGGraph *_graph;
    PGCurationSetTrait *_peopleTrait;
}

@property(retain, nonatomic) PGCurationSetTrait *peopleTrait; // @synthesize peopleTrait=_peopleTrait;
@property(nonatomic) _Bool requiresPeople; // @synthesize requiresPeople=_requiresPeople;
@property(readonly, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) PGCurationPartOfDayTrait *partOfDayTrait; // @synthesize partOfDayTrait=_partOfDayTrait;
@property(retain, nonatomic) PGCurationIndexSetTrait *scenesTrait; // @synthesize scenesTrait=_scenesTrait;
@property(readonly, nonatomic) double minimumAssetsRatio; // @synthesize minimumAssetsRatio=_minimumAssetsRatio;
- (void).cxx_destruct;
- (double)_scoreForSceneClassifications:(id)arg1 withScenesTrait:(id)arg2 traitFailed:(_Bool *)arg3;
- (_Bool)isPassingForAsset:(id)arg1 score:(double *)arg2;
- (id)initWithGraph:(id)arg1 minimumAssetsRatio:(double)arg2;

@end
