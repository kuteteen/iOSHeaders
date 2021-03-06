//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface LightingFacePoints : NSObject
{
    struct CGRect faceRect;
}

@property struct CGRect faceRect; // @synthesize faceRect;
- (id)initWithFaceLandmarkDictionary:(id)arg1 forImageRect:(struct CGRect)arg2;
- (float)faceWidth;
- (float)faceHeight;
- (struct CGPoint *)noseStrobe;
- (struct CGPoint *)leftNose;
- (struct CGPoint *)rightNose;
- (struct CGPoint)centerChin;
- (struct CGPoint)bottomShadow;
- (struct CGPoint)centerNose;
- (struct CGPoint)rightEye;
- (struct CGPoint)leftEye;
- (struct CGPoint *)leftContour;
- (struct CGPoint *)rightContour;
- (struct CGPoint *)leftKickLights;
- (struct CGPoint *)rightKickLights;

@end

