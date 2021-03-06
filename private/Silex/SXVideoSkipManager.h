//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoPlaybackAdvancing.h"
#import "SXVideoPlaybackSkipping.h"
#import "SXVideoSkipObserving.h"

@class NSMutableArray, NSString;

@interface SXVideoSkipManager : NSObject <SXVideoPlaybackSkipping, SXVideoSkipObserving, SXVideoPlaybackAdvancing>
{
    id <SXVideoQueueProviding> _queueProvider;
    id <SXVideoSkipPolicy> _policyHandler;
    NSMutableArray *_onSkipBlocks;
}

@property(readonly, nonatomic) NSMutableArray *onSkipBlocks; // @synthesize onSkipBlocks=_onSkipBlocks;
@property(readonly, nonatomic) id <SXVideoSkipPolicy> policyHandler; // @synthesize policyHandler=_policyHandler;
@property(readonly, nonatomic) id <SXVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
- (void).cxx_destruct;
- (_Bool)skipToVideo:(id)arg1 animated:(_Bool)arg2;
- (void)onSkip:(CDUnknownBlockType)arg1;
- (_Bool)skipToPrevious;
- (_Bool)skipToNext;
- (_Bool)advanceAnimated:(_Bool)arg1;
- (id)initWithQueueProvider:(id)arg1 policyHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

