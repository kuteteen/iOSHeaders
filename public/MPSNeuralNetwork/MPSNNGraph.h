//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSKernel.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface MPSNNGraph : MPSKernel <NSCopying, NSSecureCoding>
{
    struct Graph _graph;
    _Bool _outputStateIsTemporary;
    id <MPSImageAllocator> _destinationImageAllocator;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
+ (id)graphWithDevice:(id)arg1 resultImage:(id)arg2;
@property(retain, nonatomic) id <MPSImageAllocator> destinationImageAllocator; // @synthesize destinationImageAllocator=_destinationImageAllocator;
@property(nonatomic) _Bool outputStateIsTemporary; // @synthesize outputStateIsTemporary=_outputStateIsTemporary;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setOptions:(unsigned long long)arg1;
- (id)executeAsyncWithSourceImages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 intermediateImages:(id)arg4 destinationStates:(id)arg5;
- (id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 intermediateImages:(id)arg4 destinationStates:(id)arg5;
- (id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2;
@property(readonly, nonatomic) id <MPSHandle> resultHandle;
@property(readonly, copy, nonatomic) NSArray *resultStateHandles;
@property(readonly, copy, nonatomic) NSArray *intermediateImageHandles;
@property(readonly, copy, nonatomic) NSArray *sourceStateHandles;
@property(readonly, copy, nonatomic) NSArray *sourceImageHandles;
- (id)initWithDevice:(id)arg1 resultImage:(id)arg2;
- (void)dealloc;

@end

