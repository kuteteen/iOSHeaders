//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPPropertySet, MPStoreModelPlaybackPositionBuilder, MPStoreModelStoreAssetBuilder;

@interface MPStoreModelTVEpisodeBuilder : MPStoreModelObjectBuilder
{
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int descriptionText:1;
        unsigned int duration:1;
        unsigned int artwork:1;
        unsigned int screenshotArtwork:1;
        unsigned int keepLocalEnableState:1;
        unsigned int keepLocalManagedStatus:1;
        unsigned int hasCloudSyncSource:1;
        unsigned int localFileAsset:1;
        unsigned int libraryAdded:1;
        unsigned int libraryAddEligible:1;
        unsigned int musicShow:1;
        unsigned int episodeNumber:1;
        unsigned int explicitRating:1;
        struct {
            unsigned int identifiers:1;
            unsigned int number:1;
            unsigned int year:1;
            CDStruct_93f342fe show;
        } season;
        CDStruct_93f342fe show;
    } _requestedEpisodeProperties;
}

+ (id)allSupportedProperties;
- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end

