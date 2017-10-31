//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPVolumeControllerDataSource.h"

@class MPAVRoute, NSString;

@interface MPVolumeControllerRouteDataSource : NSObject <MPVolumeControllerDataSource>
{
    float _pendingVolume;
    _Bool _hasPendingVolume;
    _Bool _hasVolumeInFlight;
    _Bool _volumeControlAvailable;
    _Bool _muted;
    _Bool _volumeWarningEnabled;
    float _volume;
    float _EUVolumeLimit;
    id <MPVolumeControllerDataSourceDelegate> _delegate;
    long long _volumeWarningState;
    MPAVRoute *_groupRoute;
    MPAVRoute *_outputDeviceRoute;
}

@property(retain, nonatomic) MPAVRoute *outputDeviceRoute; // @synthesize outputDeviceRoute=_outputDeviceRoute;
@property(retain, nonatomic) MPAVRoute *groupRoute; // @synthesize groupRoute=_groupRoute;
@property(readonly, nonatomic) long long volumeWarningState; // @synthesize volumeWarningState=_volumeWarningState;
@property(readonly, nonatomic) _Bool volumeWarningEnabled; // @synthesize volumeWarningEnabled=_volumeWarningEnabled;
@property(readonly, nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_EUVolumeLimit;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
@property(nonatomic) __weak id <MPVolumeControllerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_routeConnectionVolumeDidChangeNotification:(id)arg1;
- (void)reloadWarning;
- (void)reload;
- (void)_setPendingVolumeIfNeeded;
@property(readonly, copy, nonatomic) NSString *volumeControlLabel;
- (void)dealloc;
- (id)initWithGroupRoute:(id)arg1 outputDeviceRoute:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

