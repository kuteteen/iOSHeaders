//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableIndexSet, NSOrderedSet, SCNAuthoringEnvironment, SCNNode;

__attribute__((visibility("hidden")))
@interface SCNManipulator : NSObject
{
    SCNAuthoringEnvironment *_authoringEnvironment;
    NSOrderedSet *_targets;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _xAxisToZAxisTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _yAxisToZAxisTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _xyPlaneToYZPlaneTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _xyPlaneToXZPlaneTransform
    // Error parsing type: (?="axisMove"{?="selectedAxis"S"originalPosition""axisDirection""mouseDeltaVector"}"planeMove"{?="selectedPlane"S"originalPosition""planeNormal""pointInPlane""mouseDeltaVector"}"axisRotate"{?="selectedAxis"S"originalMouseLocation"{CGPoint="x"d"y"d}"rotationSign"f"originalRotation"{__C3DQuaternion="x"f"y"f"z"f"s"f}}), name: _actionData
    _Bool _isMouseDown;
    _Bool _readonly;
    unsigned short _action;
    struct {
        void *positions;
        struct __C3DQuaternion *orientations;
        struct SCNMatrix4 *originalLocalMatrix;
    } _originalData;
    unsigned int _originalDataCount;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _worldInitialMatrix
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _worldMatrix
    long long _snapToAlignCount;
    CDStruct_62d14fc2 *_snapToAlignOnX;
    CDStruct_62d14fc2 *_snapToAlignOnY;
    CDStruct_62d14fc2 *_snapToAlignOnZ;
    NSMutableIndexSet *_snapXIndexes;
    NSMutableIndexSet *_snapYIndexes;
    NSMutableIndexSet *_snapZIndexes;
    long long _xAlignment;
    long long _yAlignment;
    long long _zAlignment;
    NSOrderedSet *_cloneSet;
    _Bool _cloning;
}

@property(nonatomic) long long zAlignment; // @synthesize zAlignment=_zAlignment;
@property(nonatomic) long long yAlignment; // @synthesize yAlignment=_yAlignment;
@property(nonatomic) long long xAlignment; // @synthesize xAlignment=_xAlignment;
@property(nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
-     // Error parsing type: 104@0:816{SCNVector3=fff}32d44B525672^B88^q96, name: _snapPositionToAlign:original:unit:axisMove:rayStart:rayDir:didSnap:snapIndexes:
- (void)prepareSnapToAlignDataIfNeeded;
- (void)prepareSnapToAlignData;
- (void)_prepareSnapToAlignData:(unsigned short)arg1 minOffset:maxOffset: /* Error: Ran out of types for this method. */;
- (const CDStruct_62d14fc2 *)snapInfoAtIndex:(unsigned long long)arg1 axis:(long long)arg2;
- (id)snapGuideIndexesOnAxis:(long long)arg1;
- (void)_updateCloneStateWithEvent:(CDStruct_edec59f9)arg1;
- (id)setupClones;
- (void)validateClones;
- (void)addClonesToScene;
- (void)removeClonesFromScene;
- (id)scene;
- (_Bool)mouseUp:(CDStruct_edec59f9)arg1;
- (_Bool)mouseDown:(CDStruct_edec59f9)arg1;
- (_Bool)mouseDragged:(CDStruct_edec59f9)arg1;
- (void)clearSnapIndexes;
- (_Bool)_applyWithEvent:(CDStruct_edec59f9)arg1;
- (void)_deleteOriginalData;
- (void)_saveOriginalData;
- (void)updateItemsRotation:(struct __C3DQuaternion)arg1;
- (void)updateItemsPosition;
- (_Bool)mouseMoved:(CDStruct_edec59f9)arg1;
- (void)draw;
- (_Bool)isDragging;
- (long long)effectiveEditingSpace;
- (id)copy;
- (void)dealloc;
- (id)init;
@property(readonly) struct SCNMatrix4 transform;
- (void)_setAuthoringEnvironment:(id)arg1;
@property(readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property(retain, nonatomic) SCNNode *target;
@property(retain, nonatomic) NSOrderedSet *targets;

@end

