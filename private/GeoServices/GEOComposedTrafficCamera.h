//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedEnrouteNotice.h>

@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice
{
    GEOTrafficCamera *_trafficCamera;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int cameraPriority;
@property(readonly, nonatomic) _Bool hasCameraPriority;
@property(readonly, nonatomic) double speedThreshold;
@property(readonly, nonatomic) _Bool hasSpeedThreshold;
@property(readonly, nonatomic) NSString *speedLimitText;
@property(readonly, nonatomic) _Bool hasSpeedLimitText;
@property(readonly, nonatomic) unsigned int highlightDistance;
@property(readonly, nonatomic) int type;
- (id)detailFormatForLocation:(id)arg1;
- (id)titleFormatForLocation:(id)arg1;
- (id)position;
- (id)description;
- (id)initWithEnrouteNotice:(id)arg1 trafficCamera:(id)arg2 onRoute:(id)arg3;

@end

