//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKDiscoverUserIdentitiesOperation : CKOperation
{
    NSArray *_userIdentityLookupInfos;
    CDUnknownBlockType _userIdentityDiscoveredBlock;
    CDUnknownBlockType _discoverUserIdentitiesCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType discoverUserIdentitiesCompletionBlock; // @synthesize discoverUserIdentitiesCompletionBlock=_discoverUserIdentitiesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType userIdentityDiscoveredBlock; // @synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock;
@property(copy, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (Class)operationInfoClass;
- (id)initWithUserIdentityLookupInfos:(id)arg1;
- (id)init;

@end

