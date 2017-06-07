//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, _MTLDevice;
@protocol OS_dispatch_queue;

@interface MTLCompiler : NSObject
{
    _MTLDevice *_device;
    NSString *_pluginPath;
    CDStruct_41a22ec7 _cacheUUID;
    NSObject<OS_dispatch_queue> *_compilerQueue;
    struct MTLCompilerConnectionManager *_compilerConnectionManager;
    unsigned int _compilerId;
    unsigned long long _compilerFlags;
    struct MTLCompilerCache *_functionCache;
}

@property(readonly) unsigned long long compilerFlags; // @synthesize compilerFlags=_compilerFlags;
@property unsigned int compilerId; // @synthesize compilerId=_compilerId;
@property struct MTLCompilerConnectionManager *compilerConnectionManager; // @synthesize compilerConnectionManager=_compilerConnectionManager;
@property(readonly) NSObject<OS_dispatch_queue> *compilerQueue; // @synthesize compilerQueue=_compilerQueue;
@property(readonly) CDStruct_41a22ec7 cacheUUID; // @synthesize cacheUUID=_cacheUUID;
@property(readonly, copy) NSString *pluginPath; // @synthesize pluginPath=_pluginPath;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)compileFunction:(id)arg1 stateData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compileFragmentFunction:(id)arg1 serializedPixelFormat:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compileVertexFunction:(id)arg1 serializedPipelineDescriptorData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(_Bool)arg5 options:(unsigned int)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)compileRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void *)getShaderCacheKeys;
- (void)unloadShaderCaches;
@property(readonly) struct MTLCompilerCache *functionCache; // @synthesize functionCache=_functionCache;
- (id)initWithTargetData:(id)arg1 cacheUUID:(CDStruct_41a22ec7 *)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5;

@end

