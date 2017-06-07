//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLTextureDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTextureDescriptorInternal : MTLTextureDescriptor
{
    struct MTLTextureDescriptorPrivate _private;
}

- (_Bool)validateWithDevice:(id)arg1;
- (const struct MTLTextureDescriptorPrivate *)descriptorPrivate;
- (_Bool)isDrawable;
- (void)setIsDrawable:(_Bool)arg1;
- (void)setFramebufferOnly:(_Bool)arg1;
- (_Bool)framebufferOnly;
- (void)setCompressionMode:(unsigned long long)arg1;
- (unsigned long long)compressionMode;
- (unsigned long long)getSwizzle;
- (void)setSwizzle:(unsigned long long)arg1;
- (void)setSwizzleAlpha:(unsigned long long)arg1;
- (unsigned long long)swizzleAlpha;
- (void)setSwizzleBlue:(unsigned long long)arg1;
- (unsigned long long)swizzleBlue;
- (void)setSwizzleGreen:(unsigned long long)arg1;
- (unsigned long long)swizzleGreen;
- (void)setSwizzleRed:(unsigned long long)arg1;
- (unsigned long long)swizzleRed;
- (void)setRotation:(unsigned long long)arg1;
- (unsigned long long)rotation;
- (void)setTextureUsage:(unsigned long long)arg1;
- (unsigned long long)textureUsage;
- (void)setUsage:(unsigned long long)arg1;
- (unsigned long long)usage;
- (void)setResourceOptions:(unsigned long long)arg1;
- (unsigned long long)resourceOptions;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (unsigned long long)cpuCacheMode;
- (void)setArrayLength:(unsigned long long)arg1;
- (unsigned long long)arrayLength;
- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
- (void)setMipmapLevelCount:(unsigned long long)arg1;
- (unsigned long long)mipmapLevelCount;
- (void)setDepth:(unsigned long long)arg1;
- (unsigned long long)depth;
- (void)setHeight:(unsigned long long)arg1;
- (unsigned long long)height;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;
- (void)setPixelFormat:(unsigned long long)arg1;
- (unsigned long long)pixelFormat;
- (void)setTextureType:(unsigned long long)arg1;
- (unsigned long long)textureType;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

