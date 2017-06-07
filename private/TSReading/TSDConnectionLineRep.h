//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDShapeRep.h>

@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep
{
    TSDPathSource *mLastPathSource;
}

+ (_Bool)canConnectToRep:(id)arg1;
+ (id)infosToConnectFromSelection:(id)arg1 withInteractiveCanvasController:(id)arg2;
- (_Bool)p_controlKnobVisible;
- (_Bool)p_isConnectedToLockedObjects;
- (_Bool)p_isConnected;
- (_Bool)i_editMenuOverlapsEndKnobs;
- (struct CGPoint)i_dragOffset;
- (void)updateFromLayout;
- (_Bool)canBeUsedForImageMask;
- (_Bool)directlyManagesLayerContent;
- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (struct CGRect)targetRectForEditMenu;
- (_Bool)canMakePathEditable;
- (_Bool)isDraggable;
- (_Bool)isSelectable;
- (id)additionalRepsForDragging;
- (_Bool)shouldCreateSelectionKnobs;
- (unsigned long long)enabledKnobMask;
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (_Bool)shouldShowCommentHighlight;
- (_Bool)shouldCreateKnobs;
- (_Bool)shouldShowSmartShapeKnobs;
- (_Bool)canConnectToRep:(id)arg1;
- (id)connectionLineLayout;
- (void)dealloc;

@end
