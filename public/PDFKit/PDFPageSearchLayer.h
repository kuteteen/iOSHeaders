//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PDFPageSearchLayerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageSearchLayer : CALayer
{
    PDFPageSearchLayerPrivate *_private;
}

- (void).cxx_destruct;
- (id)_hashRectTransformPair:(CDStruct_b93daf5b *)arg1;
- (id)_activeColor;
- (void)_generateRects;
- (void)updateRotation;
- (void)addSelection:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setDisplayBox:(long long)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (void)dealloc;
- (id)init;

@end
