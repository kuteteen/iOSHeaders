//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedMatrix4x4 : MDLAnimatedValue
{
}

-     // Error parsing type: Q32@0:8^{?=[4]}16Q24, name: copyDouble4x4ArrayInto:maxCount:
-     // Error parsing type: Q32@0:8^{?=[4]}16Q24, name: copyFloat4x4ArrayInto:maxCount:
-     // Error parsing type: v40@0:8r^{?=[4]}16r^d24Q32, name: resetWithDouble4x4Array:atTimes:count:
-     // Error parsing type: v40@0:8r^{?=[4]}16r^d24Q32, name: resetWithFloat4x4Array:atTimes:count:
-     // Error parsing type: {?=[4]}24@0:8d16, name: double4x4AtTime:
-     // Error parsing type: {?=[4]}24@0:8d16, name: float4x4AtTime:
-     // Error parsing type: v152@0:8{?=[4]}16d144, name: setDouble4x4:atTime:
-     // Error parsing type: v88@0:8{?=[4]}16d80, name: setFloat4x4:atTime:
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (struct VtValue)defaultVtValue;
- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;

@end

