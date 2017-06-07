//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@class NSString, UIBezierPath, UIFont;

@interface SCNText : SCNGeometry
{
    float _flatness;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    UIBezierPath *_chamferProfile;
    long long _primitiveType;
    id _string;
    UIFont *_font;
    _Bool _wrapped;
    int _alignmentMode;
    int _truncationMode;
    _Bool _useCustomContainerFrame;
    struct CGRect _customContainerFrame;
    _Bool __wantsSeparateGeometryElements;
}

+ (_Bool)supportsSecureCoding;
+ (id)textWithString:(id)arg1 extrusionDepth:(double)arg2;
+ (id)text;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customEncodingOfSCNText:(id)arg1;
- (void)_customDecodingOfSCNText:(id)arg1;
- (void)dealloc;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (CDStruct_8bd95810)params;
@property(copy, nonatomic) UIBezierPath *chamferProfile;
@property(copy, nonatomic) NSString *alignmentMode;
@property(copy, nonatomic) NSString *truncationMode;
@property(nonatomic) struct CGRect containerFrame;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic, getter=isWrapped) _Bool wrapped;
@property(copy, nonatomic) id string;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
@property(nonatomic) double flatness;
@property(nonatomic) double extrusionDepth;
- (void)setDiscretizedStraightLineMaxLength:(double)arg1;
- (double)discretizedStraightLineMaxLength;
@property(nonatomic) double chamferRadius;
- (void)set_wantsSeparateGeometryElements:(_Bool)arg1;
- (_Bool)_wantsSeparateGeometryElements;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyAnimationPathForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
-     // Error parsing type: ^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}}16@0:8, name: __createCFObject
-     // Error parsing type: @24@0:8^{__C3DTextGeometry={__C3DShapeGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}}{?=cfffif^{CGPath}^v^{CGPath}^v}^{__C3DMesh}[16C]}{?=^{__CTFrame}^v^viiBBB{CGRect={CGPoint=dd}{CGSize=dd}}}}16, name: initPresentationTextGeometryWithTextGeometryRef:
-     // Error parsing type: @24@0:8^{__C3DTextGeometry={__C3DShapeGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}}{?=cfffif^{CGPath}^v^{CGPath}^v}^{__C3DMesh}[16C]}{?=^{__CTFrame}^v^viiBBB{CGRect={CGPoint=dd}{CGSize=dd}}}}16, name: initWithTextGeometryRef:
- (id)init;
-     // Error parsing type: v24@0:8^{__C3DTextGeometry={__C3DShapeGeometry={__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}}{?=cfffif^{CGPath}^v^{CGPath}^v}^{__C3DMesh}[16C]}{?=^{__CTFrame}^v^viiBBB{CGRect={CGPoint=dd}{CGSize=dd}}}}16, name: _syncObjCModel:

@end
