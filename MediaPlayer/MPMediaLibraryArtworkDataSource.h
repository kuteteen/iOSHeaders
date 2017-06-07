//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPArtworkDataSource-Protocol.h>

@class MPArtworkResizeUtility, NSCache, NSString;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource>
{
    _Bool _usesFallbackCache;
    NSCache *_fallbackCache;
    MPArtworkResizeUtility *_artworkResizeUtility;
}

@property(retain, nonatomic) MPArtworkResizeUtility *artworkResizeUtility; // @synthesize artworkResizeUtility=_artworkResizeUtility;
@property(retain, nonatomic) NSCache *fallbackCache; // @synthesize fallbackCache=_fallbackCache;
@property(nonatomic) _Bool usesFallbackCache; // @synthesize usesFallbackCache=_usesFallbackCache;
- (void).cxx_destruct;
- (id)_resizeArtwork:(id)arg1 forCatalog:(id)arg2 toSize:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_representationAtSize:(struct CGSize)arg1 forCatalog:(id)arg2;
- (_Bool)_isRepresentationSize:(struct CGSize)arg1 validForFittingSize:(struct CGSize)arg2;
- (_Bool)_isRepresentation:(id)arg1 validForCatalog:(id)arg2;
- (id)_cachedRepresentationForCatalog:(id)arg1;
- (void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (_Bool)hasExistingRepresentationOnDiskForArtworkCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)_resizeOriginalArtworkForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

