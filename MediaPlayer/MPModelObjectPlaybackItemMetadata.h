//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@class MPModelFileAsset, MPModelHomeSharingAsset, MPModelPlaybackPosition, MPModelStoreAsset, NSObject;
@protocol MPModelObjectPlaybackItemMetadataDelegate, OS_dispatch_queue;

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata
{
    NSObject<OS_dispatch_queue> *_writeQueue;
    id <MPModelObjectPlaybackItemMetadataDelegate> _modelObjectDelegate;
    MPModelPlaybackPosition *_playbackPosition;
}

+ (id)requiredStoreAssetProperties;
+ (id)requiredPlaybackPositionProperties;
+ (id)requiredLocalFileAssetProperties;
+ (id)requiredHomeSharingAssetProperties;
+ (id)requiredProperties;
+ (_Bool)_shouldRespectStoreCellularDataSetting;
+ (_Bool)_shouldRespectMusicCellularDataSetting;
@property(readonly, nonatomic) MPModelPlaybackPosition *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(nonatomic) __weak id <MPModelObjectPlaybackItemMetadataDelegate> modelObjectDelegate; // @synthesize modelObjectDelegate=_modelObjectDelegate;
- (void).cxx_destruct;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(_Bool)arg1 returningAssetQuality:(unsigned long long *)arg2 protectionType:(unsigned long long *)arg3 usesPurchaseBundle:(_Bool *)arg4;
- (void)_invalidateModelObjectPlaybackItemMetadata;
@property(readonly, nonatomic) MPModelStoreAsset *storeAsset;
@property(readonly, nonatomic) MPModelFileAsset *localFileAsset;
@property(readonly, nonatomic) MPModelHomeSharingAsset *homeSharingAsset;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (id)storeUbiquitousIdentifier;
- (unsigned long long)storeAccountID;
- (_Bool)shouldReportPlayEventsToStore;
- (_Bool)shouldRememberBookmarkTime;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)protectedContentSupportStorageURL;
- (long long)mediaLibraryPersistentID;
- (id)localNetworkContentURL;
- (void)loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentID;
- (_Bool)isSubscriptionRequired;
- (long long)endpointType;
- (long long)downloadIdentifier;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)arg1 protectionType:(unsigned long long *)arg2 usesPurchaseBundle:(_Bool *)arg3;
- (id)buyParameters;
- (double)bookmarkTime;
- (_Bool)allowsAssetCaching;
- (void)dealloc;
- (id)init;
- (id)mqf_playbackItemMetadataModelObject;

@end

