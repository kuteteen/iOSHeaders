//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

#import <VectorKit/NSCopying-Protocol.h>

@class VKRasterTile;

__attribute__((visibility("hidden")))
@interface VKMapTile : VKTile <NSCopying>
{
    VKTile *_tiles[33];
    unsigned long long _states[33];
    double _stateDates[33];
    id _stateMetas[33];
    Box_3d7e3c2c _localBounds[33];
    VKRasterTile *_rasterized;
    _Bool _needsRasterization;
    float _maximumStyleZ;
    shared_ptr_d0281386 _labelMapTile;
}

@property(nonatomic) shared_ptr_d0281386 labelMapTile; // @synthesize labelMapTile=_labelMapTile;
@property(nonatomic) _Bool needsRasterization; // @synthesize needsRasterization=_needsRasterization;
@property(retain, nonatomic) VKRasterTile *rasterized; // @synthesize rasterized=_rasterized;
@property(readonly, nonatomic) float maximumStyleZ; // @synthesize maximumStyleZ=_maximumStyleZ;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Box_3d7e3c2c)localBoundsForLayer:(unsigned char)arg1;
- (void)setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned char)arg4;
- (void)_setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned char)arg4 timestamp:(double)arg5;
- (double)timeTileEnteredStateForLayer:(unsigned char)arg1;
- (unsigned long long)tileStateForLayer:(unsigned char)arg1;
- (id)tileForLayer:(unsigned char)arg1;
- (void)updateViewDependentStateWithContext:(struct LayoutContext *)arg1;
- (void)populateDebugNode:(shared_ptr_eafb90f9)arg1;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
- (id)description;
- (void)dealloc;
- (void)clear;
- (id)initWithKey:(const struct VKTileKey *)arg1;

@end

