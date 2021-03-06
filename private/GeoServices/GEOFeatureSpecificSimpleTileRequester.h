//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOVoltaireSimpleTileRequester.h>

@interface GEOFeatureSpecificSimpleTileRequester : GEOVoltaireSimpleTileRequester
{
}

+ (unsigned char)tileProviderIdentifier;
- (id)newXPCDataRequestForTileKey:(const struct _GEOTileKey *)arg1;
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned char)_authTypeForTileKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)_regularTileKeyForTransitLineSelectionTileKey:(const struct _GEOTileKey *)arg1 muid:(unsigned long long *)arg2;

@end

