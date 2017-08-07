//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@class MPSExternalCNNBinary;
@protocol MPSImageAllocator, MPSNNPadding;

@interface MPSCNNBinaryKernel : MPSKernel
{
    CDStruct_d6af7fc0 _primaryOffset;
    CDStruct_d6af7fc0 _secondaryOffset;
    CDStruct_1e3be3a8 _clipRect;
    unsigned long long _destinationFeatureChannelOffset;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    _Bool _isBackwards;
    _Bool _supportsBroadcasting;
    id <MPSNNPadding> _padding;
    unsigned long long _primaryEdgeMode;
    unsigned long long _secondaryEdgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    void *_encodeData;
    MPSExternalCNNBinary *_plugin;
    unsigned long long _primaryStrideInPixelsX;
    unsigned long long _primaryStrideInPixelsY;
    unsigned long long _secondaryStrideInPixelsX;
    unsigned long long _secondaryStrideInPixelsY;
    id <MPSImageAllocator> _destinationImageAllocator;
}

@property(retain, nonatomic) id <MPSImageAllocator> destinationImageAllocator; // @synthesize destinationImageAllocator=_destinationImageAllocator;
@property(retain, nonatomic) id <MPSNNPadding> padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool isBackwards; // @synthesize isBackwards=_isBackwards;
@property(readonly, nonatomic) unsigned long long secondaryStrideInPixelsY; // @synthesize secondaryStrideInPixelsY=_secondaryStrideInPixelsY;
@property(readonly, nonatomic) unsigned long long secondaryStrideInPixelsX; // @synthesize secondaryStrideInPixelsX=_secondaryStrideInPixelsX;
@property(readonly, nonatomic) unsigned long long primaryStrideInPixelsY; // @synthesize primaryStrideInPixelsY=_primaryStrideInPixelsY;
@property(readonly, nonatomic) unsigned long long primaryStrideInPixelsX; // @synthesize primaryStrideInPixelsX=_primaryStrideInPixelsX;
@property(readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
@property(nonatomic) unsigned long long destinationFeatureChannelOffset; // @synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset;
@property(nonatomic) unsigned long long secondaryEdgeMode; // @synthesize secondaryEdgeMode=_secondaryEdgeMode;
@property(nonatomic) unsigned long long primaryEdgeMode; // @synthesize primaryEdgeMode=_primaryEdgeMode;
@property(nonatomic) CDStruct_1e3be3a8 clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) CDStruct_d6af7fc0 secondaryOffset; // @synthesize secondaryOffset=_secondaryOffset;
@property(nonatomic) CDStruct_d6af7fc0 primaryOffset; // @synthesize primaryOffset=_primaryOffset;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 updateOffset:(_Bool)arg3;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4 consumedState:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4;
- (id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3;
- (struct MPSRegion)secondarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (struct MPSRegion)primarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

