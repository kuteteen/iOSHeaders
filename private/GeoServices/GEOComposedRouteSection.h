//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRouteLeg, GEOComposedRouteStep;

@interface GEOComposedRouteSection : NSObject
{
    unsigned int _startPointIndex;
    unsigned int _pointCount;
    CDStruct_6e3f967a *_points;
    int _transportType;
    GEOComposedRouteLeg *_composedRouteLeg;
    GEOComposedRouteStep *_composedRouteStep;
    unsigned long long _composedRouteLegIndex;
    CDStruct_02837cd9 _bounds;
    CDStruct_02837cd9 _overlayBounds;
    unsigned long long _finalStepIndex;
    double _startDistance;
    double _lengthScaleFactor;
}

@property(nonatomic) double lengthScaleFactor; // @synthesize lengthScaleFactor=_lengthScaleFactor;
@property(readonly, nonatomic) double startDistance; // @synthesize startDistance=_startDistance;
@property(readonly, nonatomic) unsigned long long finalStepIndex; // @synthesize finalStepIndex=_finalStepIndex;
@property(readonly, nonatomic) CDStruct_90e2a262 bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) unsigned long long composedRouteLegIndex; // @synthesize composedRouteLegIndex=_composedRouteLegIndex;
@property(readonly, nonatomic) __weak GEOComposedRouteStep *composedRouteStep; // @synthesize composedRouteStep=_composedRouteStep;
@property(readonly, nonatomic) __weak GEOComposedRouteLeg *composedRouteLeg; // @synthesize composedRouteLeg=_composedRouteLeg;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) CDStruct_6e3f967a *points; // @synthesize points=_points;
@property(readonly, nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) unsigned int startPointIndex; // @synthesize startPointIndex=_startPointIndex;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
- (_Bool)isTransfer;
@property(readonly, nonatomic) unsigned int endPointIndex;
- (void)_initStepForRoute:(id)arg1;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 transportType:(int)arg4 finalStepIndex:(unsigned long long)arg5 fallbackStartCoordinate:(CDStruct_c3b9c2ee)arg6 fallbackEndCoordinate:(CDStruct_c3b9c2ee)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 bounds:(CDStruct_90e2a262)arg4 transportType:(int)arg5 finalStepIndex:(unsigned long long)arg6 startDistance:(double)arg7 lengthScaleFactor:(double)arg8;

@end

