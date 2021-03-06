//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKMedicalCoding, HKMedicalDate, HKVaccinationRecordType, NSArray, NSString;

@interface HKVaccinationRecord : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    _Bool _notGiven;
    _Bool _patientReported;
    HKMedicalDate *_administrationDate;
    NSArray *_bodySiteCoding;
    NSString *_doseNumber;
    NSString *_doseQuantity;
    HKMedicalDate *_expirationDate;
    NSString *_performer;
    NSString *_reaction;
    NSArray *_reasonsCodings;
    NSArray *_reasonsNotGivenCodings;
    NSArray *_routeCodings;
    HKMedicalCoding *_statusCoding;
    NSArray *_vaccinationCodings;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)vaccinationRecordWithNote:(id)arg1 enteredInError:(_Bool)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 vaccinationCodings:(id)arg8 expirationDate:(id)arg9 doseNumber:(id)arg10 doseQuantity:(id)arg11 performer:(id)arg12 bodySiteCoding:(id)arg13 reaction:(id)arg14 notGiven:(_Bool)arg15 administrationDate:(id)arg16 statusCoding:(id)arg17 patientReported:(_Bool)arg18 routeCodings:(id)arg19 reasonsCodings:(id)arg20 reasonsNotGivenCodings:(id)arg21;
+ (id)defaultDisplayString;
+ (id)vaccinationCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (id)routeCodingsPreferredSystems;
+ (id)reasonsNotGivenCodingsPreferredSystems;
+ (id)reasonsCodingsPreferredSystems;
+ (id)bodySiteCodingPreferredSystems;
@property(readonly, copy, nonatomic) NSArray *vaccinationCodings; // @synthesize vaccinationCodings=_vaccinationCodings;
@property(readonly, copy, nonatomic) HKMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property(readonly, copy, nonatomic) NSArray *routeCodings; // @synthesize routeCodings=_routeCodings;
@property(readonly, copy, nonatomic) NSArray *reasonsNotGivenCodings; // @synthesize reasonsNotGivenCodings=_reasonsNotGivenCodings;
@property(readonly, copy, nonatomic) NSArray *reasonsCodings; // @synthesize reasonsCodings=_reasonsCodings;
@property(readonly, copy, nonatomic) NSString *reaction; // @synthesize reaction=_reaction;
@property(readonly, copy, nonatomic) NSString *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) _Bool patientReported; // @synthesize patientReported=_patientReported;
@property(readonly, nonatomic) _Bool notGiven; // @synthesize notGiven=_notGiven;
@property(readonly, copy, nonatomic) HKMedicalDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *doseQuantity; // @synthesize doseQuantity=_doseQuantity;
@property(readonly, copy, nonatomic) NSString *doseNumber; // @synthesize doseNumber=_doseNumber;
@property(readonly, copy, nonatomic) NSArray *bodySiteCoding; // @synthesize bodySiteCoding=_bodySiteCoding;
@property(readonly, copy, nonatomic) HKMedicalDate *administrationDate; // @synthesize administrationDate=_administrationDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) HKVaccinationRecordType *vaccinationRecordType;
- (id)_validateConfiguration;
- (void)_setReasonsNotGivenCodings:(id)arg1;
- (void)_setReasonsCodings:(id)arg1;
- (void)_setRouteCodings:(id)arg1;
- (void)_setPatientReported:(_Bool)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setAdministrationDate:(id)arg1;
- (void)_setNotGiven:(_Bool)arg1;
- (void)_setReaction:(id)arg1;
- (void)_setBodySiteCoding:(id)arg1;
- (void)_setPerformer:(id)arg1;
- (void)_setDoseQuantity:(id)arg1;
- (void)_setDoseNumber:(id)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setVaccinationCodings:(id)arg1;
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
- (id)vaccinationCodingsTasks;
- (id)statusCodingTasks;
- (id)routeCodingsTasks;
- (id)reasonsNotGivenCodingsTasks;
- (id)reasonsCodingsTasks;
- (id)bodySiteCodingTasks;

@end

