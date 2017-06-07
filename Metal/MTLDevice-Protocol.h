//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class MTLCompileOptions, MTLComputePipelineDescriptor, MTLDepthStencilDescriptor, MTLHeapDescriptor, MTLRenderPipelineDescriptor, MTLSamplerDescriptor, MTLTextureDescriptor, NSArray, NSBundle, NSObject, NSString, NSURL;
@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDepthStencilState, MTLFence, MTLFunction, MTLHeap, MTLIndirectArgumentEncoder, MTLLibrary, MTLRenderPipelineState, MTLSamplerState, MTLTexture, OS_dispatch_data;

@protocol MTLDevice <NSObject>
@property(readonly, getter=areProgrammableSamplePositionsSupported) _Bool programmableSamplePositionsSupported;
@property(readonly, getter=isDepth24Stencil8PixelFormatSupported) _Bool depth24Stencil8PixelFormatSupported;
@property(readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(readonly, getter=isRemovable) _Bool removable;
@property(readonly, getter=isHeadless) _Bool headless;
@property(readonly, getter=isLowPower) _Bool lowPower;
@property(readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property(readonly) NSString *name;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithArguments:(NSArray *)arg1;
- (void)getDefaultSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (_Bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
- (id <MTLFence>)newFence;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 completionHandler:(void (^)(id <MTLLibrary>, NSError *))arg3;
- (id <MTLLibrary>)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithData:(NSObject<OS_dispatch_data> *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithFile:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibraryWithBundle:(NSBundle *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibrary;
- (id <MTLSamplerState>)newSamplerStateWithDescriptor:(MTLSamplerDescriptor *)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLDepthStencilState>)newDepthStencilStateWithDescriptor:(MTLDepthStencilDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(void (^)(void *, unsigned long long))arg4;
- (id <MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id <MTLHeap>)newHeapWithDescriptor:(MTLHeapDescriptor *)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id <MTLCommandQueue>)newCommandQueue;

@optional
@property(readonly, getter=areRasterOrderGroupsSupported) _Bool rasterOrderGroupsSupported;
@end

