//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject
{
    double timestamp;
    long long phase;
    unsigned long long tapCount;
    UIWindow *window;
    struct CGPoint locationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
}

+ (id)syntheticTouchWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3;
@property(nonatomic) float _pathMajorRadius; // @synthesize _pathMajorRadius;
@property(readonly, nonatomic) unsigned char _pathIdentity; // @synthesize _pathIdentity;
@property(readonly, nonatomic) unsigned char _pathIndex; // @synthesize _pathIndex;
@property(nonatomic) struct CGPoint locationInWindow; // @synthesize locationInWindow;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
@property(nonatomic) unsigned long long tapCount; // @synthesize tapCount;
@property(nonatomic) long long phase; // @synthesize phase;
@property(nonatomic) double timestamp; // @synthesize timestamp;
- (void)_setLocationInWindow:(struct CGPoint)arg1 resetPrevious:(_Bool)arg2;
- (struct CGPoint)getLocationInWindow;
- (struct CGPoint)previousLocationInView:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (void)dealloc;
- (id)initWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3;

@end

