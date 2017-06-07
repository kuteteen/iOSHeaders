//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorMatrix : CIFilter
{
    CIImage *inputImage;
    CIVector *inputRVector;
    CIVector *inputGVector;
    CIVector *inputBVector;
    CIVector *inputAVector;
    CIVector *inputBiasVector;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputBiasVector; // @synthesize inputBiasVector;
@property(retain, nonatomic) CIVector *inputAVector; // @synthesize inputAVector;
@property(retain, nonatomic) CIVector *inputBVector; // @synthesize inputBVector;
@property(retain, nonatomic) CIVector *inputGVector; // @synthesize inputGVector;
@property(retain, nonatomic) CIVector *inputRVector; // @synthesize inputRVector;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

