//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIPortraitEffect.h>

__attribute__((visibility("hidden")))
@interface CIPortraitEffectLight : CIPortraitEffect
{
}

- (id)outputImage;
- (id)enrichImage:(id)arg1;
- (id)imageForLandmarks:(id)arg1;
- (id)processEyesIn:(id)arg1 withEyeBlur:(id)arg2 landmarks:(id)arg3;
- (id)processTeethIn:(id)arg1 withTeethMask:(id)arg2;
- (id)processSkinIn:(id)arg1 withSkinMask:(id)arg2;
- (id)teethMaskForLandmarks:(id)arg1;
- (id)skinMaskForLandmarks:(id)arg1;
- (id)processTeethIn:(id)arg1 withFaceMask:(id)arg2;
- (id)processSkinIn:(id)arg1 withFaceMask:(id)arg2;
- (id)faceMaskForLandmarks:(id)arg1;
- (id)eyeBlurForLandmarks:(id)arg1;
- (id)maskForLandmarks:(id)arg1 withFilterNamed:(id)arg2;
- (id)_textureAdd;
- (id)_textureDiff;
- (id)_mixKernel;
- (id)_eyeBrightenSoftlight;
- (id)_enrich;
- (id)_whitenTeeth;

@end

