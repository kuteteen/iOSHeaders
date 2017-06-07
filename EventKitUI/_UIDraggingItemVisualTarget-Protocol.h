//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class UIViewPropertyAnimator, _UIDraggingItem;
@protocol UICoordinateSpace;

@protocol _UIDraggingItemVisualTarget <NSObject>
- (struct CGRect)targetFrameOfDraggingItem:(_UIDraggingItem *)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;

@optional
- (void)draggingItem:(_UIDraggingItem *)arg1 willAnimateDisappearanceWithAnimator:(UIViewPropertyAnimator *)arg2;
- (void)draggingItem:(_UIDraggingItem *)arg1 willAnimateSetDownWithAnimator:(UIViewPropertyAnimator *)arg2;
@end

