//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, SXKeyValueObserver;

@interface SXVolumeController : NSObject
{
    _Bool _muted;
    double _volume;
    SXKeyValueObserver *_volumeObserver;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SXKeyValueObserver *volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(readonly, nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void).cxx_destruct;
- (void)toggleMute;
- (void)setVolume:(double)arg1;
- (void)removeVolumeObserver:(id)arg1;
- (void)addVolumeObserver:(id)arg1;
- (id)initWithPreferredMuteState:(_Bool)arg1;

@end
