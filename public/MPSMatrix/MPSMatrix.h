//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPSMatrix : NSObject
{
    // Error parsing type: ^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>=A^{MTLLibraryNode}}[2[2[2{atomic<void *>=A^v}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]^{MPSFunctionTable}{atomic<void *>=A^v}Ii{MPSGPUInfo=b8b8b8b16b4b20}[68{atomic<MPSLibrary *>=A^{MPSLibrary}}]}, name: _device
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _matrices;
    unsigned long long _rowBytes;
    unsigned long long _matrixBytes;
    unsigned int _dataType;
    // Error parsing type: {MPSAutoBuffer="_buffer"{atomic<void *>="__a_"A^v}"_requestedSize"Q"_device"@"<MTLDevice>""_cache"@"MPSCommandBufferImageCache""_resourceSize"Q}, name: _buffer
}

@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned long long matrixBytes; // @synthesize matrixBytes=_matrixBytes;
@property(readonly, nonatomic) unsigned long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(readonly, nonatomic) unsigned long long matrices; // @synthesize matrices=_matrices;
@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned long long rows; // @synthesize rows=_rows;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> data;
- (unsigned long long)resourceSize;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2;
-     // Error parsing type: @32@0:8@16^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>=A^{MTLLibraryNode}}[2[2[2{atomic<void *>=A^v}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]^{MPSFunctionTable}{atomic<void *>=A^v}Ii{MPSGPUInfo=b8b8b8b16b4b20}[68{atomic<MPSLibrary *>=A^{MPSLibrary}}]}24, name: initPrivateWithDescriptor:device:
- (id)init;
@property(readonly, retain, nonatomic) id <MTLDevice> device;

@end

