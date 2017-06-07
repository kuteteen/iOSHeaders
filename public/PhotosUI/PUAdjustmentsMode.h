//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PLPhotoEditMutableModel, PUPhotoEditValuesCalculator, UIImage;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsMode : NSObject
{
    _Bool _toggleable;
    _Bool _useAccurateStatistics;
    PLPhotoEditMutableModel *_photoEditModel;
    PUPhotoEditValuesCalculator *_valuesCalculator;
    PUAdjustmentsMode *_supermode;
    NSArray *_submodes;
    long long __modeType;
}

+ (id)newVisibleModesWithPhotoEditModel:(id)arg1 valuesCalculator:(id)arg2;
@property(readonly, nonatomic) long long _modeType; // @synthesize _modeType=__modeType;
@property(nonatomic) _Bool useAccurateStatistics; // @synthesize useAccurateStatistics=_useAccurateStatistics;
@property(readonly, nonatomic, getter=isToggleable) _Bool toggleable; // @synthesize toggleable=_toggleable;
@property(copy, nonatomic) NSArray *submodes; // @synthesize submodes=_submodes;
@property(nonatomic) __weak PUAdjustmentsMode *supermode; // @synthesize supermode=_supermode;
@property(readonly, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator; // @synthesize valuesCalculator=_valuesCalculator;
@property(readonly, nonatomic) PLPhotoEditMutableModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
- (void).cxx_destruct;
- (void)_ensureStatisticsAreReady;
- (_Bool)_needsStatistics;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)copyLevelsFromModel:(id)arg1;
- (_Bool)levelsAreEqualInModel:(id)arg1;
- (void)_setRelativeLevel:(double)arg1;
- (void)setAbsoluteLevel:(double)arg1 forRenderer:(id)arg2;
- (double)_relativeLevelInModel:(id)arg1;
- (double)_relativeLevel;
- (double)absoluteLevelForRenderer:(id)arg1;
- (double)_referenceLevelOfType:(long long)arg1;
- (double)baseLevelForRenderer:(id)arg1;
- (double)maximumLevel;
- (double)minimumLevel;
- (double)identityLevel;
@property(readonly, nonatomic) long long sliderStyle;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)description;
- (id)adjustmentsModeWithModel:(id)arg1;
- (id)initWithModeType:(long long)arg1 toggleable:(_Bool)arg2 photoEditModel:(id)arg3 valuesCalculator:(id)arg4;
- (id)initWithModeType:(long long)arg1 photoEditModel:(id)arg2 valuesCalculator:(id)arg3;

@end
