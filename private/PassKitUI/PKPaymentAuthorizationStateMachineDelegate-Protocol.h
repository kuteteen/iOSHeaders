//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationStateParam;

@protocol PKPaymentAuthorizationStateMachineDelegate <NSObject>

@optional
- (_Bool)paymentAuthorizationStateMachine:(PKPaymentAuthorizationStateMachine *)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(PKPaymentAuthorizationStateParam *)arg4;
@end

