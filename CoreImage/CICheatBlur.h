//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheatBlur : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CICross4;
- (id)_CIBox6;
- (id)_CIBox4;

@end

