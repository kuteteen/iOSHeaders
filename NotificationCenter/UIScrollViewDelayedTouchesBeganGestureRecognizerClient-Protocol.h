//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotificationCenter/NSObject-Protocol.h>

@class NSSet, UIEvent, UIView;

@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <NSObject>
@property(readonly, nonatomic, getter=_canScrollY) _Bool canScrollY;
@property(readonly, nonatomic, getter=_canScrollX) _Bool canScrollX;
@property(readonly, nonatomic, getter=_scrollHysteresis) double scrollHysteresis;
@property(readonly, nonatomic, getter=_touchDelayForScrollDetection) double touchDelayForScrollDetection;
@property(readonly, nonatomic) _Bool delaysContentTouches;
- (_Bool)touchesShouldBegin:(NSSet *)arg1 withEvent:(UIEvent *)arg2 inContentView:(UIView *)arg3;
@end

