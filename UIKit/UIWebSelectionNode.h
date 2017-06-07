//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIWebSelection, UIWebSelectionGraph;

__attribute__((visibility("hidden")))
@interface UIWebSelectionNode : NSObject
{
    UIWebSelectionNode *_fromTopByExpanding;
    UIWebSelectionNode *_fromTopByContracting;
    UIWebSelectionNode *_fromBottomByExpanding;
    UIWebSelectionNode *_fromBottomByContracting;
    UIWebSelectionNode *_fromRightByExpanding;
    UIWebSelectionNode *_fromRightByContracting;
    UIWebSelectionNode *_fromLeftByExpanding;
    UIWebSelectionNode *_fromLeftByContracting;
    UIWebSelectionGraph *_sharedGraph;
    UIWebSelection *_selection;
    _Bool _invalid;
}

@property(retain) UIWebSelection *selection; // @synthesize selection=_selection;
- (void)invalidate;
- (id)nodeByMovingEdge:(int)arg1 outwards:(_Bool)arg2;
- (int)oppositeEdge:(int)arg1;
- (id *)nodeByReferenceFromEdge:(int)arg1 outwards:(_Bool)arg2;
- (void)dealloc;
- (id)initWithSelection:(id)arg1 inGraph:(id)arg2;

@end

