//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLWebViewPrintPageHelper.h>

@class NSMutableArray, UIWebPaginationInfo;

__attribute__((visibility("hidden")))
@interface QLLayoutedPrintPageRenderer : QLWebViewPrintPageHelper
{
    NSMutableArray *_nodes;
    UIWebPaginationInfo *_paginationInfo;
}

- (void).cxx_destruct;
- (id)pdfDataForPageAtIndex:(long long)arg1;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (long long)numberOfPages;
- (id)_currentNodes;
- (id)_htmlPageXPath;

@end

