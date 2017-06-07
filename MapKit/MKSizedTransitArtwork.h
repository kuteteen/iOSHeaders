//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKArtworkImageSource-Protocol.h>

@class MKArtworkDataSourceCache, NSString;
@protocol GEOTransitArtworkDataSource;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource>
{
    id <GEOTransitArtworkDataSource> _artwork;
    long long _shieldSize;
    MKArtworkDataSourceCache *_artworkCache;
}

@property(retain, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(readonly, nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artwork; // @synthesize artwork=_artwork;
- (void).cxx_destruct;
- (id)badgeImageToDisplayInView:(id)arg1;
- (id)imageToDisplayInView:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToTransitArtworkViewMode:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

