//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSString;
@protocol MPArtworkDataSource, NSCopying;

@interface MPArtworkCatalog : NSObject
{
    struct CGSize _fittingSize;
    long long _modelRevisionID;
    _Bool _loadingRepresentation;
    double _destinationScale;
    NSString *_cacheIdentifier;
    id _requestingContext;
    id _destination;
    CDUnknownBlockType _configurationBlock;
    id _token;
    id <MPArtworkDataSource> _dataSource;
    unsigned long long _renderHint;
}

+ (id)_artworkLoadQueue;
+ (id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2;
+ (void)setCachePurgesWhenEnteringBackground:(_Bool)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (void)setCacheLimit:(unsigned long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (id)staticArtworkCatalogWithImage:(id)arg1;
@property(nonatomic) unsigned long long renderHint; // @synthesize renderHint=_renderHint;
@property(nonatomic) __weak id <MPArtworkDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id token; // @synthesize token=_token;
@property(getter=isLoadingRepresentation) _Bool loadingRepresentation; // @synthesize loadingRepresentation=_loadingRepresentation;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(nonatomic) __weak id destination; // @synthesize destination=_destination;
@property(nonatomic) __weak id requestingContext; // @synthesize requestingContext=_requestingContext;
@property(copy, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
@property(nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(nonatomic) double destinationScale; // @synthesize destinationScale=_destinationScale;
- (void).cxx_destruct;
- (void)_updateWithRepresentation:(id)arg1 isBestRepresentation:(_Bool)arg2 modelRevisionID:(long long)arg3;
- (void)_updateRepresentation;
- (void)_loadBestRepresentationIfNeeded;
@property(readonly, nonatomic) NSCache *cache;
- (void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2;
- (void)requestExportableArtworkURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestRadiosityImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestFocusRegionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestColorAnalysisWithAlgorithm:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)existingColorAnalysisWithAlgorithm:(long long)arg1;
@property(readonly, nonatomic) id <NSCopying> visualIdenticalityIdentifier;
- (_Bool)isArtworkVisuallyIdenticalToCatalog:(id)arg1;
- (void)setDestination:(id)arg1 progressiveConfigurationBlock:(CDUnknownBlockType)arg2;
- (void)setDestination:(id)arg1 configurationBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasImageOnDisk;
- (id)bestImageFromDisk;
- (void)requestImageWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct CGSize scaledFittingSize;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithToken:(id)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) long long MP_artworkType;

@end

