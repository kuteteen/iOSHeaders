//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol PLThumbPersistenceManager;

@interface PLThumbnailManager : NSObject
{
    NSMutableDictionary *_thumbManagersByFormat;
    id <PLThumbPersistenceManager> _lastUsedThumbManager;
    int _lastUsedThumbManagerFormatID;
    NSLock *_thumbManagersLock;
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    NSLock *_fixLock;
    id _observerToken;
}

+ (int)_supportedThumbnailFormatIDFromGeneralFormatID:(int)arg1;
+ (void)_saveCameraPreviewWellImage:(struct CGImage *)arg1 assetUUID:(id)arg2;
+ (void)saveCameraPreviewWellImageForAsset:(id)arg1;
+ (_Bool)assetIsCameraPreviewWellAsset:(id)arg1;
+ (_Bool)assetIsAllowedForCameraPreviewWell:(id)arg1;
+ (void)refetchAndSaveCameraPreviewWellImageIfNecessaryForAssetDidSave:(id)arg1;
+ (void)_refetchAndSaveCameraPreviewWellImage;
+ (id)cameraPreviewWellAssetUUIDFromPersistedFile;
+ (_Bool)_compareAsset:(id)arg1 toMetadata:(id)arg2;
+ (id)_fetchCameraPreviewWellMetadata;
+ (id)_allowedForCameraPreviewWellPredicate;
+ (void)_updateCameraPreviewWellMetadataFromAsset:(id)arg1;
+ (_Bool)_cameraPreviewWellMetadataLoadAndUpdateIfNeeded:(id *)arg1;
+ (id)_cameraPreviewWellMetadataQueue;
+ (_Bool)cameraPreviewWellSupportedOnCurrentDevice;
+ (id)cameraPreviewWellImageQueue;
+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg1;
+ (id)supportedThumbnailFormatIDs;
+ (id)supportedThumbnailFormats;
+ (id)_allPossibleThumbnailFormatIDs;
+ (void)handleRebuildThumbnailRequestPersistentFailure;
+ (_Bool)hasExceededRebuildThumbnailRequestLimit;
+ (_Bool)isRebuildingThumbnails;
+ (void)rebuildAllMissingThumbnails;
+ (void)_recordRebuildThumbnailsAttempt;
+ (void)removeRebuildThumbnailsRequest:(const char *)arg1;
+ (_Bool)hasRebuildThumbnailsRequest;
+ (void)addRebuildThumbnailsRequest;
+ (void)resetThumbnails;
+ (void)removeThumbnailTablesUnsupportedOnly:(_Bool)arg1;
+ (_Bool)isMissingThumbnailTables;
+ (_Bool)hasThumbnailVersionMismatch;
+ (_Bool)hasDeprecationsOnly;
+ (int)_configurationThumbnailFormat;
+ (int)_configurationThumbnailVersion;
+ (_Bool)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4;
+ (int)thumbnailVersionCurrent;
+ (void)removeObsoleteMetadata;
+ (id)defaultThumbnailsDirectoryV2;
+ (id)defaultThumbnailsDirectory;
+ (_Bool)useImageTableForFormat:(int)arg1;
+ (id)defaultThumbnailManager;
@property(retain, nonatomic) id observerToken; // @synthesize observerToken=_observerToken;
@property(readonly, retain, nonatomic) NSMutableDictionary *thumbManagersByFormat; // @synthesize thumbManagersByFormat=_thumbManagersByFormat;
- (id)_thumbManagerForFormatID:(int)arg1;
- (id)_dataForInFlightAsset:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8 imageDataFormat:(int *)arg9;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;
- (id)preheatItemSourceForFormatID:(int)arg1;
- (id)_tableDescriptions;
- (id)placeholderDataForFormat:(int)arg1 photoImageSize:(struct CGSize)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(_Bool)arg3 width:(int *)arg4 height:(int *)arg5 bytesPerRow:(int *)arg6 dataWidth:(int *)arg7 dataHeight:(int *)arg8 imageDataOffset:(int *)arg9;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (void)discardCachedThumbnailDownscalerContexts;
- (void)_horse_setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (_Bool)copyThumbnailsFromAsset:(id)arg1 toAsset:(id)arg2;
- (struct __CFDictionary *)placeholderThumbnailDataByFormatID;
- (void)setThumbnails:(struct __CFDictionary *)arg1 forPhoto:(id)arg2;
- (id)newThumbnailForAsset:(id)arg1 format:(id)arg2;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 error:(id *)arg2;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (void)dealloc;
- (id)init;

@end
