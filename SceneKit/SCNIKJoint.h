//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCNNode;

@interface SCNIKJoint : NSObject
{
    SCNNode *joint;
    double maxAllowedRotationAngle;
}

@property(nonatomic) double maxAllowedRotationAngle; // @synthesize maxAllowedRotationAngle;
@property(nonatomic) __weak SCNNode *joint; // @synthesize joint;

@end

