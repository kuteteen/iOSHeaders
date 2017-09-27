//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, PKCurrencyAmount;

@interface PKPaymentTransactionFeeItem : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _type;
    PKCurrencyAmount *_currencyAmount;
    NSString *_localizedDisplayName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(copy, nonatomic) PKCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToFeeItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (void)_initWithFeeDictionary:(id)arg1;
- (id)initWithFeeDictionary:(id)arg1;

@end

