//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class PKPeerPaymentAccount, PKPeerPaymentPassDetailsResponse;

@interface PKPeerPaymentCredential : PKPaymentCredential
{
    PKPeerPaymentAccount *_account;
    PKPeerPaymentPassDetailsResponse *_passDetailsResponse;
}

@property(retain, nonatomic) PKPeerPaymentPassDetailsResponse *passDetailsResponse; // @synthesize passDetailsResponse=_passDetailsResponse;
@property(readonly, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithPeerPaymentAccount:(id)arg1;

@end
