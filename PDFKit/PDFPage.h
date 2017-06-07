//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSArray, NSAttributedString, NSData, NSString, PDFDocument, PDFPagePrivate;

@interface PDFPage : NSObject <NSCopying>
{
    PDFPagePrivate *_private;
}

+ (_Bool)isExcludingAKAnnotationRenderingForThisThread;
+ (void)setExcludingAKAnnotationRenderingForThisThread:(_Bool)arg1;
+ (_Bool)shouldHideWidgetsAndMarkupsForThisThread;
+ (void)setShouldHideWidgetsAndMarkupsForThisThread:(_Bool)arg1;
+ (_Bool)isNativeRotationDrawingEnabledForThisThread;
+ (void)setNativeRotationDrawingEnabledForThisThread:(_Bool)arg1;
+ (id)fontWithPDFFont:(struct CGPDFFont *)arg1 size:(float)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_documentIndex;
- (void)scanData:(id)arg1;
- (void)scanAddedAnnotations;
- (void)_postAnnotationsChangedNotificationCoalesced;
- (void)postAnnotationsChangedNotification;
- (void)printActivePageAnnotations;
- (void)resetChangedAnnotations;
- (id)changedAnnotations;
- (void)clearAnnotationChanges;
- (id)annotationChanges;
- (void)changedAnnotation:(id)arg1;
- (id)scannedAnnotationAtPoint:(struct CGPoint)arg1;
- (void)addScannedAnnotation:(id)arg1;
- (void)setDisplaysMarkupAnnotations:(_Bool)arg1;
- (void)addAnnotationFormField:(id)arg1;
- (id)annotationWithUUID:(id)arg1;
- (void)getAnnotations;
- (id)scannedAnnotations;
- (void)drawPopupAnnotationsWithBox:(long long)arg1;
- (_Bool)hasOpenPopups;
- (void)drawBurnedInAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (struct CGAffineTransform)getDrawingTransformForBox:(long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (_Bool)columnAtPoint:(struct CGPoint)arg1;
- (_Bool)columnAtPointIfAvailable:(struct CGPoint)arg1;
- (void)loadTextChars;
- (void)setEnqueuedForDataDetection:(_Bool)arg1;
- (_Bool)enqueuedForDataDetection;
- (_Bool)hasRunDataDetectors;
- (void)setPageLayout:(struct CGPDFLayout *)arg1;
- (void)setColorWidgetBackgrounds:(_Bool)arg1;
- (_Bool)colorWidgetBackgrounds;
- (void)setBookmarked:(_Bool)arg1 updateBookmarks:(_Bool)arg2;
- (void)setBookmarked:(_Bool)arg1;
- (_Bool)isBookmarked;
- (void)setEnqueuedForLayout:(_Bool)arg1;
- (void)setThreadFetchingLayout:(struct _opaque_pthread_t *)arg1;
- (void)purgePageLayout;
- (struct CGPDFLayout *)pageLayout;
- (void)fetchPageLayoutOnThread:(id)arg1;
- (void)pageLayoutInvokation;
- (struct __CFDictionary *)gcCreateBoxDictionary;
- (void)noteUnsupportedFeature:(id)arg1;
- (_Bool)writeToConsumer:(struct CGDataConsumer *)arg1;
- (_Bool)hasArtBox;
- (_Bool)hasTrimBox;
- (_Bool)hasBleedBox;
- (_Bool)hasCropBox;
- (void)_addBox:(int)arg1 toDictionary:(struct __CFDictionary *)arg2 offset:(struct CGPoint)arg3;
- (id)selectionFromPointToBottom:(struct CGPoint)arg1 type:(int)arg2;
- (id)selectionFromTopToPoint:(struct CGPoint)arg1 type:(int)arg2;
- (id)selectionForAll;
- (id)selectionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 type:(int)arg3;
- (struct CGPDFLayout *)pageLayoutIfAvail;
- (_Bool)enqueuedForLayout;
- (id)selectionForRangeCommon:(struct _NSRange)arg1 isCodeRange:(_Bool)arg2;
- (id)createAttributedStringCP;
- (void)_commonInit;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)selectionForRange:(struct _NSRange)arg1;
- (id)selectionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)selectionForLineAtPoint:(struct CGPoint)arg1;
- (id)selectionForWordAtPoint:(struct CGPoint)arg1;
- (id)selectionForRect:(struct CGRect)arg1;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (struct CGRect)characterBoundsAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedString;
@property(readonly, nonatomic) NSString *string;
@property(readonly, nonatomic) unsigned long long numberOfCharacters;
- (void)transformContext:(struct CGContext *)arg1 forBox:(long long)arg2;
- (struct CGAffineTransform)transformForBox:(long long)arg1;
- (id)unsupportedFeatures;
- (id)selectionForCodeRange:(struct _NSRange)arg1;
- (struct CGImage *)_newCGImageWithBox:(long long)arg1 bitmapSize:(struct CGSize)arg2 scale:(double)arg3 offset:(struct CGPoint)arg4 fillBackground:(_Bool)arg5 withRotation:(_Bool)arg6 withAntialiasing:(_Bool)arg7 withAnnotations:(_Bool)arg8 withBookmark:(_Bool)arg9 withDelegate:(id)arg10;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withRotation:(_Bool)arg3 withAntialiasing:(_Bool)arg4 withAnnotations:(_Bool)arg5 withBookmark:(_Bool)arg6 withDelegate:(id)arg7;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withRotation:(_Bool)arg3 withAntialiasing:(_Bool)arg4 withAnnotations:(_Bool)arg5 withBookmark:(_Bool)arg6;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withRotation:(_Bool)arg3 withAntialiasing:(_Bool)arg4 withAnnotations:(_Bool)arg5;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withRotation:(_Bool)arg3 withAntialiasing:(_Bool)arg4;
- (id)noFillthumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withBookmark:(_Bool)arg3;
- (id)noFillthumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withBookmark:(_Bool)arg3;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2;
- (void)_drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withRotation:(_Bool)arg3 withAntialiasing:(_Bool)arg4 isThumbnail:(_Bool)arg5 withAnnotations:(_Bool)arg6 withBookmark:(_Bool)arg7 withDelegate:(id)arg8;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 isThumbnail:(_Bool)arg3;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)drawWithBox:(long long)arg1 toContext:(struct CGContext *)arg2;
- (id)annotationAtRect:(struct CGRect)arg1;
- (id)annotationAtPoint:(struct CGPoint)arg1;
- (void)removeAnnotation:(id)arg1 atIndex:(long long)arg2;
- (void)removeAnnotation:(id)arg1;
- (void)insertAnnotation:(id)arg1 atIndex:(long long)arg2;
- (void)addAnnotation:(id)arg1;
@property(nonatomic) _Bool displaysAnnotations;
- (void)lazilyLoadAnnotationsWithView:(id)arg1;
- (void)lazilyLoadAnnotations;
- (id)allAnnotations;
@property(readonly, nonatomic) NSArray *annotations;
@property(nonatomic) long long rotation;
- (void)setBounds:(struct CGRect)arg1 forBox:(long long)arg2;
- (struct CGRect)boundsForBox:(long long)arg1;
- (void)setLabel:(id)arg1;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) struct CGPDFPage *pageRef;
@property(readonly, nonatomic) __weak PDFDocument *document;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (id)init;
- (void)_drawAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)purgeAll;
- (void)setDocument:(id)arg1;
- (_Bool)setPageRef:(struct CGPDFPage *)arg1;
- (void)setupAKPageAdaptorIfNecessary;
- (id)initWithPageRef:(struct CGPDFPage *)arg1;
- (id)akPageAdaptor;

@end
