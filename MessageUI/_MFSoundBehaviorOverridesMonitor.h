//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFFuture;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MFSoundBehaviorOverridesMonitor : NSObject
{
    int _condition;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) MFFuture *behaviorOverrideTypes;
- (void)_activeOverrideTypesChanged:(id)arg1;
- (void)_beginGeneratingActiveOverrideTypeChanges;
- (id)init;

@end

