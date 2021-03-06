//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARAnchor.h>

@class ARPatchGrid, ARPlaneGeometry;

@interface ARPlaneAnchor : ARAnchor
{
    long long _alignment;
    ARPlaneGeometry *_geometry;
    ARPatchGrid *_gridExtent;
    long long _worldAlignmentRotation;
    long long _activePlaneID;
    long long _originalPlaneID;
    // Error parsing type: , name: _center
    // Error parsing type: , name: _extent
    // Error parsing type: {?="columns"[4]}, name: _visionTransform
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long originalPlaneID; // @synthesize originalPlaneID=_originalPlaneID;
@property(nonatomic) long long activePlaneID; // @synthesize activePlaneID=_activePlaneID;
@property(nonatomic) long long worldAlignmentRotation; // @synthesize worldAlignmentRotation=_worldAlignmentRotation;
// Error parsing type for property visionTransform:
// Property attributes: T{?=[4]},N,V_visionTransform

@property(retain, nonatomic) ARPatchGrid *gridExtent; // @synthesize gridExtent=_gridExtent;
@property(retain, nonatomic) ARPlaneGeometry *geometry; // @synthesize geometry=_geometry;
// Error parsing type for property extent:
// Property attributes: T,N,V_extent

// Error parsing type for property center:
// Property attributes: T,N,V_center

@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)_description:(_Bool)arg1;
- (id)_hitTestFromOrigin:(_Bool)arg1 withDirection:(_Bool)arg2 usingExtent:usingGeometry: /* Error: Ran out of types for this method. */;
-     // Error parsing type: @96@0:8@16{?=[4]}24q88, name: initWithIdentifier:transform:alignment:

@end

