//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSMutableDictionary, NSOperationQueue, SSLookupRequest;
@protocol OS_dispatch_queue;

@interface MPStoreLookupBatcher : NSObject
{
    _Bool _hasCalledCompletionHandler;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_completeResponseDictionary;
    NSMutableDictionary *_completeResponseResultsDictionary;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSLookupRequest *_lookupRequest;
    unsigned long long _batchSize;
}

+ (id)_incompleteChildrenIDsForStoreResult:(id)arg1;
+ (id)_copyLookupRequest:(id)arg1;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly, nonatomic) SSLookupRequest *lookupRequest; // @synthesize lookupRequest=_lookupRequest;
- (void).cxx_destruct;
- (void)_onSerialQueue_mergeResponseDictionaryIntoCompleteResponseDictionary:(id)arg1;
- (void)_callCompletionHandlerIfNecessary;
- (void)_batchOperationDidComplete:(id)arg1;
- (void)performBatchedRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLookupRequest:(id)arg1;

@end

