//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCNActionTargetState : NSObject
{
    _Bool usesEuler;
    float opacity;
    struct SCNVector3 position;
    struct SCNVector3 euler;
    struct SCNVector3 scale;
    struct SCNVector4 rotation;
}

@property(nonatomic) float opacity; // @synthesize opacity;
@property(nonatomic) _Bool usesEuler; // @synthesize usesEuler;
@property(nonatomic) struct SCNVector3 scale; // @synthesize scale;
@property(nonatomic) struct SCNVector4 rotation; // @synthesize rotation;
@property(nonatomic) struct SCNVector3 euler; // @synthesize euler;
@property(nonatomic) struct SCNVector3 position; // @synthesize position;

@end

