//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOResourceManifestConfiguration, NSError, NSLocale, NSString, VKSharedResources, VKTileKeyList, VKTileKeyMap, VKTilePool;
@protocol VKTileSourceClient;

__attribute__((visibility("hidden")))
@interface VKTileSource : NSObject
{
    id <VKTileSourceClient> _client;
    VKTilePool *_tilePool;
    VKTileKeyMap *_pendingLoads;
    VKTileKeyList *_decoding;
    VKTileKeyList *_failedTiles;
    shared_ptr_a3c46825 _styleManager;
    double _contentScale;
    VKSharedResources *_sharedResources;
    int loadingTiles;
    NSError *_recentError;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    NSString *_tileLoaderClientIdentifier;
    _Bool _preloadOnly;
    _Bool _requireWiFi;
    long long _mapType;
    unsigned char _targetDisplay;
    shared_ptr_e963992e _taskContext;
}

@property(nonatomic) unsigned char targetDisplay; // @synthesize targetDisplay=_targetDisplay;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) _Bool requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property(nonatomic) _Bool preloadOnly; // @synthesize preloadOnly=_preloadOnly;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(retain, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property(nonatomic) shared_ptr_a3c46825 styleManager; // @synthesize styleManager=_styleManager;
@property(nonatomic) id <VKTileSourceClient> client; // @synthesize client=_client;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)forceDownload;
- (void)didFailToLoadTileKey:(const struct _GEOTileKey *)arg1 error:(id)arg2;
- (void)didFinishWithNetwork;
- (void)willGoToNetwork;
- (void)didFetchData:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (void)_failedToLoadSourceKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 error:(id)arg3;
- (void)tileAvailabilityChanged:(id)arg1;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)failedToDecodeSourceKey:(const struct VKTileKey *)arg1;
- (_Bool)_shouldDecodeTile:(const struct VKTileKey *)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownload:(const struct _GEOTileKey *)arg1;
- (void)performDownload:(const struct _GEOTileKey *)arg1;
- (_Bool)cancelFetchForKey:(const struct VKTileKey *)arg1;
- (_Bool)cancelFetchForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (_Bool)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2;
- (id)_extraInfoForPendingSourceKey:(const struct VKTileKey *)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (id)tileForSourceKey:(const struct VKTileKey *)arg1 renderKey:(const struct VKTileKey *)arg2;
- (_Bool)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (void)_fetchedTile:(id)arg1;
- (struct VKTileKey)sourceKeyForDownloadKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyForSourceKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)nativeKeyForRenderKey:(const struct VKTileKey *)arg1;
@property(readonly, nonatomic) long long maximumZoomLevelWithoutOverride;
@property(readonly, nonatomic) long long maximumZoomLevel;
@property(readonly, nonatomic) _Bool maximumZoomLevelBoundsCamera;
@property(readonly, nonatomic) long long minimumZoomLevel;
@property(readonly, nonatomic) _Bool minimumZoomLevelBoundsCamera;
@property(readonly, nonatomic) long long zEquivalenceClass;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
@property(readonly, nonatomic) unsigned int maximumDownloadZoomLevel;
@property(readonly, nonatomic) unsigned int minimumDownloadZoomLevel;
@property(readonly, nonatomic) long long tileSize;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
- (void)foreachTileInPool:(CDUnknownBlockType)arg1;
- (void)clearCaches;
- (void)dealloc;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1;
- (id)initWithResourceManifestConfiguration:(id)arg1 locale:(id)arg2 sharedResources:(id)arg3 taskContext:(shared_ptr_e963992e)arg4;
@property(readonly, nonatomic) struct Device *device;
- (id)tileLoader;

@end

