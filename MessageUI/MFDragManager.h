//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MessageUI/UIGestureRecognizerDelegate-Protocol.h>

@class MFGobblerGestureRecognizer, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIGestureRecognizer, UIView, UIWindow;
@protocol MFDragDestination, MFDraggableItem;

@interface MFDragManager : NSObject <UIGestureRecognizerDelegate>
{
    NSMutableArray *_dragContextValues;
    NSMutableArray *_dragDestinations;
    NSMutableArray *_dragSources;
    NSMutableDictionary *_gestureRecognizersForSource;
    NSMutableDictionary *_sourceForGestureRecognizer;
    id <MFDraggableItem> _draggedItem;
    UIView *_draggedItemView;
    id <MFDragDestination> _currentDestination;
    UIGestureRecognizer *_currentGestureBeingProcessed;
    UIWindow *_dragWindow;
    MFGobblerGestureRecognizer *_gobblerGestureRecognizer;
    NSTimer *_scrollTimer;
    struct CGPoint _offsetCenterOfDraggedView;
    struct CGPoint _previousGestureLocation;
    double _timeOfLastBigUpdate;
    struct CGRect _draggedItemOriginalFrame;
    _Bool _dragWasSuccessful;
    _Bool _scrollingForDrag;
}

+ (id)sharedInstance;
- (void)_scrollViewIfNecessary;
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)enumerateDragContextsUsingBlock:(CDUnknownBlockType)arg1;
- (void)cancelCurrentDragOperation;
- (void)_processGestureUpdate;
- (void)_cleanUpAfterDragCompleted;
- (void)removeDragSource:(id)arg1;
- (void)addDragSource:(id)arg1;
- (void)removeDragDestination:(id)arg1;
- (void)addDragDestination:(id)arg1;
- (void)removeDragContext:(id)arg1;
- (void)addDragContext:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

