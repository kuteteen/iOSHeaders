//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNBlurSignature : NSObject
{
    void *_signatureData;
}

+ (id)computeBlurSignatureForGrayscaleImage:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (void *)getSignatureData;
- (void)setSignatureData:(void *)arg1;
- (id)initWithSignatureData:(void *)arg1;
- (void)dealloc;

@end

