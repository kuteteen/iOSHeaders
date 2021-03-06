//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TSKMediaPlayerController <NSObject>
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double absoluteDuration;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double absoluteCurrentTime;
@property(nonatomic, getter=isFastForwarding) _Bool fastForwarding;
@property(readonly, nonatomic) _Bool canFastForward;
@property(nonatomic, getter=isFastReversing) _Bool fastReversing;
@property(readonly, nonatomic) _Bool canFastReverse;
@property(readonly, nonatomic, getter=isScrubbing) _Bool scrubbing;
@property(nonatomic) float volume;
@property(nonatomic) long long repeatMode;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(nonatomic) float rate;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) _Bool canPlay;
@property(readonly, nonatomic) id <TSKMediaPlayerControllerDelegate> delegate;
- (void)removeObservationToken:(id <NSObject>)arg1;
- (void)addObservationToken:(id <NSObject>)arg1;
- (void)removePeriodicTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(void (^)(void))arg2;
- (void)seekToEnd;
- (void)seekToBeginning;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)endScrubbing;
- (void)cancelPendingSeeks;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)beginScrubbing;
- (void)stopSynchronously;
- (void)teardown;
@end

