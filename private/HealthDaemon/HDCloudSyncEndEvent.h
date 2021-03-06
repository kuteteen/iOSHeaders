//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncEvent.h>

#import "HDAnalyticSubmissionEvent.h"

@class NSError, NSNumber, NSString;

@interface HDCloudSyncEndEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent>
{
    double _duration;
    long long _result;
    NSNumber *_countSinceLastSuccess;
    NSNumber *_timeIntervalSinceLastSuccess;
    NSError *_error;
    NSError *_underlyingError;
}

+ (id)_underlyingErrorForError:(id)arg1;
+ (id)endEventForStartEvent:(id)arg1 result:(long long)arg2 error:(id)arg3;
+ (id)endEventForOperation:(long long)arg1 operationIdentifier:(id)arg2 configuration:(id)arg3 startTime:(id)arg4 result:(long long)arg5 error:(id)arg6;
@property(readonly, copy, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSNumber *timeIntervalSinceLastSuccess; // @synthesize timeIntervalSinceLastSuccess=_timeIntervalSinceLastSuccess;
@property(readonly, copy, nonatomic) NSNumber *countSinceLastSuccess; // @synthesize countSinceLastSuccess=_countSinceLastSuccess;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithProfile:(id)arg1 build:(id)arg2 internal:(_Bool)arg3 operation:(long long)arg4 reason:(long long)arg5 options:(unsigned long long)arg6 type:(long long)arg7 syncCirclePrefix:(id)arg8 containerID:(id)arg9 syncID:(id)arg10 operationID:(id)arg11 startTime:(id)arg12 result:(long long)arg13 error:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

