//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PKPaymentTransaction;

@interface NPKPeerPaymentTransactionDetails : NSObject
{
    PKPaymentTransaction *_transaction;
    NSString *_serviceIdentifier;
    unsigned long long _paymentStatus;
    NSArray *_availableActions;
}

@property(retain, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(nonatomic) unsigned long long paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)description;

@end

