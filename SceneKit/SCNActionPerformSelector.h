//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionPerformSelector : SCNAction
{
    SEL _selector;
    id _target;
}

+ (id)perfromSelector:(SEL)arg1 onTarget:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isCustom;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

