//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "CALayerDelegate.h"

@class NSMutableArray, NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface __UITextTiledLayer : CALayer <CALayerDelegate>
{
    NSMutableArray *_visibleTiles;
    NSMutableArray *_unusedTiles;
    struct CGRect _gridBounds;
    struct CGSize _tileSize;
    UIBezierPath *_mask;
    struct {
        unsigned int disableTiling:1;
        unsigned int ditchAllTiles:1;
        unsigned int suspendLayout:4;
        unsigned int delegateConstrainsTileableBounds:1;
        unsigned int delegateSupportsMaskedRects:1;
        unsigned int delegateImplementsWillDraw:1;
    } _tcTiledLayerFlags;
    double _maxTileHeight;
}

@property(nonatomic) double maxTileHeight; // @synthesize maxTileHeight=_maxTileHeight;
- (void).cxx_destruct;
- (void)resumeTiling;
- (void)suspendTiling;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSublayers;
- (void)_prepareNonTiledGhostLayersForVisibleBounds:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
- (void)_prepareTilesForVisibleBounds:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
- (void)_prepareGridForBounds:(struct CGRect)arg1;
- (void)setContentsMultiplyColor:(struct CGColor *)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setDrawsAsynchronously:(_Bool)arg1;
- (id)_preparedTileForFrame:(struct CGRect)arg1 mask:(id)arg2 opacity:(double)arg3 deferred:(_Bool)arg4;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
@property(nonatomic) _Bool usesTiledLayers;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)_drawInContext:(struct CGContext *)arg1;
- (void)drawDirtyLayer:(id)arg1 intoContext:(struct CGContext *)arg2;
- (void)layerWillDraw:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

