//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKLabelNavFeature-Protocol.h>

@class NSString, VKLabelNavRoadLabel, VKTrafficCameraFeature;

__attribute__((visibility("hidden")))
@interface VKLabelNavTrafficCamera : NSObject <VKLabelNavFeature>
{
    VKLabelNavRoadLabel *_roadLabel;
    _Bool _isAwayFromRoute;
    _Bool _isOnRoute;
    struct PolylineCoordinate _routeOffset;
    Mercator2_57ec32b6 _displayMercatorPoint;
    Mercator2_57ec32b6 _previousMercatorPoint;
    Mercator2_57ec32b6 _nextMercatorPoint;
    VKTrafficCameraFeature *_trafficCamera;
    unsigned char _labelNavMode;
    struct shared_ptr<md::LabelStyle> _labelStyle;
    _Bool _isPicked;
    _Bool _shouldRestyleFeature;
    unsigned char _tailDirection;
    unsigned char _iconState;
}

@property(readonly, nonatomic) unsigned char labelNavMode; // @synthesize labelNavMode=_labelNavMode;
@property(readonly, nonatomic) unsigned char currentIconState; // @synthesize currentIconState=_iconState;
@property(nonatomic) unsigned char tailDirection; // @synthesize tailDirection=_tailDirection;
@property(nonatomic) _Bool shouldRestyleFeature; // @synthesize shouldRestyleFeature=_shouldRestyleFeature;
@property(readonly, nonatomic) VKTrafficCameraFeature *trafficCamera; // @synthesize trafficCamera=_trafficCamera;
@property(readonly, nonatomic) VKLabelNavRoadLabel *label; // @synthesize label=_roadLabel;
@property(readonly, nonatomic) Mercator2_57ec32b6 previousMercatorPoint; // @synthesize previousMercatorPoint=_previousMercatorPoint;
@property(readonly, nonatomic) Mercator2_57ec32b6 nextMercatorPoint; // @synthesize nextMercatorPoint=_nextMercatorPoint;
@property(nonatomic) Mercator2_57ec32b6 displayMercatorPoint; // @synthesize displayMercatorPoint=_displayMercatorPoint;
@property(readonly, nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) _Bool isAwayFromRoute; // @synthesize isAwayFromRoute=_isAwayFromRoute;
@property(readonly, nonatomic) _Bool isOnRoute; // @synthesize isOnRoute=_isOnRoute;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)hasLabelWithArtwork;
@property(readonly, nonatomic) _Bool isTrafficCameraFeature;
@property(readonly, nonatomic) _Bool isEtaFeature;
@property(nonatomic) _Bool isPicked; // @synthesize isPicked=_isPicked;
- (_Bool)isCallout;
- (_Bool)isPOI;
@property(readonly, nonatomic) long long intraRoadPriority;
@property(readonly, nonatomic) _Bool isGuidanceStepStart;
@property(readonly, nonatomic) _Bool isInGuidance;
@property(readonly, nonatomic) _Bool isStartOfRoadName;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isRamp;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)swapExternalFeature:(id)arg1;
@property(readonly, nonatomic) long long navState;
- (void)recreateRoadSignWithNavContext:(struct NavContext *)arg1;
@property(readonly, nonatomic) unsigned char tailOrientation;
@property(readonly, nonatomic) Mercator2_57ec32b6 featureMercatorPoint;
@property(readonly, nonatomic) unsigned char expectedIconState;
- (void)_clearLabel;
- (void)dealloc;
- (id)initWithTrafficCamera:(id)arg1 previousMercatorPoint:(const Mercator2_57ec32b6 *)arg2 nextMercatorPoint:(const Mercator2_57ec32b6 *)arg3;

@end

