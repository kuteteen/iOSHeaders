//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPLByClassExtractionStep : CPLBatchExtractionStep
{
    id <NSFastEnumeration> _changeEnumerator;
    CDUnknownFunctionPointerType _query;
    Class _extractionClass;
    unsigned long long _maximumCount;
    NSString *_queryDescription;
}

@property(readonly, copy, nonatomic) NSString *queryDescription; // @synthesize queryDescription=_queryDescription;
@property(readonly, nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;
@property(readonly, nonatomic) Class extractionClass; // @synthesize extractionClass=_extractionClass;
- (void).cxx_destruct;
- (id)shortDescription;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (void)reset;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithStorage:(id)arg1 description:(id)arg2 class:(Class)arg3 maximumCount:(unsigned long long)arg4 query:(CDUnknownFunctionPointerType)arg5;

@end

