//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PGMeaningfulEventLocationMobilityTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait;

@interface PGMeaningfulEventTraits : NSObject
{
    _Bool _debug;
    PGMeaningfulEventSceneSetTrait *_scenesTrait;
    PGMeaningfulEventSetTrait *_roisTrait;
    PGMeaningfulEventSetTrait *_poisTrait;
    PGMeaningfulEventSetTrait *_locationsTrait;
    PGMeaningfulEventSetTrait *_datesTrait;
    PGMeaningfulEventSetTrait *_peopleTrait;
    PGMeaningfulEventNumberTrait *_numberOfPeopleTrait;
    PGMeaningfulEventSetTrait *_socialGroupsTrait;
    PGMeaningfulEventNumberTrait *_minimumDurationTrait;
    PGMeaningfulEventNumberTrait *_maximumDurationTrait;
    PGMeaningfulEventPartOfDayTrait *_partOfDayTrait;
    PGMeaningfulEventLocationMobilityTrait *_locationMobilityTrait;
}

@property(nonatomic, getter=isDebug) _Bool debug; // @synthesize debug=_debug;
@property(retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait; // @synthesize locationMobilityTrait=_locationMobilityTrait;
@property(retain, nonatomic) PGMeaningfulEventPartOfDayTrait *partOfDayTrait; // @synthesize partOfDayTrait=_partOfDayTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait; // @synthesize maximumDurationTrait=_maximumDurationTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait; // @synthesize minimumDurationTrait=_minimumDurationTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *socialGroupsTrait; // @synthesize socialGroupsTrait=_socialGroupsTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait; // @synthesize numberOfPeopleTrait=_numberOfPeopleTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *peopleTrait; // @synthesize peopleTrait=_peopleTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *datesTrait; // @synthesize datesTrait=_datesTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *locationsTrait; // @synthesize locationsTrait=_locationsTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *poisTrait; // @synthesize poisTrait=_poisTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *roisTrait; // @synthesize roisTrait=_roisTrait;
@property(retain, nonatomic) PGMeaningfulEventSceneSetTrait *scenesTrait; // @synthesize scenesTrait=_scenesTrait;
- (void).cxx_destruct;
- (id)_debugDescriptionWithMomentNode:(id)arg1;
- (id)debugDescription;
- (id)init;

@end

