//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLayoutManager, UIImage;

@interface UITextDragPreviewRenderer : NSObject
{
    struct _NSRange _range;
    struct CGRect _firstRect;
    struct CGRect _lastRect;
    struct CGRect _middleRect;
    struct CGPoint _origin;
    UIImage *_image;
    _Bool _calculated;
    _Bool _unifyRects;
    NSLayoutManager *_layoutManager;
}

@property(readonly, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
- (void).cxx_destruct;
- (void)adjustFirstLineRect:(inout struct CGRect *)arg1 bodyRect:(inout struct CGRect *)arg2 lastLineRect:(inout struct CGRect *)arg3 textOrigin:(struct CGPoint)arg4;
- (struct CGRect)_rawBoundingRect;
- (struct CGRect)_correctlyOffsetBoundingRect;
- (void)_calculateRectsUsingLayoutManager:(id)arg1;
- (void)_calculate;
@property(readonly, nonatomic) struct CGRect lastLineRect;
@property(readonly, nonatomic) struct CGRect bodyRect;
@property(readonly, nonatomic) struct CGRect firstLineRect;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithLayoutManager:(id)arg1 range:(struct _NSRange)arg2 unifyRects:(_Bool)arg3;
- (id)initWithLayoutManager:(id)arg1 range:(struct _NSRange)arg2;

@end

