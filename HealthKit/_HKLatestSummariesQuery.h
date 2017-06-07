//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKLatestSummariesQueryClientInterface-Protocol.h>

@class NSCalendar, NSDate, NSSet, NSString;

@interface _HKLatestSummariesQuery : HKQuery <HKLatestSummariesQueryClientInterface>
{
    NSDate *_summaryDate;
    NSCalendar *_calendar;
    NSSet *_typeFilters;
    CDUnknownBlockType _resultsHandler;
    CDUnknownBlockType _updateHandler;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
- (void).cxx_destruct;
- (void)client_deliverResetSummaries:(id)arg1 forQuery:(id)arg2;
- (void)client_deliverUpdatedSummaries:(id)arg1 forQuery:(id)arg2;
- (void)client_deliverSummaries:(id)arg1 forQuery:(id)arg2;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_validate;
- (void)queue_populateConfiguration:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

