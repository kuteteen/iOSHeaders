//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIImageProcessorInOut.h>

#import <CoreImage/CIImageProcessorInput-Protocol.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>
{
}

@property(readonly, nonatomic) id <MTLTexture> metalTexture;
@property(readonly, nonatomic) const void *baseAddress;
- (void)dealloc;
-     // Error parsing type: @76@0:8^{__IOSurface=}16{Texture=(?={?=II}^v)}24B32{CGRect={CGPoint=dd}{CGSize=dd}}36^{Context=^^?{atomic<unsigned int>=AI}^{CGColorSpace}^{CGColorSpace}iBBBB^{CGContext}fB{CGRect={CGPoint=dd}{CGSize=dd}}{CGAffineTransform=dddddd}IQQiB[1024{TreeCacheElement=Q^{Kernel}}]Q^{ObjectCache<CI::Node>}^{ObjectCache<CI::Node>}dd@^{RenderTask}iBQ@@}68, name: initWithSurface:texture:allowSRGB:bounds:context:

// Remaining properties
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) struct CGRect region;

@end

