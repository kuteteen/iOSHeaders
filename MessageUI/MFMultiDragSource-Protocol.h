//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSArray, UIView;
@protocol MFDraggableItem;

@protocol MFMultiDragSource <NSObject>
- (void)animatePlaceholderForDragFailureWithItems:(NSArray *)arg1;
- (void)dragCompletedWithItems:(NSArray *)arg1 success:(_Bool)arg2;
- (void)dragStartedWithItems:(NSArray *)arg1;
- (UIView *)viewForDraggedItem:(id <MFDraggableItem>)arg1 atScale:(double)arg2;
- (struct CGRect)frameForDraggedItem:(id <MFDraggableItem>)arg1 isPivotView:(out _Bool *)arg2;
- (NSArray *)itemsForDragAtPoint:(struct CGPoint)arg1;
- (UIView *)viewForDragSource;
- (_Bool)shouldCollapseMultipleItems;
- (_Bool)allowsDrag;
@end

