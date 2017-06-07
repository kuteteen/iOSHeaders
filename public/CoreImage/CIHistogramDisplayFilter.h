//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHistogramDisplayFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputHeight;
    NSNumber *inputHighLimit;
    NSNumber *inputLowLimit;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputLowLimit; // @synthesize inputLowLimit;
@property(retain, nonatomic) NSNumber *inputHighLimit; // @synthesize inputHighLimit;
@property(retain, nonatomic) NSNumber *inputHeight; // @synthesize inputHeight;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end
