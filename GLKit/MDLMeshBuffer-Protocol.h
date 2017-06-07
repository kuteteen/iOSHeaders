//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/NSCopying-Protocol.h>
#import <GLKit/NSObject-Protocol.h>

@class MDLMeshBufferMap, NSData;
@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

@protocol MDLMeshBuffer <NSObject, NSCopying>
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, retain, nonatomic) id <MDLMeshBufferZone> zone;
@property(readonly, retain, nonatomic) id <MDLMeshBufferAllocator> allocator;
@property(readonly, nonatomic) unsigned long long length;
- (MDLMeshBufferMap *)map;
- (void)fillData:(NSData *)arg1 offset:(unsigned long long)arg2;
@end

