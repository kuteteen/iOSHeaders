//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CATextLayer, NSAttributedString;

@interface AVPictureInPictureIndicatorLayer : CALayer
{
    NSAttributedString *_attributedText;
    struct CGSize _imageSize;
    struct UIEdgeInsets _languageAwareOutsets;
    double _lineHeight;
    double _baselineOffset;
    CATextLayer *_textLayer;
    CALayer *_imageLayer;
}

- (void).cxx_destruct;
- (struct CGRect)textBoundingRectWhenDrawnInRect:(struct CGRect)arg1;
- (void)layoutSublayers;
- (id)init;
- (id)initWithTraitCollection:(id)arg1 opaque:(_Bool)arg2;

@end

