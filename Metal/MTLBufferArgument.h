//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

__attribute__((visibility("hidden")))
@interface MTLBufferArgument : MTLArgumentInternal
{
    unsigned int _dataType:15;
    unsigned int _vertexDescriptorBuffer:1;
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
    MTLStructTypeInternal *_structType;
}

- (id)formattedDescription:(unsigned long long)arg1;
- (id)bufferIndirectArgumentType;
- (id)bufferStructType;
- (unsigned long long)bufferDataSize;
- (unsigned long long)bufferALUType;
- (unsigned long long)bufferPixelFormat;
- (unsigned long long)bufferDataType;
- (unsigned long long)bufferAlignment;
- (void)setStructType:(id)arg1;
- (_Bool)isVertexDescriptorBuffer;
- (void)setVertexDescriptorBuffer:(_Bool)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 pixelFormat:(unsigned long long)arg8 aluType:(unsigned long long)arg9 dataSize:(unsigned long long)arg10 alignment:(unsigned long long)arg11;

@end

