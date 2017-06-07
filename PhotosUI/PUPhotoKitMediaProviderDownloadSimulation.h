//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderDownloadSimulation : NSObject
{
    _Bool _shouldSimulateFailure;
    double _downloadDuration;
    double __updateInterval;
    double __simulatedProgress;
}

@property(nonatomic, setter=_setSimulatedProgress:) double _simulatedProgress; // @synthesize _simulatedProgress=__simulatedProgress;
@property(readonly, nonatomic) double _updateInterval; // @synthesize _updateInterval=__updateInterval;
@property(nonatomic) double downloadDuration; // @synthesize downloadDuration=_downloadDuration;
@property(nonatomic) _Bool shouldSimulateFailure; // @synthesize shouldSimulateFailure=_shouldSimulateFailure;
- (void)endSimulationWithError:(id)arg1;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)_updateSimulatedDownload;
- (void)beginSimulation;
- (id)init;

@end

