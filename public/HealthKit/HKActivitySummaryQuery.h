//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKActivitySummaryQueryClientInterface-Protocol.h>

@class NSString;

@interface HKActivitySummaryQuery : HKQuery <HKActivitySummaryQueryClientInterface>
{
    _Bool _initialHandlerCalled;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _updateHandler;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)arg1;
- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)client_deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2;
- (id)initWithPredicate:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
