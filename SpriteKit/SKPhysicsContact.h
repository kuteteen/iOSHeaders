//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKPhysicsBody;

@interface SKPhysicsContact : NSObject
{
    SKPhysicsBody *_bodyA;
    SKPhysicsBody *_bodyB;
    double _collisionImpulse;
    struct CGPoint _contactPoint;
    struct CGVector _contactNormal;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double collisionImpulse; // @synthesize collisionImpulse=_collisionImpulse;
@property(readonly, nonatomic) struct CGVector contactNormal; // @synthesize contactNormal=_contactNormal;
@property(readonly, nonatomic) struct CGPoint contactPoint; // @synthesize contactPoint=_contactPoint;
@property(readonly, nonatomic) SKPhysicsBody *bodyB; // @synthesize bodyB=_bodyB;
@property(readonly, nonatomic) SKPhysicsBody *bodyA; // @synthesize bodyA=_bodyA;
- (void).cxx_destruct;

@end

