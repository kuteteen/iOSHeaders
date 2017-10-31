//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface NFContainerPool : NSObject
{
    _Bool _objectGraphDrainingEnabled;
    struct NSMutableDictionary *_singletons;
    struct NSMutableDictionary *_graph;
    unsigned long long _depth;
    unsigned long long _drainDepth;
    NSMutableArray *_onDrainBlocks;
    NSMutableArray *_onDrainCopyPoolObjectGraphBlocks;
}

@property(retain, nonatomic) NSMutableArray *onDrainCopyPoolObjectGraphBlocks; // @synthesize onDrainCopyPoolObjectGraphBlocks=_onDrainCopyPoolObjectGraphBlocks;
@property(retain, nonatomic) NSMutableArray *onDrainBlocks; // @synthesize onDrainBlocks=_onDrainBlocks;
@property(nonatomic, getter=isObjectGraphDrainingEnabled) _Bool objectGraphDrainingEnabled; // @synthesize objectGraphDrainingEnabled=_objectGraphDrainingEnabled;
@property(nonatomic) unsigned long long drainDepth; // @synthesize drainDepth=_drainDepth;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(retain, nonatomic) NSMutableDictionary *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) NSMutableDictionary *singletons; // @synthesize singletons=_singletons;
- (void).cxx_destruct;
- (void)drain;
@property(readonly, nonatomic, getter=isPoolPreparedForLockingGraph) _Bool poolPreparedForLockingGraph;
- (void)linkDepth:(CDUnknownBlockType)arg1;
- (void)onDrainCopyPoolObjectGraph:(CDUnknownBlockType)arg1;
- (void)onDrain:(CDUnknownBlockType)arg1;
- (id)enter:(CDUnknownBlockType)arg1;
- (id)copyWithObjectGraphDrainingDisabled;
- (id)init;

@end

