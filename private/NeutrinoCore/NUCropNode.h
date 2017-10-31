//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransformAffine;

@interface NUCropNode : NUTransformNode
{
    _Bool _resetCleanAperture;
    NUImageTransformAffine *_transform;
    CDStruct_996ac03c _cropRect;
}

@property(readonly) _Bool resetCleanAperture; // @synthesize resetCleanAperture=_resetCleanAperture;
@property(retain) NUImageTransformAffine *transform; // @synthesize transform=_transform;
@property CDStruct_996ac03c cropRect; // @synthesize cropRect=_cropRect;
- (void).cxx_destruct;
- (_Bool)canPropagateOriginalDepthData;
- (id)_evaluateDepthData:(out id *)arg1;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_transformWithError:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2 resetCleanAperture:(_Bool)arg3;

@end

