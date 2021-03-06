//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNTextureLayerSource.h>

@interface SCNTextureUIKitSource : SCNTextureLayerSource
{
    _Bool _setup;
    _Bool _windowReady;
    id _source;
    id _uiWindow;
    id _uiView;
    struct CGSize _sizeCache;
    unsigned int _textureID;
    struct __C3DEngineContext *_engineContext;
    // Error parsing type: ^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}, name: _textureSampler
}

@property(retain, nonatomic) id source; // @synthesize source=_source;
@property(retain, nonatomic) id uiView; // @synthesize uiView=_uiView;
@property(retain, nonatomic) id uiWindow; // @synthesize uiWindow=_uiWindow;
- (void)_layerTreeDidUpdate;
-     // Error parsing type: ^{__C3DTexture=}40@0:8^{__C3DEngineContext=}16^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}24^d32, name: textureWithEngineContext:textureSampler:nextFrameTime:
- (struct CGSize)layerSizeInPixels;
- (double)layerContentsScaleFactor;
- (id)layer;
- (float)clearValue;
- (id)layerToFocusForRenderedLayer:(id)arg1;
-     // Error parsing type: v24@0:8^{__C3DRendererContext={__CFRuntimeBase=QAQ}iIIIIfI^{__C3DTexture}^{__C3DStack}^vBBBBBB^{__CFDictionary}I^{__CFDictionary}^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DEngineStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[8I]Ii^{__C3DBlendStates}I^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^vii}{?=[2I][5i][12{?=iII}][12I]^?^?^?^?^?^?^?^?^?}[2{VolatileObject=^{__C3DArray}II^{__CFArray}}]^{__C3DArray}I^{__CFDictionary}}16, name: cleanup:
- (void)setup;
- (void)dealloc;

@end

