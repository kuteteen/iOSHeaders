//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTHeadlineResultsSource-Protocol.h>

@class FCAsyncOnceOperation, NSString;
@protocol FCContentContext, NTHeadlineResultsFetchDescriptor, NTNetworkEventTracker, NTReadablePrivateDataStorage;

@interface NTHeadlineResultsSource : NSObject <NTHeadlineResultsSource>
{
    _Bool _flushingHasBeenEnabled;
    id <NTHeadlineResultsFetchDescriptor> _fetchDescriptor;
    id <NTReadablePrivateDataStorage> _privateDataStorage;
    id <FCContentContext> _contentContext;
    id <NTNetworkEventTracker> _networkEventTracker;
    CDUnknownBlockType _sessionProvider;
    FCAsyncOnceOperation *_firstOperationCompletionOperation;
    NSObject *_latestConstituentRecordsHoldToken;
}

@property(nonatomic, getter=hasFlushingBeenEnabled) _Bool flushingHasBeenEnabled; // @synthesize flushingHasBeenEnabled=_flushingHasBeenEnabled;
@property(retain, nonatomic) NSObject *latestConstituentRecordsHoldToken; // @synthesize latestConstituentRecordsHoldToken=_latestConstituentRecordsHoldToken;
@property(retain, nonatomic) FCAsyncOnceOperation *firstOperationCompletionOperation; // @synthesize firstOperationCompletionOperation=_firstOperationCompletionOperation;
@property(copy, nonatomic) CDUnknownBlockType sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) id <NTNetworkEventTracker> networkEventTracker; // @synthesize networkEventTracker=_networkEventTracker;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) id <NTReadablePrivateDataStorage> privateDataStorage; // @synthesize privateDataStorage=_privateDataStorage;
@property(copy, nonatomic) id <NTHeadlineResultsFetchDescriptor> fetchDescriptor; // @synthesize fetchDescriptor=_fetchDescriptor;
- (void).cxx_destruct;
- (void)fetchLatestHeadlinesWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 networkEventTracker:(id)arg4 sessionProvider:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
