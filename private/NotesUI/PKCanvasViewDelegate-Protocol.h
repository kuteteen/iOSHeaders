//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class PKCanvasView, PKDrawing, UITouch;

@protocol PKCanvasViewDelegate <NSObject>

@optional
- (void)canvasViewRenderingDidFinish:(PKCanvasView *)arg1;
- (void)canvasViewDidEndStroke:(PKCanvasView *)arg1;
- (void)canvasViewDidCancelStroke:(PKCanvasView *)arg1;
- (void)canvasViewDidBeginNewStroke:(PKCanvasView *)arg1;
- (void)canvasViewWillBeginNewStroke:(PKCanvasView *)arg1 withTouch:(UITouch *)arg2;
- (void)canvasViewDrawingDidChange:(PKCanvasView *)arg1;
- (void)canvasView:(PKCanvasView *)arg1 drawingDidChange:(PKDrawing *)arg2;
@end

