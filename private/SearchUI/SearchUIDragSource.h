//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/UIDragInteractionDelegate-Protocol.h>
#import <SearchUI/UIDragInteractionDelegate_Private-Protocol.h>

@class NSString, SearchUIDropTarget, UIView;
@protocol SearchUIDragObject;

@interface SearchUIDragSource : NSObject <UIDragInteractionDelegate, UIDragInteractionDelegate_Private>
{
    id <SearchUIDragObject> _dragObject;
    UIView *_overrideDragPreviewView;
    UIView *_dragSourceView;
    SearchUIDropTarget *_dropTarget;
}

+ (_Bool)draggingSupported;
+ (id)dragSourceForView:(id)arg1 dragObject:(id)arg2;
@property(retain) SearchUIDropTarget *dropTarget; // @synthesize dropTarget=_dropTarget;
@property __weak UIView *dragSourceView; // @synthesize dragSourceView=_dragSourceView;
@property(retain) UIView *overrideDragPreviewView; // @synthesize overrideDragPreviewView=_overrideDragPreviewView;
@property(retain) id <SearchUIDragObject> dragObject; // @synthesize dragObject=_dragObject;
- (void).cxx_destruct;
- (_Bool)_shouldPerformHitTestingForDragSessionInView:(id)arg1;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (_Bool)isMailDrag;
- (id)dragParametersForPreviewView:(id)arg1;
- (id)initWithView:(id)arg1 dragObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

