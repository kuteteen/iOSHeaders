//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCUIAnimationParameters.h"
#import "NSMutableCopying.h"

@class NSString;

@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>
{
    double _duration;
    id <CCUIAnimationTimingFunctionDescription> _timingFunction;
}

@property(readonly, copy, nonatomic) id <CCUIAnimationTimingFunctionDescription> timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

