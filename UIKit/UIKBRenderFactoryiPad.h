//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBRenderFactoryiPhone.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone
{
}

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (void)setupLayoutSegments;
- (double)_row4ControlSegmentWidthRight;
- (double)_row4ControlSegmentWidthLeft;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;
- (long long)rowLimitForKey:(id)arg1;
- (double)defaultVariantSizeThreshold;
- (struct CGSize)defaultVariantGeometrySize;
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (id)lowQualityLayeredBackgroundColorName;
- (struct CGPoint)dismissKeyOffset;
- (struct CGPoint)dualStringKeyOffset;
- (struct CGPoint)tinyPunctuationGlyphOffset;
- (double)tinyPunctuationGlyphFontSize;
- (double)messagesTypeKeyplanSwitchKeyFontSize;
- (double)fallbackFontSize;
- (double)zhuyinFirstToneKeyFontSize;
- (double)facemarkKeyFontSize;
- (double)emailDotKeyFontSize;
- (double)smallKanaKeyFontSize;
- (double)dismissKeyFontSize;
- (double)spaceKeyFontSize;
- (double)dictationKeyFontSize;
- (double)internationalKeyFontSize;
- (double)moreKeyFontSize;
- (double)deleteKeyFontSize;
- (double)shiftKeyFontSize;
- (double)defaultPathWeight;
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (double)bottomRowDefaultFontSize;
- (double)dualStringKeyFontSizeAdjustment;
- (struct CGPoint)stringKeyOffset;
- (double)stringKeyFontSize;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (id)displayContentsForKey:(id)arg1;
- (struct CGRect)insetFrame:(struct CGRect)arg1 forKey:(id)arg2;
- (double)cornerRadiusForKey:(id)arg1;
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (struct UIEdgeInsets)variantSymbolFrameInsets;
- (struct UIEdgeInsets)variantDisplayFrameInsets;
- (struct UIEdgeInsets)variantPaddedFrameInsets;
- (struct UIEdgeInsets)wideShadowPaddleInsets;
- (_Bool)iPadFudgeLayout;
- (double)predictiveKeyCornerRadius;
- (double)skinnyKeyThreshold;
- (id)messagesWriteboardKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)shiftKeyImageName;
- (id)deleteOnKeyImageName;
- (id)deleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (struct CGPoint)secondaryShiftKeyOffset;
- (struct CGPoint)returnKeyOffset;
- (struct CGPoint)shiftKeyOffset;
- (struct CGPoint)deleteKeyOffset;
- (struct CGPoint)dictationKeyOffset;
- (struct CGPoint)internationalKeyOffset;
- (double)keyInsetBottom;
- (double)returnKeySymbolFrameInset;
- (double)symbolFrameInset;
- (struct CGRect)dismissKeySymbolFrame;
- (struct CGRect)shiftKeySymbolFrame;
- (double)keyCornerRadius;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;
- (void)setAllowsPaddles:(_Bool)arg1;

@end

