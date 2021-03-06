//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMWorkout, CMWorkoutManager, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CMWorkoutManagerInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    id <CMWorkoutManagerDelegate> fDelegate;
    CMWorkoutManager *fSender;
    CMWorkout *fWorkout;
    _Bool fResumeWorkoutOnInterrupt;
}

- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (void)_unregisterForWorkoutEvents;
- (void)_registerForWorkoutEvents;
- (void)_handleDaemonEvent:(id)arg1;
- (void)_handleDaemonResponse:(id)arg1;
- (void)_setSuggestedStopTimeout:(double)arg1;
- (void)_stopWorkout:(id)arg1;
- (void)_startWorkout:(id)arg1;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

