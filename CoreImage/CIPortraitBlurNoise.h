//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurNoise : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputLumaNoiseAmpl;
    NSNumber *inputLumaNoiseModelCoeff;
    CIVector *inputExtent;
}

@property(copy) CIVector *inputExtent; // @synthesize inputExtent;
@property(copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff; // @synthesize inputLumaNoiseModelCoeff;
@property(copy, nonatomic) NSNumber *inputLumaNoiseAmpl; // @synthesize inputLumaNoiseAmpl;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

