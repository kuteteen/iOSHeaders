//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallObserverDataSourceDelegate-Protocol.h>

@class NSArray, NSString;
@protocol CXCallObserverDataSource, CXCallObserverDelegate, OS_dispatch_queue;

@interface CXCallObserver : NSObject <CXCallObserverDataSourceDelegate>
{
    id <CXCallObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    id <CXCallObserverDataSource> _dataSource;
}

@property(readonly, nonatomic) id <CXCallObserverDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataSource:(id)arg1 callChanged:(id)arg2;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *calls;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 concurrentQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

