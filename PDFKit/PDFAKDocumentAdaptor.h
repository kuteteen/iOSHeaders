//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/AKControllerDelegateProtocol-Protocol.h>

@class AKController, AKModelController, NSString, PDFAKDocumentAdaptorPrivate, PDFDocument, PDFView, UIView;
@protocol PDFAKControllerDelegateProtocol;

__attribute__((visibility("hidden")))
@interface PDFAKDocumentAdaptor : NSObject <AKControllerDelegateProtocol>
{
    PDFAKDocumentAdaptorPrivate *_private;
}

- (void).cxx_destruct;
- (void)_pdfDocumentDidUnlock:(id)arg1;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)characterIndexesForQuadPoints:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)quadPointsForCharacterIndexes:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)clearHighlightableSelectionForAnnotationController:(id)arg1;
- (id)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (_Bool)hasHighlightableSelectionForAnnotationController:(id)arg1;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (void)controllerDidExitToolMode:(id)arg1;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (struct CGRect)positioningRectForCandidatePicker;
- (_Bool)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(id)arg4;
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (struct CGAffineTransform)_compensatingAffineTransformForPage:(id)arg1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)undoManagerForAnnotationController:(id)arg1;
- (void)pdfDocument:(id)arg1 didReplacePagePlaceholder:(id)arg2 atIndex:(unsigned long long)arg3 withPage:(id)arg4;
- (void)pdfDocument:(id)arg1 didInsertPagePlaceholder:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)pdfDocument:(id)arg1 didExchangePage:(id)arg2 atIndex:(unsigned long long)arg3 withPage:(id)arg4 atIndex:(unsigned long long)arg5;
- (void)pdfDocument:(id)arg1 willRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)pdfDocument:(id)arg1 didInsertPage:(id)arg2 atIndex:(unsigned long long)arg3;
@property(nonatomic) __weak id <PDFAKControllerDelegateProtocol> PDFAKControllerDelegate;
@property(readonly, nonatomic) UIView *akToolbarView;
@property(readonly, nonatomic) AKModelController *akDocumentModelController;
@property(readonly, nonatomic) AKController *akMainController;
@property(readonly, nonatomic) __weak PDFDocument *pdfDocument;
@property(nonatomic) __weak PDFView *pdfView;
- (void)teardown;
- (void)dealloc;
- (id)initWithPDFDocument:(id)arg1 andView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

