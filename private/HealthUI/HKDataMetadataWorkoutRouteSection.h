//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class HKDataMetadataWorkoutRouteCell, HKLocationFetcher, HKLocationReadings, HKRouteMapGenerator;

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection
{
    HKDataMetadataWorkoutRouteCell *_cell;
    HKLocationReadings *_locationReadings;
    HKLocationFetcher *_locationFetcher;
    HKRouteMapGenerator *_generator;
}

@property(retain, nonatomic) HKRouteMapGenerator *generator; // @synthesize generator=_generator;
@property(retain, nonatomic) HKLocationFetcher *locationFetcher; // @synthesize locationFetcher=_locationFetcher;
@property(readonly, nonatomic) HKLocationReadings *locationReadings; // @synthesize locationReadings=_locationReadings;
@property(retain, nonatomic) HKDataMetadataWorkoutRouteCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)_generateRouteImage;
- (id)initWithLocationReadings:(id)arg1;

@end
