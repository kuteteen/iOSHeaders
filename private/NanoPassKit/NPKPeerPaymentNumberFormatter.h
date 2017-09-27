//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumberFormatter, NSString;

@interface NPKPeerPaymentNumberFormatter : NSObject
{
    NSNumberFormatter *_decimalNumberFormatter;
    NSNumberFormatter *_nonDecimalNumberFormatter;
    NSString *_currencyCode;
}

@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (void).cxx_destruct;
- (id)currencySymbol;
- (id)stringFromNumber:(id)arg1;
- (id)initWithCurrencyCode:(id)arg1;
- (id)init;

@end

