//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCSessionParticipantDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantManager : NSObject <VCSessionParticipantDelegate>
{
    NSMutableDictionary *_sessionParticipants;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *sessionParticipants; // @synthesize sessionParticipants=_sessionParticipants;
- (void)vcSessionParticipant:(id)arg1 didFrequencyLevelsChange:(id)arg2;
- (void)registerBlocksForService;
- (id)participantForID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

