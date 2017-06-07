//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class ARAnchor, ARCamera, ARLightEstimate, ARPlaneData, ARPointCloud, ARTrackingErrorData, NSArray;

@interface ARFrame : NSObject <NSCopying>
{
    ARPlaneData *_cachedHorizontalPlaneData;
    ARPlaneData *_cachedVerticalPlaneData;
    double _timestamp;
    struct __CVBuffer *_capturedImage;
    ARCamera *_camera;
    NSArray *_anchors;
    ARLightEstimate *_lightEstimate;
    ARPointCloud *_featurePoints;
    ARPointCloud *_referenceFeaturePoints;
    ARAnchor *_worldOrigin;
    ARTrackingErrorData *_trackingErrorData;
    long long _targetFramesPerSecond;
}

@property(nonatomic) long long targetFramesPerSecond; // @synthesize targetFramesPerSecond=_targetFramesPerSecond;
@property(retain, nonatomic) ARTrackingErrorData *trackingErrorData; // @synthesize trackingErrorData=_trackingErrorData;
@property(retain, nonatomic) ARAnchor *worldOrigin; // @synthesize worldOrigin=_worldOrigin;
@property(retain, nonatomic) ARPointCloud *referenceFeaturePoints; // @synthesize referenceFeaturePoints=_referenceFeaturePoints;
@property(retain, nonatomic) ARPointCloud *featurePoints; // @synthesize featurePoints=_featurePoints;
@property(copy, nonatomic) ARLightEstimate *lightEstimate; // @synthesize lightEstimate=_lightEstimate;
@property(copy, nonatomic) NSArray *anchors; // @synthesize anchors=_anchors;
@property(readonly, copy, nonatomic) ARCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) struct __CVBuffer *capturedImage; // @synthesize capturedImage=_capturedImage;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_hitTestFromOrigin:(unsigned long long)arg1 withDirection:types: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) ARPointCloud *rawFeaturePoints;
- (struct CGAffineTransform)displayTransformWithViewportSize:(struct CGSize)arg1 orientation:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithCamera:(id)arg1 timestamp:(double)arg2;

@end

