//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBCurrencyAmountValue, _INPBUserActivity;

@interface _INPBRideCompletionStatus : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBUserActivity *_completionUserActivity;
    _INPBCurrencyAmountValue *_paymentAmount;
    _Bool _canceled;
    _Bool _canceledByService;
    _Bool _completed;
    _Bool _missedPickup;
    _Bool _outstanding;
    struct {
        unsigned int canceled:1;
        unsigned int canceledByService:1;
        unsigned int completed:1;
        unsigned int missedPickup:1;
        unsigned int outstanding:1;
    } _has;
}

+ (id)options;
@property(nonatomic) _Bool outstanding; // @synthesize outstanding=_outstanding;
@property(retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount; // @synthesize paymentAmount=_paymentAmount;
@property(nonatomic) _Bool missedPickup; // @synthesize missedPickup=_missedPickup;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) _INPBUserActivity *completionUserActivity; // @synthesize completionUserActivity=_completionUserActivity;
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
@property(nonatomic) _Bool hasOutstanding;
@property(readonly, nonatomic) _Bool hasPaymentAmount;
@property(nonatomic) _Bool hasMissedPickup;
@property(nonatomic) _Bool hasCanceled;
@property(nonatomic) _Bool hasCompleted;
@property(readonly, nonatomic) _Bool hasCompletionUserActivity;
@property(nonatomic) _Bool hasCanceledByService;
@property(nonatomic) _Bool canceledByService;

@end

