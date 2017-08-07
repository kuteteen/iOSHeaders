//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDragSession-Protocol.h>
#import <UIKit/_UIDragDropSessionInternal-Protocol.h>
#import <UIKit/_UIDraggingItemVisualTarget-Protocol.h>
#import <UIKit/_UIDraggingSessionDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSSet, NSString, UIDragInteraction, _UIDraggingSession, _UIInternalDraggingSessionSource;

__attribute__((visibility("hidden")))
@interface _UIDragSessionImpl : NSObject <_UIDraggingSessionDelegate, UIDragSession, _UIDraggingItemVisualTarget, _UIDragDropSessionInternal>
{
    _UIDraggingSession *_session;
    NSMapTable *_itemByDraggingItem;
    NSMutableArray *_allItems;
    NSMapTable *_dragSourceInteractionByItem;
    NSHashTable *_allInteractions;
    _UIInternalDraggingSessionSource *_internalSessionSource;
    _Bool _didHandOffDragImage;
    id _localContext;
    UIDragInteraction *_primaryInteraction;
}

+ (id)_localDragSessionForSessionDestination:(id)arg1;
+ (id)activeSessions;
@property(readonly, nonatomic) __weak UIDragInteraction *primaryInteraction; // @synthesize primaryInteraction=_primaryInteraction;
@property(retain, nonatomic) id localContext; // @synthesize localContext=_localContext;
- (void).cxx_destruct;
- (_Bool)_draggingItem:(id)arg1 shouldDelaySetDownAnimationWithCompletion:(CDUnknownBlockType)arg2;
- (void)_draggingItem:(id)arg1 willAnimateSetDownWithAnimator:(id)arg2;
- (struct CGRect)_targetFrameOfDraggingItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_prepareForSetDownAnimationInWindow:(id)arg1 withDraggingItem:(id)arg2 visibleDroppedItem:(id)arg3;
- (void)draggingSessionDidTransferItems:(id)arg1;
- (void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSession:(id)arg1 willAddItems:(id)arg2;
- (void)draggingSessionDidMove:(id)arg1;
- (_Bool)_draggingSession:(id)arg1 shouldCancelOnAppDeactivationWithDefault:(_Bool)arg2;
- (void)_draggingSessionHandedOffDragImage:(id)arg1;
- (void)draggingSessionWillBegin:(id)arg1;
- (_Bool)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (_Bool)draggingSessionPrefersFullSizePreviews:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (_Bool)canLoadObjectsOfClass:(Class)arg1;
- (_Bool)hasItemsConformingToTypeIdentifiers:(id)arg1;
@property(readonly, nonatomic, getter=isRestrictedToDraggingApplication) _Bool restrictedToDraggingApplication;
@property(readonly, nonatomic) _Bool allowsMoveOperation;
- (struct CGPoint)locationInView:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
- (void)_cancelDrag;
@property(readonly, nonatomic) long long _dataOwner;
@property(readonly, nonatomic, getter=_allowsItemsToUpdate) _Bool _allowsItemsToUpdate;
- (void)_itemsNeedUpdate:(id)arg1;
- (void)_setDraggingSession:(id)arg1;
- (id)_draggingSession;
- (id)dragSourceInteractionForDragItem:(id)arg1;
- (void)addItems:(id)arg1 forDragSourceInteraction:(id)arg2;
- (id)itemForDraggingItem:(id)arg1;
- (void)associateItem:(id)arg1 withDraggingItem:(id)arg2;
@property(readonly, nonatomic) NSSet *trackedInteractions;
- (_Bool)_isActive;
- (_Bool)_canAddItems;
- (id)initWithInteraction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

