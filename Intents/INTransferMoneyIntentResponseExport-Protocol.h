//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@protocol INTransferMoneyIntentResponseExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *transactionNote;
@property(copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property(copy, nonatomic) INPaymentAmount *transactionAmount;
@property(copy, nonatomic) INPaymentAccount *toAccount;
@property(copy, nonatomic) INPaymentAccount *fromAccount;
@property(readonly, nonatomic) long long code;
@end

