//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGraphicsRendererFormat.h>

@interface UIGraphicsImageRendererFormat : UIGraphicsRendererFormat
{
    struct CGColorSpace *_overrideColorSpace;
    _Bool _wantsAlphaMask;
    _Bool _grayscale;
    _Bool _opaque;
    _Bool _prefersExtendedRange;
    long long _overrideBitsPerComponent;
    double _scale;
}

+ (id)formatForTraitCollection:(id)arg1;
+ (id)preferredFormat;
+ (id)defaultFormat;
@property(nonatomic) _Bool prefersExtendedRange; // @synthesize prefersExtendedRange=_prefersExtendedRange;
@property(nonatomic) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic, getter=_grayscale, setter=_setGrayscale:) _Bool _grayscale; // @synthesize _grayscale;
@property(nonatomic, getter=_overrideBitsPerComponent, setter=_setOverrideBitsPerComponent:) long long _overrideBitsPerComponent; // @synthesize _overrideBitsPerComponent;
@property(nonatomic, getter=_wantsAlphaMask, setter=_setWantsAlphaMask:) _Bool _wantsAlphaMask; // @synthesize _wantsAlphaMask;
@property(readonly, nonatomic, getter=_contextScale) double _contextScale;
@property(nonatomic, getter=_overrideColorSpace, setter=_setOverrideColorSpace:) struct CGColorSpace *_overrideColorSpace;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

