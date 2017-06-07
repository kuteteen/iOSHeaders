//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIVectorOperatable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedSize : NSObject <UIVectorOperatable>
{
    struct CGSize _size;
    double _epsilon;
}

+ (id)zero;
+ (id)valueWithCGSize:(struct CGSize)arg1 epsilon:(double)arg2;
+ (id)valueWithCGSize:(struct CGSize)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)multiplyByScalar:(double)arg1;
- (id)addVector:(id)arg1;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_9e265dec)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;
- (void)reinitWithVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getValue;
- (id)getNSValue;
- (_Bool)isUndefined;
- (_Bool)isApproximatelyEqualTo:(id)arg1;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

