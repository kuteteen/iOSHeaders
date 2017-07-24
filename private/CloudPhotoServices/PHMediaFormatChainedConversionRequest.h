//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoServices/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest
{
    PHMediaFormatConversionRequest *_independentRequest;
    PHMediaFormatConversionRequest *_dependentRequest;
    CDUnknownBlockType _successUpdateHandler;
}

+ (id)chainedRequestForAdjustmentRenderRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id *)arg3;
+ (id)chainedRequestForRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id *)arg3 successUpdateHandler:(CDUnknownBlockType)arg4;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;
@property(copy) CDUnknownBlockType successUpdateHandler; // @synthesize successUpdateHandler=_successUpdateHandler;
@property(retain) PHMediaFormatConversionRequest *dependentRequest; // @synthesize dependentRequest=_dependentRequest;
@property(retain) PHMediaFormatConversionRequest *independentRequest; // @synthesize independentRequest=_independentRequest;
- (void).cxx_destruct;
- (void)postProcessSuccessfulCompositeRequest;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;

@end
