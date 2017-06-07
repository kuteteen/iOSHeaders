//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMWorkout, CMWorkoutManager;
@protocol CMWorkoutManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

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
- (void)_stopWorkout:(id)arg1;
- (void)_startWorkout:(id)arg1;
- (id)swimWorkoutInstance:(id)arg1;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

