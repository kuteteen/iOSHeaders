//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CCUIOverlayTransitionState : NSObject <NSCopying>
{
    _Bool _interactive;
    unsigned long long _type;
    double _progress;
    double _presentationProgress;
    double _clampedPresentationProgress;
    double _nonZeroPresentationProgress;
    double _snappedPresentationProgress;
}

+ (id)stateWithType:(unsigned long long)arg1 interactive:(_Bool)arg2 progress:(double)arg3;
+ (id)fullyPresentedState;
+ (id)fullyDismissedState;
+ (_Bool)isSignificantTransitionFrom:(id)arg1 to:(id)arg2;
+ (_Bool)isSignificantStatusBarTransitionFrom:(id)arg1 to:(id)arg2;
@property(readonly, nonatomic) double snappedPresentationProgress; // @synthesize snappedPresentationProgress=_snappedPresentationProgress;
@property(readonly, nonatomic) double nonZeroPresentationProgress; // @synthesize nonZeroPresentationProgress=_nonZeroPresentationProgress;
@property(readonly, nonatomic) double clampedPresentationProgress; // @synthesize clampedPresentationProgress=_clampedPresentationProgress;
@property(readonly, nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithType:(unsigned long long)arg1 interactive:(_Bool)arg2 progress:(double)arg3;
- (double)snappedStatusBarPresentationProgress;

@end

