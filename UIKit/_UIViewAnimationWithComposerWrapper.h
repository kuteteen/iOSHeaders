//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface _UIViewAnimationWithComposerWrapper : NSObject
{
    id <UIIntervalAnimating> _animation;
    id <UIViewAnimationComposing> _composer;
}

+ (id)instanceWithAnimation:(id)arg1 composer:(id)arg2;
@property(retain, nonatomic) id <UIViewAnimationComposing> composer; // @synthesize composer=_composer;
@property(retain, nonatomic) id <UIIntervalAnimating> animation; // @synthesize animation=_animation;
- (void).cxx_destruct;

@end

