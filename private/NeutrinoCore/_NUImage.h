//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUImage-Protocol.h>
#import <NeutrinoCore/NUImageCopying-Protocol.h>
#import <NeutrinoCore/NUMutableImage-Protocol.h>
#import <NeutrinoCore/NUMutablePurgeableImage-Protocol.h>
#import <NeutrinoCore/NUPurgeableImage-Protocol.h>

@class NSPointerArray, NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;
@protocol NUStorageFactory, OS_dispatch_queue;

@interface _NUImage : NSObject <NUImage, NUMutableImage, NUImageCopying, NUPurgeableImage, NUMutablePurgeableImage>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NUImageLayout *_layout;
    NUPixelFormat *_format;
    NUColorSpace *_colorSpace;
    NURegion *_validRegion;
    NSPointerArray *_tiles;
    id <NUStorageFactory> _tileFactory;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _accessCount;
}

@property(copy) NURegion *validRegion; // @synthesize validRegion=_validRegion;
@property(readonly) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) NUPixelFormat *format; // @synthesize format=_format;
@property(readonly) NUImageLayout *layout; // @synthesize layout=_layout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)copyBufferStorage:(id)arg1 region:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3;
- (_Bool)copySurfaceStorage:(id)arg1 device:(id)arg2 region:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4;
- (id)mutablePurgeableImageCopy;
- (id)purgeableImageCopy;
- (id)mutableImageCopy;
- (id)immutableImageCopy;
- (id)_nonPurgeableCopy;
- (id)_purgeableCopy;
- (void)endAccessRegion:(id)arg1;
- (void)endAccess;
- (_Bool)beginAccessRegion:(id)arg1;
- (_Bool)beginAccess;
- (void)writeRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_createOrCopyTile:(id)arg1 tileInfo:(id)arg2 writeRegion:(id)arg3;
- (void)readRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)tileAtIndex:(unsigned long long)arg1;
- (id)_tileAtIndex:(unsigned long long)arg1;
@property(readonly) CDStruct_912cb5d2 size;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 format:(id)arg2 colorSpace:(id)arg3 tileFactory:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

