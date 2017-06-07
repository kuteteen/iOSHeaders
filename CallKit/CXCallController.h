//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CXCallObserver, NSString;
@protocol OS_dispatch_queue;

@interface CXCallController : NSObject
{
    CXCallObserver *_callObserver;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSString *_extensionIdentifier;
}

@property(copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
- (void).cxx_destruct;
- (void)_requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTransactionWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTransactionWithActions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

