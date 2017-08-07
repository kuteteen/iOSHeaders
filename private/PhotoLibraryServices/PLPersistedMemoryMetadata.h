//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSSet, NSString, NSURL, PLMemory;

@interface PLPersistedMemoryMetadata : NSObject
{
    _Bool _rejected;
    _Bool _favorite;
    _Bool _pending;
    _Bool _userCreated;
    short _category;
    short _subcategory;
    short _notificationState;
    NSString *_uuid;
    NSString *_title;
    NSString *_subtitle;
    NSDate *_creationDate;
    NSString *_keyAssetUUID;
    NSSet *_representativeAssetUUIDs;
    NSSet *_curatedAssetUUIDs;
    NSSet *_extendedCuratedAssetUUIDs;
    NSSet *_movieCuratedAssetUUIDs;
    NSData *_movieData;
    NSDictionary *_movieAssetState;
    long long _photosGraphVersion;
    NSData *_photosGraphData;
    NSData *_assetListPredicate;
    double _score;
    long long _version;
    NSData *_blacklistedFeature;
    long long _playCount;
    long long _shareCount;
    long long _viewCount;
    long long _pendingPlayCount;
    long long _pendingShareCount;
    long long _pendingViewCount;
    PLMemory *_memory;
    NSURL *_metadataURL;
}

+ (_Bool)isValidPath:(id)arg1;
@property(retain, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain, nonatomic) PLMemory *memory; // @synthesize memory=_memory;
@property(nonatomic) long long pendingViewCount; // @synthesize pendingViewCount=_pendingViewCount;
@property(nonatomic) long long pendingShareCount; // @synthesize pendingShareCount=_pendingShareCount;
@property(nonatomic) long long pendingPlayCount; // @synthesize pendingPlayCount=_pendingPlayCount;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSData *blacklistedFeature; // @synthesize blacklistedFeature=_blacklistedFeature;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) short notificationState; // @synthesize notificationState=_notificationState;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSData *assetListPredicate; // @synthesize assetListPredicate=_assetListPredicate;
@property(retain, nonatomic) NSData *photosGraphData; // @synthesize photosGraphData=_photosGraphData;
@property(nonatomic) long long photosGraphVersion; // @synthesize photosGraphVersion=_photosGraphVersion;
@property(retain, nonatomic) NSDictionary *movieAssetState; // @synthesize movieAssetState=_movieAssetState;
@property(retain, nonatomic) NSData *movieData; // @synthesize movieData=_movieData;
@property(retain, nonatomic) NSSet *movieCuratedAssetUUIDs; // @synthesize movieCuratedAssetUUIDs=_movieCuratedAssetUUIDs;
@property(retain, nonatomic) NSSet *extendedCuratedAssetUUIDs; // @synthesize extendedCuratedAssetUUIDs=_extendedCuratedAssetUUIDs;
@property(retain, nonatomic) NSSet *curatedAssetUUIDs; // @synthesize curatedAssetUUIDs=_curatedAssetUUIDs;
@property(retain, nonatomic) NSSet *representativeAssetUUIDs; // @synthesize representativeAssetUUIDs=_representativeAssetUUIDs;
@property(retain, nonatomic) NSString *keyAssetUUID; // @synthesize keyAssetUUID=_keyAssetUUID;
@property(nonatomic) short subcategory; // @synthesize subcategory=_subcategory;
@property(nonatomic) short category; // @synthesize category=_category;
@property(nonatomic, getter=isUserCreated) _Bool userCreated; // @synthesize userCreated=_userCreated;
@property(nonatomic, getter=isPending) _Bool pending; // @synthesize pending=_pending;
@property(nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(nonatomic, getter=isRejected) _Bool rejected; // @synthesize rejected=_rejected;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)_saveMetadata;
- (id)_metadataData;
- (_Bool)_readMetadata;
- (id)description;
- (_Bool)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(_Bool)arg2;
- (_Bool)updateAssetsInMemory:(id)arg1 includePendingAssetChanges:(_Bool)arg2;
- (_Bool)_updateAssetsInMemory:(id)arg1 relationshipName:(id)arg2 persistedAssetUUIDs:(id)arg3 includePendingChanges:(_Bool)arg4;
- (id)insertMemoryFromDataInManagedObjectContext:(id)arg1;
- (_Bool)isObsolete;
- (void)removePersistedData;
- (void)writePersistedData;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (id)initWithPLMemory:(id)arg1;
- (id)initWithPLMemory:(id)arg1 metadataURL:(id)arg2;
- (id)init;

@end

