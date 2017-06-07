//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INCurrencyAmount, NSUserActivity;

@protocol INRideCompletionStatusExport <NSObject, JSExport>
+ (id)canceledMissedPickup;
+ (id)canceledByUser;
+ (id)canceledByService;
+ (id)completedWithOutstandingPaymentAmount:(INCurrencyAmount *)arg1;
+ (id)completedWithSettledPaymentAmount:(INCurrencyAmount *)arg1;
+ (id)completed;
@property(nonatomic, getter=isCanceledByService) _Bool canceledByService;
@property(nonatomic, getter=isOutstanding) _Bool outstanding;
@property(retain, nonatomic) INCurrencyAmount *paymentAmount;
@property(nonatomic, getter=isMissedPickup) _Bool missedPickup;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;
@property(nonatomic, getter=isCompleted) _Bool completed;
@property(retain, nonatomic) NSUserActivity *completionUserActivity;
- (id)init;
@end

