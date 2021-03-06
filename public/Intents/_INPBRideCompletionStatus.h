//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields, _INPBCurrencyAmountValue, _INPBUserActivity;

@interface _INPBRideCompletionStatus : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _feedbackTypes;
    _INPBUserActivity *_completionUserActivity;
    NSMutableArray *_defaultTippingOptions;
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

+ (Class)defaultTippingOptionsType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *defaultTippingOptions; // @synthesize defaultTippingOptions=_defaultTippingOptions;
@property(nonatomic) _Bool canceledByService; // @synthesize canceledByService=_canceledByService;
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
- (id)defaultTippingOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultTippingOptionsCount;
- (void)addDefaultTippingOptions:(id)arg1;
- (void)clearDefaultTippingOptions;
- (int)StringAsFeedbackTypes:(id)arg1;
- (id)feedbackTypesAsString:(int)arg1;
- (void)setFeedbackTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)feedbackTypeAtIndex:(unsigned long long)arg1;
- (void)addFeedbackType:(int)arg1;
- (void)clearFeedbackTypes;
@property(readonly, nonatomic) int *feedbackTypes;
@property(readonly, nonatomic) unsigned long long feedbackTypesCount;
@property(nonatomic) _Bool hasCanceledByService;
@property(nonatomic) _Bool hasOutstanding;
@property(readonly, nonatomic) _Bool hasPaymentAmount;
@property(nonatomic) _Bool hasMissedPickup;
@property(nonatomic) _Bool hasCanceled;
@property(nonatomic) _Bool hasCompleted;
@property(readonly, nonatomic) _Bool hasCompletionUserActivity;
- (void)dealloc;

@end

