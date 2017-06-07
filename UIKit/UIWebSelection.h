//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITextSelection, UIWebDocumentView;
@protocol UIWebSelectionBlock;

__attribute__((visibility("hidden")))
@interface UIWebSelection : NSObject
{
    UIWebDocumentView *_documentView;
    id <UIWebSelectionBlock> _base;
    id <UIWebSelectionBlock> _extent;
    struct CGSize _desiredSize;
    UITextSelection *_textSelection;
}

@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=_desiredSize;
@property(readonly, nonatomic) UITextSelection *textSelection; // @synthesize textSelection=_textSelection;
@property(retain, nonatomic) id <UIWebSelectionBlock> extent; // @synthesize extent=_extent;
@property(retain, nonatomic) id <UIWebSelectionBlock> base; // @synthesize base=_base;
@property(readonly, nonatomic) UIWebDocumentView *documentView; // @synthesize documentView=_documentView;
- (_Bool)isEqualToSelection:(id)arg1;
- (id)description;
- (_Bool)blockContainsPoint:(struct CGPoint)arg1;
- (void)applySelectionToWebDocumentView;
- (id)asDomRange;
- (void)selectionChanged;
- (struct CGRect)boundingTextSelectionRectAndInsideFixedPosition:(int *)arg1;
- (struct CGRect)boundingTextSelectionRect;
- (id)textSelectionRects;
- (void)useBlock;
@property(readonly, nonatomic, getter=isTextOnly) _Bool textOnly;
- (id)duplicate;
- (void)shrinkSelectionFromPoint:(struct CGPoint)arg1 towardsPoint:(struct CGPoint)arg2 withNewRect:(struct CGRect)arg3;
- (_Bool)tryToShrinkToBaseAndExtent;
- (void)growSelectionTowardsPoint:(struct CGPoint)arg1;
- (void)moveEdge:(int)arg1 outwards:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)shrinkFromEdge:(int)arg1;
- (void)growFromEdge:(int)arg1;
- (double)distanceBetweenFirstRect:(struct CGRect)arg1 second:(struct CGRect)arg2 edge:(int)arg3;
- (id)blockOfSameWidthAtPoint:(struct CGPoint)arg1;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (id)blockAtPoint:(struct CGPoint)arg1;
- (void)adjustSelectionFromPoint:(struct CGPoint)arg1 towardsPoint:(struct CGPoint)arg2 withNewRect:(struct CGRect)arg3;
- (id)webArchive;
- (id)textRepresentation;
- (id)domDocument;
- (id)webFrame;
- (id)webView;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
@property(readonly, nonatomic) struct CGRect boundingRect; // @dynamic boundingRect;
@property(readonly, nonatomic) _Bool valid;
- (void)setSelectionWithPoint:(struct CGPoint)arg1 ignoringLargeBlocks:(_Bool)arg2;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithDocumentView:(id)arg1;

@end

