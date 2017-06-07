//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;
@protocol MTLBuffer;

@interface MTLRenderPassDescriptor : NSObject <NSCopying>
{
    unsigned long long _renderTargetArrayLength;
}

+ (id)renderPassDescriptor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
@property(nonatomic) unsigned long long renderTargetArrayLength; // @synthesize renderTargetArrayLength=_renderTargetArrayLength;
- (unsigned long long)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments; // @dynamic colorAttachments;
@property(copy, nonatomic) MTLRenderPassDepthAttachmentDescriptor *depthAttachment; // @dynamic depthAttachment;
@property(copy, nonatomic) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment; // @dynamic stencilAttachment;
@property(retain, nonatomic) id <MTLBuffer> visibilityResultBuffer; // @dynamic visibilityResultBuffer;

@end

