//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSArray, NSDictionary, SCNGeometry, SCNNode;

@protocol SCNPhysicsShapeJSExport <JSExport>
+ (id)shapeWithShapes:(NSArray *)arg1 transforms:(NSArray *)arg2;
+ (id)shapeWithNode:(SCNNode *)arg1 options:(NSDictionary *)arg2;
+ (id)shapeWithGeometry:(SCNGeometry *)arg1 options:(NSDictionary *)arg2;
@property(readonly, nonatomic) NSArray *transforms;
@property(readonly, nonatomic) id sourceObject;
@property(readonly, nonatomic) NSDictionary *options;
- (id)copy;
@end

