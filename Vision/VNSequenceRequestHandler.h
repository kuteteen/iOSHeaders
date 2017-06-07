//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/VNRequestCancelling-Protocol.h>
#import <Vision/VNRequestWarming-Protocol.h>

@class VNRequestPerformer;

@interface VNSequenceRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling>
{
    VNRequestPerformer *_requestPerformer;
}

+ (id)asyncProcessingDispatchQueue;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)forcedCleanup;
+ (void)requestForcedCleanup;
- (void).cxx_destruct;
- (_Bool)performRequests:(id)arg1 error:(id *)arg2;
- (_Bool)performRequests:(id)arg1 onImageWithURL:(id)arg2 orientation:(int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onImageWithURL:(id)arg2 error:(id *)arg3;
- (void)cancelAllRequests;
- (_Bool)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;
- (_Bool)performRequests:(id)arg1 onImageSpecifier:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onImageData:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onImageURL:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCIImage:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 orientation:(int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 orientation:(int)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;
- (_Bool)_performRequests:(id)arg1 onUnvettedImageBuffer:(id)arg2 error:(id *)arg3;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

