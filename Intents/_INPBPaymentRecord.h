//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContact, _INPBCurrencyAmount, _INPBPaymentMethodValue, _INPBString;

@interface _INPBPaymentRecord : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBCurrencyAmount *_feeAmount;
    _INPBString *_note;
    _INPBContact *_payee;
    _INPBContact *_payer;
    _INPBPaymentMethodValue *_paymentMethod;
    int _status;
    CDStruct_47fe53f2 _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBCurrencyAmount *feeAmount; // @synthesize feeAmount=_feeAmount;
@property(retain, nonatomic) _INPBPaymentMethodValue *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) _INPBString *note; // @synthesize note=_note;
@property(retain, nonatomic) _INPBCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(retain, nonatomic) _INPBContact *payer; // @synthesize payer=_payer;
@property(retain, nonatomic) _INPBContact *payee; // @synthesize payee=_payee;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasFeeAmount;
@property(readonly, nonatomic) _Bool hasPaymentMethod;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasNote;
@property(readonly, nonatomic) _Bool hasCurrencyAmount;
@property(readonly, nonatomic) _Bool hasPayer;
@property(readonly, nonatomic) _Bool hasPayee;

@end

