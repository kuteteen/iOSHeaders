//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTKMesh, MTKMeshBuffer, NSString;

@interface MTKSubmesh : NSObject
{
    unsigned long long _primitiveType;
    unsigned long long _indexType;
    MTKMeshBuffer *_indexBuffer;
    unsigned long long _indexCount;
    MTKMesh *_mesh;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak MTKMesh *mesh; // @synthesize mesh=_mesh;
@property(readonly, nonatomic) unsigned long long indexCount; // @synthesize indexCount=_indexCount;
@property(readonly, nonatomic) MTKMeshBuffer *indexBuffer; // @synthesize indexBuffer=_indexBuffer;
@property(readonly, nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
@property(readonly, nonatomic) unsigned long long primitiveType; // @synthesize primitiveType=_primitiveType;
- (void).cxx_destruct;
- (id)initWithMesh:(id)arg1 submesh:(id)arg2 device:(id)arg3 error:(id *)arg4;

@end

