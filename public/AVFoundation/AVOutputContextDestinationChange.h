//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVOutputContextDestinationChangeInternal, NSString;

@interface AVOutputContextDestinationChange : NSObject
{
    AVOutputContextDestinationChangeInternal *_ivars;
}

- (void)_setStatus:(long long)arg1 cancellationReason:(id)arg2;
- (void)markAsCancelledWithReason:(id)arg1;
- (void)markAsFailed;
- (void)markAsFinished;
- (void)markAsInProgress;
@property(readonly) NSString *cancellationReason;
@property(readonly) long long status;
- (id)description;
- (void)dealloc;
- (id)init;

@end

