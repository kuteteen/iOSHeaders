//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBShapeOperator : NSObject
{
    double _scale;
}

+ (id)operatorWithScale:(double)arg1;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)shapesByCenteringShapes:(id)arg1 insideRect:(struct CGRect)arg2;
- (id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(long long)arg3;
- (id)shapesByScalingShapes:(id)arg1 factor:(struct CGSize)arg2;
- (id)geometryByScalingShapeGeometry:(id)arg1 factor:(struct CGSize)arg2;
- (id)shapeByScalingShape:(id)arg1 factor:(struct CGSize)arg2;
- (struct CGRect)rectByScalingRect:(struct CGRect)arg1 factor:(struct CGSize)arg2;
- (struct CGRect)_scaleRect:(struct CGRect)arg1 factor:(struct CGSize)arg2;
- (CDStruct_c3b9c2ee)_scaleRange:(CDStruct_c3b9c2ee)arg1 factor:(double)arg2;

@end

