//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSMessage, NSDecimalNumber, NSString, NSUUID, PKCurrencyAmount, PKPeerPaymentRequestToken, PKProtobufPeerPaymentMessage;

@interface PKPeerPaymentMessage : NSObject
{
    PKProtobufPeerPaymentMessage *_protoMessage;
    MSMessage *_underlyingMessage;
}

@property(readonly, nonatomic) MSMessage *underlyingMessage; // @synthesize underlyingMessage=_underlyingMessage;
- (void).cxx_destruct;
- (id)description;
- (void)_updateLayoutContents;
- (void)_updateSummaryText;
- (void)_updateDataURL;
- (void)updateWithPeerPaymentPerformResponse:(id)arg1;
@property(readonly, nonatomic) _Bool hasBeenSent;
@property(copy, nonatomic) NSString *memo;
@property(copy, nonatomic) NSString *transactionIdentifier;
@property(copy, nonatomic) NSString *paymentIdentifier;
@property(copy, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property(copy, nonatomic) NSString *recipientAddress;
@property(copy, nonatomic) NSString *senderAddress;
@property(copy, nonatomic) PKCurrencyAmount *currencyAmount;
@property(copy, nonatomic) NSDecimalNumber *amount;
@property(copy, nonatomic) NSString *currency;
@property(nonatomic) unsigned long long type;
- (id)_requestDeviceScoreIdentifier;
@property(readonly, copy, nonatomic) NSUUID *identifier;
- (id)initWithUnderlyingMessage:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 session:(id)arg2;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

@end

