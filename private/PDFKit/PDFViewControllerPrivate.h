//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, PDFPage, PDFSelection, PDFView, UIMenuController;

@interface PDFViewControllerPrivate : NSObject
{
    PDFView *view;
    struct CGRect viewMarquee;
    CALayer *marqueeEffect;
    UIMenuController *menuController;
    PDFSelection *touchSelection;
    PDFPage *touchLeftPage;
    struct CGPoint touchLeftPoint;
    PDFPage *touchRightPage;
    struct CGPoint touchRightPoint;
    _Bool isWordSelecting;
    int draggingHandleState;
}

- (void).cxx_destruct;

@end
