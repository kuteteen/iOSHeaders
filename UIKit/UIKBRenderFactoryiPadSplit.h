//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBRenderFactoryiPad.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (double)keyInsetBottom;
- (double)symbolFrameInset;
- (double)defaultPathWeight;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (double)skinnyKeyThreshold;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)shiftKeyImageName;
- (id)deleteOnKeyImageName;
- (id)deleteKeyImageName;
- (double)keyCornerRadius;
- (id)muttitapReverseKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (struct CGPoint)shiftKeyOffset;
- (struct CGPoint)deleteKeyOffset;
- (struct CGPoint)dismissKeyOffset;
- (struct CGPoint)internationalKeyOffset;

@end

