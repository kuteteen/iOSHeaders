//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class NSNumber;

@interface VNCreateImageprintRequest : VNImageBasedRequest
{
    NSNumber *_timeStamp;
}

@property(retain, nonatomic) NSNumber *timeStamp; // @synthesize timeStamp=_timeStamp;
- (void).cxx_destruct;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (id)observationsCacheKey;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

