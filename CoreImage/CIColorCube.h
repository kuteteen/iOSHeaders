//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorCube : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputCubeDimension;
    NSData *inputCubeData;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSData *inputCubeData; // @synthesize inputCubeData;
@property(retain, nonatomic) NSNumber *inputCubeDimension; // @synthesize inputCubeDimension;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_checkInputs;
- (id)cubeImage;
- (id)_kernelOpaque;
- (id)_kernel;

@end

