//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNLookAtConstraint : SCNConstraint
{
    SCNNode *_target;
    _Bool _gimbalLockEnabled;
    struct SCNVector3 _targetOffset;
    struct SCNVector3 _upVector;
    struct SCNVector3 _localFront;
}

+ (_Bool)supportsSecureCoding;
+ (id)lookAtConstraintWithTarget:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNLookAtConstraint:(id)arg1;
- (void)_customEncodingOfSCNLookAtConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) struct SCNVector3 localFront;
- (void)setUpVector:(struct SCNVector3)arg1;
- (struct SCNVector3)upVector;
@property(nonatomic) struct SCNVector3 worldUp;
@property(nonatomic) struct SCNVector3 targetOffset;
@property(retain, nonatomic) SCNNode *target;
@property(nonatomic) _Bool gimbalLockEnabled;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

@end

