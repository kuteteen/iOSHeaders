//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCOperationRetrySignal.h"

@class NSObject<OS_dispatch_group>, NSString;

@interface FCOperationExternalSignal : NSObject <FCOperationRetrySignal>
{
    _Bool _result;
    NSObject<OS_dispatch_group> *_group;
}

- (void).cxx_destruct;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;
- (void)triggerWithRetry:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

