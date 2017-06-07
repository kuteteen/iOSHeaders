//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIEvent, UITouch;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedTouch : NSObject <NSCopying>
{
    UITouch *_touch;
    UITouch *_stateWhenDelayed;
    UITouch *_stateWhenDelivered;
    UIEvent *_event;
    long long _delayCount;
    _Bool _cloneForSecondDelivery;
}

@property _Bool cloneForSecondDelivery; // @synthesize cloneForSecondDelivery=_cloneForSecondDelivery;
@property(retain, nonatomic) UIEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) UITouch *stateWhenDelivered; // @synthesize stateWhenDelivered=_stateWhenDelivered;
@property(retain, nonatomic) UITouch *stateWhenDelayed; // @synthesize stateWhenDelayed=_stateWhenDelayed;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
- (void).cxx_destruct;
- (id)description;
- (double)timestampForDelivery;
- (long long)phaseForDelivery;
- (void)saveCurrentTouchState;
- (long long)delayCount;
- (void)incrementDelayCount;
- (long long)decrementDelayCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

