//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXPlaybackCoordinatorProviding.h"
#import "SXVolumeObserving.h"

@class NSMapTable, NSString;

@interface SXPlaybackCoordinatorManager : NSObject <SXPlaybackCoordinatorProviding, SXVolumeObserving>
{
    id <SXPlaybackCoordinatorFactory> _factory;
    NSMapTable *_playbackCoordinators;
}

@property(readonly, nonatomic) NSMapTable *playbackCoordinators; // @synthesize playbackCoordinators=_playbackCoordinators;
@property(readonly, nonatomic) id <SXPlaybackCoordinatorFactory> factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (void)muteStateChanged:(id)arg1;
- (id)playbackCoordinatorForVideo:(id)arg1;
- (id)initWithPlaybackCoordinatorFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

