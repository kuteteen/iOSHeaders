//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKQuadtree : NSObject
{
    struct GKCQuadTree<NSObject> *_cQuadTree;
}

+ (id)quadtreeWithBoundingQuad:(struct GKQuad)arg1 minimumCellSize:(float)arg2;
- (_Bool)removeElement:(id)arg1 withNode:(id)arg2;
- (_Bool)removeElement:(id)arg1;
- (id)elementsInQuad:(struct GKQuad)arg1;
- (id)elementsAtPoint: /* Error: Ran out of types for this method. */;
- (id)addElement:(id)arg1 withQuad:(struct GKQuad)arg2;
- (id)addElement:(id)arg1 withPoint: /* Error: Ran out of types for this method. */;
- (void)dealloc;
- (id)initWithBoundingQuad:(struct GKQuad)arg1 minimumCellSize:(float)arg2;
- (id)init;

@end

