//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNImageSpecifier.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface _VNCIImageSpecifier : VNImageSpecifier
{
    CIImage *_ciImage;
}

- (void).cxx_destruct;
- (id)newImageBufferWithOptions:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)ciImage;
- (id)initWithCIImage:(id)arg1;
- (id)observationsCacheKey;

@end
