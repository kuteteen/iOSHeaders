//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VKPolylineOverlayRenderRegion : NSObject
{
    NSSet *_tiles;
    Box_3d7e3c2c _visibleRect;
    Box_3d7e3c2c _snappingRect;
    vector_b9326b03 _rectsForSnapping;
    struct vector<VKTileKey, std::__1::allocator<VKTileKey>> _snappedTileKeys;
}

@property(readonly, nonatomic) Box_3d7e3c2c snappingRect; // @synthesize snappingRect=_snappingRect;
@property(readonly, nonatomic) Box_3d7e3c2c visibleRect; // @synthesize visibleRect=_visibleRect;
@property(readonly, nonatomic) NSSet *tiles; // @synthesize tiles=_tiles;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const vector_b9326b03 *)rectsForSnapping;
- (_Bool)isEquivalentToNewRegion:(id)arg1;
- (void)dealloc;
- (id)initForKeysInView:(id)arg1 tiles:(id)arg2 allowsSnapping:(_Bool)arg3;

@end

