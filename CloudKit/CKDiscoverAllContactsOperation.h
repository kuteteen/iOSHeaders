//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllContactsOperation : CKOperation
{
    CDUnknownBlockType _discoverAllContactsCompletionBlock;
    NSMutableArray *_discoveredUserInfos;
}

@property(retain, nonatomic) NSMutableArray *discoveredUserInfos; // @synthesize discoveredUserInfos=_discoveredUserInfos;
@property(copy, nonatomic) CDUnknownBlockType discoverAllContactsCompletionBlock; // @synthesize discoverAllContactsCompletionBlock=_discoverAllContactsCompletionBlock;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (Class)operationInfoClass;
- (void)setLongLived:(_Bool)arg1;
- (id)init;

@end

