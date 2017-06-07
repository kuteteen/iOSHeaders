//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/QLPrintingProtocol-Protocol.h>
#import <QuickLook/UITextViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UIPrintPageRenderer, UISimpleTextPrintFormatter, UITextView;

__attribute__((visibility("hidden")))
@interface QLTextItemViewController : QLItemViewController <UITextViewDelegate, QLPrintingProtocol>
{
    UITextView *_textView;
    NSAttributedString *_content;
    UISimpleTextPrintFormatter *_printFormatter;
    UIPrintPageRenderer *_pageRenderer;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (_Bool)providesCustomPrinter;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
@property(readonly) UIPrintPageRenderer *pageRenderer; // @synthesize pageRenderer=_pageRenderer;
@property(readonly) UISimpleTextPrintFormatter *printFormatter; // @synthesize printFormatter=_printFormatter;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (id)scrollView;
- (_Bool)shouldRecognizeGestureRecognizer:(id)arg1;
- (id)registeredKeyCommands;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (id)printer;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

