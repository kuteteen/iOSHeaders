//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface _XCTestExpectationImplementation : NSObject
{
    _Bool _fulfilled;
    NSString *_expectationDescription;
    id <XCTestExpectationDelegate> _delegate;
    _Bool _hasBeenWaitedOn;
    unsigned long long _expectedFulfillmentCount;
    unsigned long long _numberOfFulfillments;
    unsigned long long _creationToken;
    unsigned long long _fulfillmentToken;
    NSArray *_creationCallStackReturnAddresses;
    NSArray *_fulfillCallStackReturnAddresses;
    _Bool _inverted;
    _Bool _assertForOverFulfill;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long numberOfFulfillments; // @synthesize numberOfFulfillments=_numberOfFulfillments;
@property(nonatomic) unsigned long long expectedFulfillmentCount; // @synthesize expectedFulfillmentCount=_expectedFulfillmentCount;
@property(copy) NSArray *fulfillCallStackReturnAddresses; // @synthesize fulfillCallStackReturnAddresses=_fulfillCallStackReturnAddresses;
@property(copy) NSArray *creationCallStackReturnAddresses; // @synthesize creationCallStackReturnAddresses=_creationCallStackReturnAddresses;
@property unsigned long long fulfillmentToken; // @synthesize fulfillmentToken=_fulfillmentToken;
@property unsigned long long creationToken; // @synthesize creationToken=_creationToken;
@property _Bool assertForOverFulfill; // @synthesize assertForOverFulfill=_assertForOverFulfill;
@property _Bool inverted; // @synthesize inverted=_inverted;
@property _Bool hasBeenWaitedOn; // @synthesize hasBeenWaitedOn=_hasBeenWaitedOn;
@property(retain) id <XCTestExpectationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *expectationDescription; // @synthesize expectationDescription=_expectationDescription;
@property _Bool fulfilled; // @synthesize fulfilled=_fulfilled;
- (void).cxx_destruct;
- (id)init;

@end

