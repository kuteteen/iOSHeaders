//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoLoadingStateObserving.h"
#import "SXVideoPlaybackObserver.h"

@class NSString;

@interface SXVideoLoadingStateObserver : NSObject <SXVideoPlaybackObserver, SXVideoLoadingStateObserving>
{
    unsigned long long _state;
    CDUnknownBlockType _finishedBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _startBlock;
}

@property(copy, nonatomic, setter=onStart:) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic, setter=onFailed:) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic, setter=onFinished:) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (id)initWithPlaybackCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

