//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MTLCompiler, MTLIOMemoryInfo, NSString;
@protocol MTLDeviceSPI, OS_dispatch_queue;

@interface _MTLDevice : NSObject
{
    CDStruct_efe68850 _limits;
    MTLCompiler *_compiler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MTLIOMemoryInfo *_memoryInfo;
    unsigned long long _globalTraceObjectID;
    int _commandQueueCount;
    struct MTLLibraryBuilder *_libraryBuilder;
    struct MTLPipelineLibraryBuilder *_pipelineLibraryBuilder;
    struct MTLPipelineCollection *_pipelineDescriptors;
    id <MTLDeviceSPI> _deviceWrapper;
}

+ (_Bool)featureProfile:(unsigned long long)arg1 supportsFeatureSet:(unsigned long long)arg2;
+ (_Bool)metalBufferSanitizerEnabled;
@property(readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
- (id)newIndirectArgumentEncoderWithArguments:(id)arg1;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities; // @dynamic indirectArgumentBufferCapabilities;
- (void)getDefaultSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (void)_purgeDevice;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newCommandQueue;
- (void)_decrementCommandQueueCount;
- (void)_incrementCommandQueueCount;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (_Bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (id)pipelinePerformanceStatisticsWithComputeVariant:(struct NSObject *)arg1;
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (CDStruct_596dc0d1)pipelineFlagsWithComputeVariant:(struct NSObject *)arg1;
- (CDStruct_7ce1aa5b)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (id)newComputePipelineWithDescriptor:(id)arg1 variant:(struct NSObject *)arg2;
- (id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3;
- (id)vertexVariantWithCompilerOutput:(id)arg1;
- (struct NSObject *)computeVariantWithCompilerOutput:(id)arg1;
- (id)fragmentVariantWithCompilerOutput:(id)arg1;
- (void)freeComputeFunctionKey:(void *)arg1 keySize:(unsigned long long)arg2;
- (void *)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long *)arg3;
- (void *)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned long long *)arg2;
- (void)freeVertexFunctionKey:(void *)arg1 vertexKeySize:(unsigned long long)arg2;
- (void)freeFragmentFunctionKey:(void *)arg1 fragmentKeySize:(unsigned long long)arg2;
- (void *)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long *)arg4;
- (void *)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned long long *)arg2 nextStageVariant:(id)arg3;
- (void *)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long *)arg4;
- (void *)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned long long *)arg2 previousStateVariant:(id)arg3;
- (void)registerCompiler:(id)arg1;
@property(readonly) MTLCompiler *compiler; // @synthesize compiler=_compiler;
@property(readonly) unsigned long long maxFramebufferStorageBits;
@property(readonly) unsigned long long maxCustomSamplePositions;
@property(readonly) unsigned long long maxTessellationFactor;
@property(readonly) unsigned long long maxInterpolatedComponents;
@property(readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) unsigned long long maxFunctionConstantIndices;
@property(readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long maxBufferLength;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) const CDStruct_efe68850 *limits;
- (void)initLimits;
- (_Bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
- (_Bool)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (id)endCollectingPipelineDescriptors;
- (void)startCollectingPipelineDescriptors;
- (void)registerComputePipelineDescriptor:(id)arg1;
- (void)registerRenderPipelineDescriptor:(id)arg1;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;
- (id)newDefaultLibrary;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void)unloadShaderCaches;
- (id)productName;
- (id)familyName;
- (id)vendorName;
- (void)compilerPropagatesThreadPriority:(_Bool)arg1;
- (void)_setDeviceWrapper:(id)arg1;
@property(readonly) NSString *name;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;
- (void)releaseCacheEntry:(struct MTLLibraryContainer *)arg1;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (void *)getShaderCacheKeys;
- (id)newFunctionWithGLIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;
- (id)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

