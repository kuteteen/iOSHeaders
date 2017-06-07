//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

#import <MediaPlayer/MPRTCReportingItemSessionCreating-Protocol.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

@interface MPModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating>
{
    MPModelGenericObject *_modelGenericObject;
    id _rtcReportingParentHierarchyToken;
    MPModelMediaClip *_mediaClip;
}

+ (id)requiredMediaClipProperties;
@property(readonly, nonatomic) MPModelMediaClip *mediaClip; // @synthesize mediaClip=_mediaClip;
- (void).cxx_destruct;
- (_Bool)_isVideoAsset;
- (id)_currentPreferredStaticAsset;
- (void)_applyLoudnessInfo;
- (_Bool)_allowsCellularPlayback;
@property(readonly, nonatomic) long long rtcReportingAssetType;
@property(readonly, copy, nonatomic) NSString *rtcReportingServiceIdentifier;
@property(readonly, nonatomic) id rtcReportingParentHierarchyToken;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (_Bool)allowsExternalPlayback;
- (_Bool)allowsAirPlayFromCloud;
- (id)titlesForTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)reevaluateType;
- (_Bool)prefersSeekOverSkip;
- (void)notePlaybackFinishedByHittingEnd;
- (id)modelGenericObject;
- (id)mainTitle;
- (void)loadAssetAndPlayerItem;
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;
- (_Bool)isStreamable;
- (_Bool)isCloudItem;
- (_Bool)isAssetURLValid;
- (double)durationFromExternalMetadata;
@property(readonly, copy) NSString *description;
- (id)initWithMediaClip:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

