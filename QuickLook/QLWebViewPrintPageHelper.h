//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLPrintingProtocol-Protocol.h>

@class NSString, NSURLRequest, QLPreviewConverter, UIWebBrowserView;

__attribute__((visibility("hidden")))
@interface QLWebViewPrintPageHelper : NSObject <QLPrintingProtocol>
{
    UIWebBrowserView *_browserView;
    NSURLRequest *_request;
    NSString *_documentType;
    QLPreviewConverter *_previewConverter;
    struct CGSize _printableSize;
}

+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
+ (_Bool)_isXPathType:(id)arg1;
@property(retain) QLPreviewConverter *previewConverter; // @synthesize previewConverter=_previewConverter;
@property(nonatomic) struct CGSize printableSize; // @synthesize printableSize=_printableSize;
- (void).cxx_destruct;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)pdfDataForPageAtIndex:(long long)arg1;
- (long long)numberOfPages;
- (void)_waitForPreview;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

@end

