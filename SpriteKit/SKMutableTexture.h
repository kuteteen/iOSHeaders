//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKTexture.h>

@interface SKMutableTexture : SKTexture
{
    void *_ioSurface;
    _Bool _ioSurfaceBacked;
    struct CGSize _textureSize;
    void *_pixelData;
    unsigned long long _pixelDataLength;
    int _pixelFormat;
}

+ (id)mutableTextureWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)description;
- (shared_ptr_bb77cfd9)_backingTexture;
- (void)modifyPixelDataWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(int)arg2;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 ioSurfaceBacked:(_Bool)arg2 pixelFormat:(int)arg3;

@end

