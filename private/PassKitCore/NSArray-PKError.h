//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (PKError)
+ (id)pk_FilteredCardErrors:(id)arg1;
+ (id)pk_FilteredShippingErrorsForContactFields:(id)arg1 errors:(id)arg2;
+ (id)pk_FilteredBillingErrorsForContactFields:(id)arg1 errors:(id)arg2;
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1;
+ (id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;
@end

