//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyleExtraView : NSObject
{
    int _clipContainerType;
    int _alignment;
    UIView *_view;
    CDUnknownBlockType _animation;
}

+ (id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(CDUnknownBlockType)arg3 onSnapshot:(_Bool)arg4;
@property(copy, nonatomic) CDUnknownBlockType animation; // @synthesize animation=_animation;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) int clipContainerType; // @synthesize clipContainerType=_clipContainerType;
- (void)dealloc;

@end

