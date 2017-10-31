//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CPLBatchExtractionStep : NSObject
{
    id <CPLBatchExtractionStrategyStorage> _storage;
}

@property(retain, nonatomic) id <CPLBatchExtractionStrategyStorage> storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)description;
- (id)shortDescription;
- (void)resetConditionallyFromNewIncomingChange:(id)arg1;
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (void)reset;
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithStorage:(id)arg1;

@end

