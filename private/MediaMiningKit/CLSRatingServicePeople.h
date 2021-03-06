//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSRatingServicePerson.h>

@interface CLSRatingServicePeople : CLSRatingServicePerson
{
    float _contactCountThreshold;
    float _relationshipCountThreshold;
    float _familyCountThreshold;
    float _coworkerCountThreshold;
    float _homeAddressCountThreshold;
    float _workAddressCountThreshold;
    float _birthdayCountThreshold;
    float _companyCountThreshold;
    float _facebookCountThreshold;
    float _emailAddressCountThreshold;
    float _relationshipCountRelationshipsThreshold;
    float _homeAddressCountRelationshipsThreshold;
    float _workAddressCountRelationshipsThreshold;
    float _birthdayCountRelationshipsThreshold;
    float _companyCountRelationshipsThreshold;
    float _facebookCountRelationshipsThreshold;
    float _emailAddressCountRelationshipsThreshold;
}

+ (id)ratingServiceWithDefaultPlistAndRatingServiceContacts:(id)arg1;
- (id)usageRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)localRateWithWeight:(float)arg1 andOperation:(id)arg2;
- (id)checklistsWithOperation:(id)arg1;
- (void)_setThresholdsWithPlistDictionary:(id)arg1;
- (id)init;
- (id)initWithRatingServiceContacts:(id)arg1 andPlist:(id)arg2;

@end

