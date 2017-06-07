//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector;

__attribute__((visibility("hidden")))
@interface CISmoothLinearGradient : CIFilter
{
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property(retain, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(retain, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
- (id)outputImage;
- (id)_kernel;

@end

