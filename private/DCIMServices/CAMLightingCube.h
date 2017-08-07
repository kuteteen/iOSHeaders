//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMLightingCube : NSObject
{
    // Error parsing type: [8], name: _world
    // Error parsing type: [6], name: _normals
    struct CGPoint _screen[8];
    long long _points[8];
    long long _planes[6];
}

- (double)intensityForPlane:(long long)arg1;
- (const struct CGPath *)pathForPlane:(long long)arg1 size:(struct CGSize)arg2;
- (void)points:(struct CGPoint (*)[4])arg1 forPlane:(long long)arg2 size:(struct CGSize)arg3;
- (const struct CGPath *)centerPathWithSize:(struct CGSize)arg1;
- (const struct CGPath *)centerShadowPathWithSize:(struct CGSize)arg1 width:(double)arg2;
- (const struct CGPath *)pathForOutlineWithSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (void)points:(struct CGPoint (*)[6])arg1 forOutlineWithSize:(struct CGSize)arg2;
- (id)initWithRotationAngle:(double)arg1;

@end

