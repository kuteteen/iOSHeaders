//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIPerspectiveCorrection : CIFilter
{
    CIImage *inputImage;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputBottomLeft; // @synthesize inputBottomLeft;
@property(retain, nonatomic) CIVector *inputBottomRight; // @synthesize inputBottomRight;
@property(retain, nonatomic) CIVector *inputTopRight; // @synthesize inputTopRight;
@property(retain, nonatomic) CIVector *inputTopLeft; // @synthesize inputTopLeft;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

