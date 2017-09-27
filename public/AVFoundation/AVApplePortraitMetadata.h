//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class AVApplePortraitMetadataInternal, NSData, NSIndexSet;

@interface AVApplePortraitMetadata : NSObject <NSSecureCoding>
{
    AVApplePortraitMetadataInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) struct CGRect focusRectangle;
@property(readonly) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property(readonly) NSData *faceObservationsData;
@property(readonly) int faceOrientation;
@property(readonly) float luminanceNoiseAmplitude;
@property(readonly) float apertureFocalRatio;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithInternal:(id)arg1;
- (id)initWithPortraitMetadataDictionary:(id)arg1;

@end

