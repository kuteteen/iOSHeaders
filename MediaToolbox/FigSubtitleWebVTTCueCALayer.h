//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTCueCALayer : FigBaseCALayer
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)setDefaultFontSize:(double)arg1;
- (void)setViewport:(struct CGRect)arg1;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;
- (void)setContent:(struct __CFAttributedString *)arg1;
- (struct __CFString *)getContentID;
- (unsigned char)isDirty;
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;
- (void)setCuePosition:(struct CGPoint)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

