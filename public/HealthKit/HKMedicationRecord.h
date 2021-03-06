//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKMedicalCoding, HKMedicalDate, HKMedicationRecordType, NSArray, NSString;

@interface HKMedicationRecord : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    _Bool _notTaken;
    NSString *_asserter;
    HKMedicalDate *_assertionDate;
    long long _assertionType;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalDate *_effectiveStartDate;
    NSArray *_medicationCodings;
    NSArray *_reasonForUseCodings;
    NSArray *_reasonsNotTakenCodings;
    HKMedicalCoding *_statusCoding;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)medicationRecordWithNote:(id)arg1 enteredInError:(_Bool)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 medicationCodings:(id)arg8 assertionType:(long long)arg9 asserter:(id)arg10 assertionDate:(id)arg11 statusCoding:(id)arg12 dosages:(id)arg13 earliestDosageDate:(id)arg14 reasonForUseCodings:(id)arg15 notTaken:(_Bool)arg16 reasonsNotTakenCodings:(id)arg17 effectiveStartDate:(id)arg18 effectiveEndDate:(id)arg19;
+ (id)defaultDisplayString;
+ (id)statusCodingPreferredSystems;
+ (id)reasonsNotTakenCodingsPreferredSystems;
+ (id)reasonForUseCodingsPreferredSystems;
+ (id)medicationCodingsPreferredSystems;
@property(readonly, copy, nonatomic) HKMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property(readonly, copy, nonatomic) NSArray *reasonsNotTakenCodings; // @synthesize reasonsNotTakenCodings=_reasonsNotTakenCodings;
@property(readonly, copy, nonatomic) NSArray *reasonForUseCodings; // @synthesize reasonForUseCodings=_reasonForUseCodings;
@property(readonly, nonatomic) _Bool notTaken; // @synthesize notTaken=_notTaken;
@property(readonly, copy, nonatomic) NSArray *medicationCodings; // @synthesize medicationCodings=_medicationCodings;
@property(readonly, copy, nonatomic) HKMedicalDate *effectiveStartDate; // @synthesize effectiveStartDate=_effectiveStartDate;
@property(readonly, copy, nonatomic) HKMedicalDate *effectiveEndDate; // @synthesize effectiveEndDate=_effectiveEndDate;
@property(readonly, copy, nonatomic) HKMedicalDate *earliestDosageDate; // @synthesize earliestDosageDate=_earliestDosageDate;
@property(readonly, copy, nonatomic) NSArray *dosages; // @synthesize dosages=_dosages;
@property(readonly, nonatomic) long long assertionType; // @synthesize assertionType=_assertionType;
@property(readonly, copy, nonatomic) HKMedicalDate *assertionDate; // @synthesize assertionDate=_assertionDate;
@property(readonly, copy, nonatomic) NSString *asserter; // @synthesize asserter=_asserter;
- (void).cxx_destruct;
@property(readonly, nonatomic) HKMedicationRecordType *medicationRecordType;
- (id)_validateConfiguration;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setReasonsNotTakenCodings:(id)arg1;
- (void)_setNotTaken:(_Bool)arg1;
- (void)_setReasonForUseCodings:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setDosages:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setAssertionDate:(id)arg1;
- (void)_setAsserter:(id)arg1;
- (void)_setAssertionType:(long long)arg1;
- (void)_setMedicationCodings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)_init;
- (id)init;
- (id)medicalRecordPreferredSystems;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)statusCodingTasks;
- (id)reasonsNotTakenCodingsTasks;
- (id)reasonForUseCodingsTasks;
- (id)medicationCodingsTasks;

@end

