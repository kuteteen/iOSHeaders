//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface TVImageScaleDecorator : TVImageDecorator
{
    _Bool _decoratedImageIsEquivalentToOriginal;
    _Bool _cornerContinuous;
    long long _scaleMode;
    double _focusedSizeIncrease;
    UIColor *_bgColor;
    struct CGSize _scaleToSize;
    struct UIEdgeInsets _padding;
    struct TVCornerRadii _cornerRadii;
}

@property(copy, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) _Bool cornerContinuous; // @synthesize cornerContinuous=_cornerContinuous;
@property(nonatomic) struct TVCornerRadii cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
- (void).cxx_destruct;
- (void)_applyCornerMaskForRect:(struct CGRect)arg1 toContext:(struct CGContext *)arg2;
- (struct UIEdgeInsets)_paddingAdjustedForUpscaling;
- (struct CGSize)_scaleToSizeAdjustedForUpscaling;
- (id)_imageFixedForRotation:(id)arg1;
- (void)_setDecoratedImageIsEquivalentToOriginal:(_Bool)arg1;
- (_Bool)needsAlphaForImage:(id)arg1;
- (double)_focusedSizeIncreaseFactor;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;
- (struct CGSize)expectedSize;
- (_Bool)loaderCropToFit;
- (struct CGSize)loaderScaleToSize;
- (id)decoratorIdentifier;
@property(nonatomic) double upscaleAdjustment;
@property(nonatomic) _Bool cropToFit;
- (_Bool)isEqual:(id)arg1;
- (id)initWithScaleToSize:(struct CGSize)arg1 cropToFit:(_Bool)arg2;
- (id)initWithScaleToSize:(struct CGSize)arg1 scaleMode:(long long)arg2;
- (id)initWithScaleToSize:(struct CGSize)arg1;
- (id)init;

@end

