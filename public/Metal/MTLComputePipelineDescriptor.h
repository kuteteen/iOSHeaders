//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MTLPipelineBufferDescriptorArray, MTLStageInputOutputDescriptor, NSString;

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

// Remaining properties
@property(readonly) MTLPipelineBufferDescriptorArray *buffers; // @dynamic buffers;
@property(retain, nonatomic) id <MTLFunction> computeFunction; // @dynamic computeFunction;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(copy, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor; // @dynamic stageInputDescriptor;
@property(nonatomic) _Bool threadGroupSizeIsMultipleOfThreadExecutionWidth; // @dynamic threadGroupSizeIsMultipleOfThreadExecutionWidth;

@end

