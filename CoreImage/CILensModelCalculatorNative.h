//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSDictionary;

__attribute__((visibility("hidden")))
@interface CILensModelCalculatorNative : CIFilter
{
    CIImage *inputImage;
    CIVector *inputFocusRect;
    CIImage *inputMinMaxImage;
    NSDictionary *inputTuningParameters;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputMinMaxImage; // @synthesize inputMinMaxImage;
@property(copy) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

