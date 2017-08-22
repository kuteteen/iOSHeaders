//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPPortraitDeletionTrackingProtocol-Protocol.h>

@class NSDate, NSMutableDictionary, PPAllocSupport;

@interface PPDeletionTracker : NSObject <PPPortraitDeletionTrackingProtocol>
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    PPAllocSupport *_allocSupport;
    NSMutableDictionary *_recentNamedEntityDeletions;
    NSDate *_validAfterDate;
}

- (void).cxx_destruct;
- (void)voiceAssistantEnableStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)coreRoutineEnableStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)clear;
- (void)entitiesDeletedSinceDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerAddedNamedEntities:(id)arg1;
- (void)registerDeletedNamedEntities:(id)arg1;
- (void)_locked_ageOutDeletionsWithCurrentDate:(id)arg1;
- (void)_locked_prepAlloc;
- (void)dealloc;
- (id)init;

@end

