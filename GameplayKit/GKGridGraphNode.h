//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKGraphNode.h>

@interface GKGridGraphNode : GKGraphNode
{
    struct GKCGridGraphNode *_cGridGraphNode;
}

+ (id)nodeWithGridPosition: /* Error: Ran out of types for this method. */;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)costToNode:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)initWithGridPosition: /* Error: Ran out of types for this method. */;
// Error parsing type for property gridPosition:
// Property attributes: T,R,N

- (id)init;
- (void)deleteCGraphNode;
- (struct GKCGraphNode *)makeCGraphNode;
- (struct GKCGridGraphNode *)cGridGraphNode;

@end

