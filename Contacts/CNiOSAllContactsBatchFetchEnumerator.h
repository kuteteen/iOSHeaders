//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNBatchFetchEnumerator-Protocol.h>

@class CNContactFetchRequest, NSError, NSString;
@protocol CNDataMapper;

__attribute__((visibility("hidden")))
@interface CNiOSAllContactsBatchFetchEnumerator : NSObject <CNBatchFetchEnumerator>
{
    id <CNDataMapper> _dataMapper;
    CNContactFetchRequest *_fetchRequest;
    long long _batchSize;
    long long _totalContactsCount;
    unsigned long long _nextStartIndex;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long nextStartIndex; // @synthesize nextStartIndex=_nextStartIndex;
@property(nonatomic) long long totalContactsCount; // @synthesize totalContactsCount=_totalContactsCount;
@property(nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) CNContactFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(nonatomic) __weak id <CNDataMapper> dataMapper; // @synthesize dataMapper=_dataMapper;
- (void).cxx_destruct;
- (id)nextContactsAndMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)initWithMapper:(id)arg1 fetchRequest:(id)arg2 batchSize:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

